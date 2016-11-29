//
//  PASImageView.swift
//  PASImageView
//
//  Created by Pierre Abi-aad on 09/06/2014.
//  Copyright (c) 2014 Pierre Abi-aad. All rights reserved.
//

import UIKit
import QuartzCore

let spm_identifier  = "pas.imagecache.tg"
let kLineWidth      :CGFloat = 3.0

func rad(degrees : Float) -> Float {
    return ((degrees) / Float((180.0/M_PI)))
}


final class SPMImageCache : NSObject {
    var cachePath = String()
    let fileManager = FileManager.default
    
    override init() {
        let paths = NSSearchPathForDirectoriesInDomains(FileManager.SearchPathDirectory.cachesDirectory, FileManager.SearchPathDomainMask.userDomainMask, true)
        let rootCachePath : AnyObject = paths[0] as AnyObject
        
        cachePath = rootCachePath.appendingPathComponent(spm_identifier)
        
        if !fileManager.fileExists(atPath: cachePath) {
            do {
                try fileManager.createDirectory(atPath: cachePath, withIntermediateDirectories: false, attributes: nil)
            } catch let error as NSError {
                print(error)
            }
        }
        super.init()
    }
    
    func image(image: UIImage?, URL: NSURL) {
        guard let image = image, let fileExtension = URL.pathExtension else { return }
        
        var data : NSData?
        if fileExtension == "png" {
            data = UIImagePNGRepresentation(image) as NSData?
        } else if fileExtension == "jpg" || fileExtension == "jpeg" {
            data = UIImageJPEGRepresentation(image, 1.0) as NSData?
        }
        
        guard let imageData = data else { return }
        imageData.write(toFile: (self.cachePath as NSString).appendingPathComponent(String(format: "%u.%@", URL.hash, fileExtension)), atomically: true)
        
    }
    
    func imageForURL(URL: NSURL) -> UIImage? {
        if let fileExtension = URL.pathExtension {
            let path = (self.cachePath as NSString).appendingPathComponent(String(format: "%u.%@", URL.hash, fileExtension))
            if self.fileManager.fileExists(atPath: path) {
                if let data = NSData(contentsOfFile: path) {
                    return UIImage(data: data as Data)
                }
            }
        }
        return nil
    }
}


@IBDesignable
public class PASImageView : UIView, URLSessionDownloadDelegate {
    
    @IBInspectable public var backgroundProgressColor : UIColor  = UIColor.black {
        didSet { backgroundLayer.strokeColor = backgroundProgressColor.cgColor }
    }
    
    @IBInspectable public var progressColor : UIColor  = UIColor.red {
        didSet { progressLayer.strokeColor = progressColor.cgColor }
    }
    
    @IBInspectable public var placeHolderImage : UIImage? {
        didSet {
            if containerImageView.image == nil {
                containerImageView.image = placeHolderImage
            }
        }
    }
    
    public var cacheEnabled                = true
    public var delegate                    :PASImageViewDelegate?
    
    private var backgroundLayer             = CAShapeLayer()
    private var progressLayer               = CAShapeLayer()
    private var containerImageView          = UIImageView()
    private var progressContainer           = UIView()
    private var cache                       = SPMImageCache()
    
    //MARK:- Initialization implemention
    
