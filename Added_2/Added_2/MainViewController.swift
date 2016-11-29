//
//  MainViewController.swift
//  Added_2
//
//  Created by Luke Porupski on 11/8/16.
//  Copyright © 2016 Luke Porupski. All rights reserved.
//

import UIKit

class MainViewController: EZSwipeController, LFLoginControllerDelegate, EZSwipeControllerDataSource {

    let defaults = UserDefaults.standard
    
    let loginVC = LFLoginController()
    
    
    //set up ez views
    override func setupView() {
        datasource = self
        
        
        
    }
    
    func viewControllerData() -> [UIViewController] {
        
        let homeView = self.storyboard?.instantiateViewController(withIdentifier: "homeViewController") as! HomeViewController
        let historyView = self.storyboard?.instantiateViewController(withIdentifier: "historyViewController") as! HistoryViewController
        self.addChildViewController(homeView)
        self.addChildViewController(historyView)
        return [homeView, historyView]
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()

        //setting up nav controller
        self.navigationController?.navigationBar.isHidden = true
        
        let status = defaults.object(forKey: "status") as? String
        
        if let cur_status = status {
            if cur_status == "signed_in"{ //user signed in
                
            }
                
            else if cur_status == "signed_out"{ //user not signed in
                
            }
            
        }
        else { //user doesn't have account
            
            
            loginVC.delegate = self
            let path = Bundle.main.path(forResource: "login_video_2", ofType: "mp4")
            loginVC.videoURL = NSURL(fileURLWithPath: path!)
            self.navigationController?.present(loginVC, animated: true, completion: nil)
        }
    }

    
    /*func setUpViews(){
        
        let homeView = self.storyboard?.instantiateViewController(withIdentifier: "homeViewController").view
        homeView?.frame = CGRect(x: 0, y: 0, width: self.view.frame.width, height: self.view.frame.height)
        
        let historyView = self.storyboard?.instantiateViewController(withIdentifier: "historyViewController").view
        historyView?.frame = CGRect(x: self.view.frame.width, y: 0, width: self.view.frame.width, height: self.view.frame.height)
        
        
        self.scrollView.frame = self.view.frame
        self.scrollView.contentSize = CGSize(width: self.view.frame.width * 2, height: self.view.frame.height)
        
        self.scrollView.addSubview(homeView!)
        self.scrollView.addSubview(historyView!)
        
        
        
    }*/
    
    
    
    func loginDidFinish(email: String, password: String, type: LFLoginController.SendType) {
        
        print(email)
        print(password)
        print(type)
        
        //if valid values
        self.defaults.set("signed_in", forKey: "status")
        
        self.navigationController?.dismiss(animated: true, completion: nil)
    }
    
    func forgotPasswordTapped() {
        
        print("forgot password")
    }
    
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
}

