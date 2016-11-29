//
//  CameraViewController.swift
//  Added_2
//
//  Created by Luke Porupski on 11/9/16.
//  Copyright © 2016 Luke Porupski. All rights reserved.
//

import UIKit
import AVFoundation


class CameraViewController: UIViewController {
    
    let confettiView = SAConfettiView()
    let captureSession = AVCaptureSession()
    var captureDevice: AVCaptureDevice?
    @IBOutlet weak var closeCameraButton: UIButton!
    
    
    
    override func viewDidLoad() {
        super.viewDidLoad()

        //set up camera
        startCameraSession()
        
        //setup confetti
        setupConfetti()
        
        //set up camera button
        self.closeCameraButton.titleLabel?.font = UIFont.fontAwesome(ofSize: 45)
        self.closeCameraButton.setTitle(String.fontAwesomeIcon(name: .times), for: .normal)
        
    
    }

    func startCameraSession(){
        
        self.captureSession.sessionPreset = AVCaptureSessionPresetHigh
        
        let devices = AVCaptureDevice.devices()
        for device in devices! {
            if device is AVCaptureDevice{
                let dev = device as! AVCaptureDevice
                if dev.hasMediaType(AVMediaTypeVideo){
                    if dev.position == AVCaptureDevicePosition.back{
                        self.captureDevice = dev
                    }
                }
            }
        }
        
        if captureDevice != nil{
            beginSession()
        }
        
        
        
    }
    
    override func didMove(toParentViewController parent: UIViewController?) {
        //if parent is HomeViewController{
          //  (parent as HomeViewController).
        //}
        //self.closeCameraButton.addTarget(parent, action: #selector(didPressCloseCameraButton), for: .touchUpInside)
    }
    
    func beginSession() {
        
        try? captureSession.addInput(AVCaptureDeviceInput(device: captureDevice))
        
        let previewLayer = AVCaptureVideoPreviewLayer(session: captureSession)
        self.view.layer.addSublayer(previewLayer!)
        self.view.bringSubview(toFront: self.closeCameraButton)
        previewLayer?.frame = self.view.layer.frame
        captureSession.startRunning()
    }
    
    
    @IBAction func didPressCloseButton() {
        
        self.dismiss(animated: true, completion: nil)
        
        
    }
    
    func setupConfetti(){
        
        confettiView.frame = self.view.bounds
        self.view.addSubview(confettiView)
        confettiView.type = .Star
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

}