    required public init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        self.setupView()
    }
    
    public convenience init(frame: CGRect, delegate: PASImageViewDelegate) {
        self.init(frame: frame)
        self.delegate = delegate
    }
    
    public override init(frame: CGRect) {
        super.init(frame: frame)
        self.setupView()
    }
    
    override public func layoutSubviews() {
        self.layer.cornerRadius = self.bounds.width/2.0
        progressContainer.layer.cornerRadius = self.bounds.width/2.0
        containerImageView.layer.cornerRadius = self.bounds.width/2.0
        
        updatePaths()
    }
    
    //MARK:- Obj-C action

    func handleSingleTap(gesture: UIGestureRecognizer) {
        delegate?.PAImageView(didTapped: self)
    }
    
    //MARK:- Private methods

    private func setConstraints() {
        
        // containerImageView
        containerImageView.translatesAutoresizingMaskIntoConstraints = false
        self.addConstraint(NSLayoutConstraint(item: containerImageView, attribute: .width, relatedBy: .equal, toItem: self, attribute: .width, multiplier: 1, constant: -2))
        self.addConstraint(NSLayoutConstraint(item: containerImageView, attribute: .height, relatedBy: .equal, toItem: self, attribute: .height, multiplier: 1, constant: -2))
        self.addConstraint(NSLayoutConstraint(item: containerImageView, attribute: .centerX, relatedBy: .equal, toItem: self, attribute: .centerX, multiplier: 1, constant: 0))
        self.addConstraint(NSLayoutConstraint(item: containerImageView, attribute: .centerY, relatedBy: .equal, toItem: self, attribute: .centerY, multiplier: 1, constant: 0))
        
        // progressContainer
        
        progressContainer.translatesAutoresizingMaskIntoConstraints = false
        self.addConstraint(NSLayoutConstraint(item: progressContainer, attribute: .width, relatedBy: .equal, toItem: self, attribute: .width, multiplier: 1, constant: 0))
        self.addConstraint(NSLayoutConstraint(item: progressContainer, attribute: .height, relatedBy: .equal, toItem: self, attribute: .height, multiplier: 1, constant: 0))
        self.addConstraint(NSLayoutConstraint(item: progressContainer, attribute: .centerX, relatedBy: .equal, toItem: self, attribute: .centerX, multiplier: 1, constant: 0))
        self.addConstraint(NSLayoutConstraint(item: progressContainer, attribute: .centerY, relatedBy: .equal, toItem: self, attribute: .centerY, multiplier: 1, constant: 0))
        
    }
    
    private func setupView() {
        self.layer.masksToBounds        = false
        self.clipsToBounds              = true
        
        updatePaths()
        
        backgroundLayer.strokeColor    = backgroundProgressColor.cgColor
        backgroundLayer.fillColor      = UIColor.clear.cgColor
        backgroundLayer.lineWidth      = kLineWidth
        
        progressLayer.strokeColor      = progressColor.cgColor
        progressLayer.fillColor        = backgroundLayer.fillColor
        progressLayer.lineWidth        = backgroundLayer.lineWidth
        progressLayer.strokeEnd        = 0.0
        
        progressContainer                      = UIView()
        progressContainer.layer.masksToBounds  = false
        progressContainer.clipsToBounds        = true
        progressContainer.backgroundColor      = UIColor.clear
        
        containerImageView                     = UIImageView()
        containerImageView.layer.masksToBounds = false
        containerImageView.clipsToBounds       = true
        containerImageView.contentMode         = UIViewContentMode.scaleAspectFill
        
        progressContainer.layer.addSublayer(backgroundLayer)
        progressContainer.layer.addSublayer(progressLayer)
        
        self.addSubview(containerImageView)
        self.addSubview(progressContainer)
        self.addGestureRecognizer(UITapGestureRecognizer(target: self, action: "handleSingleTap:"))
        
        setConstraints()
        
    }
    
    private func updateImage(image: UIImage?, animated: Bool) {
        
        
        let duration    = (animated) ? 0.3 : 0.0
        let delay       = (animated) ? 0.1 : 0.0
        
        containerImageView.transform   = CGAffineTransform(scaleX: 0, y: 0)
        containerImageView.alpha       = 0.0
        if let image = image {
            containerImageView.image = image
        }
        
        UIView.animate(withDuration: duration, animations: {
            self.progressContainer.transform    = CGAffineTransform(scaleX: 1.1, y: 1.1)
            self.progressContainer.alpha        = 0.0
            UIView.animate(withDuration: duration, delay: delay, options: UIViewAnimationOptions.curveEaseOut, animations: {
                self.containerImageView.transform   = CGAffineTransform.identity
                self.containerImageView.alpha       = 1.0
                }, completion: nil)
            }, completion: { finished in
                self.progressLayer.strokeColor = self.backgroundProgressColor.cgColor
                UIView.animate(withDuration: duration, animations: {
                    self.progressContainer.transform    = CGAffineTransform.identity
                    self.progressContainer.alpha        = 1.0
                })
        })
    }
    
    public func urlSession(_ session: URLSession, downloadTask: URLSessionDownloadTask, didFinishDownloadingTo location: URL) {
        
    }
    
    private func updatePaths() {
        let arcCenter   = CGPoint(x: self.bounds.midX, y: self.bounds.midY)
        let radius      = Float(min(self.bounds.midX - 1, self.bounds.midY-1))
        let circlePath = UIBezierPath(arcCenter: arcCenter,
            radius: CGFloat(radius),
            startAngle: CGFloat(-rad(degrees: Float(90))),
            endAngle: CGFloat(rad(degrees: 360-90)),
            clockwise: true)
        
        backgroundLayer.path           = circlePath.cgPath
        progressLayer.path             = backgroundLayer.path
    }
    
    //MARK:- Public methods
    
    public func imageURL(URL: NSURL) {
        let urlRequest = NSURLRequest(url: URL as URL)
        let cachedImage = (cacheEnabled) ? cache.imageForURL(URL: URL) : nil
        
        if (cachedImage != nil) {
            updateImage(image: cachedImage!, animated: false)
        } else {
            //let session = URLSession
            //let session = URLSession(session: URLSession.shared(), downloadTask: self, didFinishDownloadingToURL: nil)
            //let session = URLSession()
            let downloadTask = session.downloadTaskWithRequest(urlRequest)
            downloadTask.resume()
        }
        
    }
    
    //MARK:- NSURLSessionDownloadDelegate implemention
    
    public func URLSession(session: URLSession, downloadTask: URLSessionDownloadTask, didFinishDownloadingToURL location: NSURL) {
        if let data = NSData(contentsOf: location as URL) {
            let image = UIImage(data: data as Data)
            DispatchQueue.main.async(execute: {
                self.updateImage(image: image , animated: true)
            })
            if cacheEnabled {
                if let url = downloadTask.response?.url {
                    cache.image(image: image, URL: url as NSURL)
                }
            }
            
        }
    }
    
    public func URLSession(session: URLSession, downloadTask: URLSessionDownloadTask, didWriteData bytesWritten: Int64, totalBytesWritten: Int64, totalBytesExpectedToWrite: Int64) {
        let progress: CGFloat = CGFloat(totalBytesWritten)/CGFloat(totalBytesExpectedToWrite)
        DispatchQueue.main.async(execute: {
            self.progressLayer.strokeEnd        = progress
            self.backgroundLayer.strokeStart    = progress
        })
    }
    
}

//MARK:- PASImageViewDelegate

public protocol PASImageViewDelegate {
    func PAImageView(didTapped imageView: PASImageView)
}
