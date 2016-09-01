//
//  ScanViewController.swift
//  Added
//
//  Created by Luke Porupski on 7/23/16.
//  Copyright © 2016 Luke Porupski. All rights reserved.
//
import AVFoundation
import UIKit

class ScanViewController: UIViewController {

    let captureSession = AVCaptureSession()
    var previewLayer : AVCaptureVideoPreviewLayer?
    var captureDevice: AVCaptureDevice?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.captureSession.sessionPreset = AVCaptureSessionPresetMedium
        
        let devices = AVCaptureDevice.devices()
        
        //gets back camera
        for device in devices {
            if(device.hasMediaType(AVMediaTypeVideo)){
                if(device.position == AVCaptureDevicePosition.Back){
                    captureDevice = device as? AVCaptureDevice
                }
            }
        }
        
        if captureDevice != nil{
            beginSession()
        }
        
    }

    
    func beginSession() {
        
        do{
            try self.captureSession.addInput(AVCaptureDeviceInput(device: captureDevice))
        }
        catch{
            print(error)
        }
        
        
        previewLayer = AVCaptureVideoPreviewLayer(session: captureSession)
        self.view.layer.addSublayer(previewLayer!)
        let bounds = view.layer.bounds;
        previewLayer?.videoGravity = AVLayerVideoGravityResizeAspectFill;
        previewLayer?.bounds = bounds;
        previewLayer?.position = CGPointMake(CGRectGetMidX(bounds), CGRectGetMidY(bounds));
        
        //previewLayer?.frame = CGRectMake(0, 0, self.view.frame.width, self.view.frame.height)
        captureSession.startRunning()
    }
    
    
    
    
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}
