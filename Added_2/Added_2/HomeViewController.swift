//
//  HomeViewController.swift
//  Added_2
//
//  Created by Luke Porupski on 11/9/16.
//  Copyright © 2016 Luke Porupski. All rights reserved.
//

import UIKit
import BubbleTransition

class HomeViewController: UIViewController, UIViewControllerTransitioningDelegate, LFLoginControllerDelegate {

    @IBOutlet weak var cameraButton: UIButton!
    var cameraVC: CameraViewController?
    let transition = BubbleTransition()
    
    @IBOutlet weak var QRImageView: UIImageView!
    @IBOutlet weak var profileImageView: UIImageView!
    
    let defaults = UserDefaults.standard
    let loginVC = LFLoginController()

    
    var goingToMenu = false
    
    let presentationAnimator = GuillotineTransitionAnimation()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
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
            //self.present(loginVC, animated: true, completion: nil)
        }
    }
    
    
    func setUpHome(){
        //set up camera button
        self.cameraButton.layer.cornerRadius = 0.5 * cameraButton.bounds.size.width
        self.cameraButton.titleLabel?.font = UIFont.fontAwesome(ofSize: 40)
        self.cameraButton.setTitle(String.fontAwesomeIcon(name: .camera), for: .normal)
        self.cameraButton.addTarget(self.parent, action: #selector(didPressCameraButton), for: .touchUpInside)
        
        
        //set up profile image
        profileImageView.image = UIImage(named: "default_profile.png")
        
        //set up qr
        let url = URL(string: "www.google.com")
        var qrCode = QRCode(url!)
        qrCode?.size = CGSize(width: 250, height: 250)
        qrCode?.color = CIColor.white()
        qrCode?.backgroundColor = CIColor.black()
        QRImageView.image = qrCode?.image
        
        //set up profile menu button
        let menuButtonSize: CGSize = CGSize(width: 64.0, height: 64.0)
        let menuButton = ExpandingMenuButton(frame: CGRect(origin: CGPoint.zero, size: menuButtonSize), centerImage: UIImage(named: "chooser-button-tab")!, centerHighlightedImage: UIImage(named: "chooser-button-tab-highlighted")!)
        menuButton.center = CGPoint(x: self.view.bounds.width - 32.0, y: self.view.bounds.height - 60.0)
        self.view.addSubview(menuButton)
    }

    @IBAction func didPressSettingsButton(_ sender: UIButton) {
        
        if goingToMenu == false{
            goingToMenu = true
        }
        //set up side menu
        let menuVC = self.storyboard?.instantiateViewController(withIdentifier: "settingsViewController")
        menuVC?.modalPresentationStyle = .custom
        menuVC?.transitioningDelegate = self
        
        presentationAnimator.animationDelegate = menuVC as? GuillotineAnimationDelegate
        presentationAnimator.supportView = navigationController!.navigationBar
        presentationAnimator.presentButton = sender
        present(menuVC!, animated: true, completion: nil)
    }
    
    override var preferredStatusBarStyle: UIStatusBarStyle{
        return UIStatusBarStyle.default
    }
    
    override func didMove(toParentViewController parent: UIViewController?) {
        if let vc = self.parent{
            if let vc2 = vc as? ScrollViewController{
                vc2.cameraButton = self.cameraButton
            }
        }
        //(self.parent as! ScrollViewController).cameraButton = self.cameraButton
    }
    
    @IBAction func didPressCameraButton() {
        let vc = self.storyboard?.instantiateViewController(withIdentifier: "cameraViewController")
        vc?.didMove(toParentViewController: self)
        self.navigationController?.pushViewController(vc!, animated: true)
        //self.navigationController?.popViewController(animated: true)
        //let toVC = self.storyboard?.instantiateViewController(withIdentifier: "cameraViewController") as! CameraViewController
        //toVC.closeCameraButton.addTarget(self, action: #selector(didPressCloseCameraButton), for: UIControlEvents.touchUpInside)
        //self.navigationController?.pushViewController(toVC, animated: true)
        
        
    }
    
    public override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        let controller = segue.destination
        controller.transitioningDelegate = self
        controller.modalPresentationStyle = .custom
    }
    
    // MARK: UIViewControllerTransitioningDelegate
    
    public func animationController(forPresented presented: UIViewController, presenting: UIViewController, source: UIViewController) -> UIViewControllerAnimatedTransitioning? {
        if self.goingToMenu == false{
            transition.transitionMode = .present
            transition.startingPoint = cameraButton.center
            transition.bubbleColor = cameraButton.backgroundColor!
            return transition
        }
        else{
            presentationAnimator.mode = .presentation
            return presentationAnimator
        }
    }
    
    public func animationController(forDismissed dismissed: UIViewController) -> UIViewControllerAnimatedTransitioning? {
        if self.goingToMenu == false{
            transition.transitionMode = .dismiss
            transition.startingPoint = cameraButton.center
            transition.bubbleColor = cameraButton.backgroundColor!
            return transition
        }
        else{
            presentationAnimator.mode = .dismissal
            self.goingToMenu = false
            return presentationAnimator
        }
    }
    
    
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
