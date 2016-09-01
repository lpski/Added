//
//  ScrollViewController.swift
//  Added
//
//  Created by Luke Porupski on 7/23/16.
//  Copyright © 2016 Luke Porupski. All rights reserved.
//

import UIKit
import Font_Awesome_Swift
import KCFloatingActionButton
import FontAwesome_swift
import QRCode

class ScrollViewController: UIViewController, UIScrollViewDelegate  {

    @IBOutlet weak var scrollView: UIScrollView!
    @IBOutlet weak var leftButton: UIButton!
    @IBOutlet weak var centerButton: UIButton!
    @IBOutlet weak var rightButton: UIButton!
    
    private var lastContentOffset: CGFloat! = 0
    private var currentPage = 1 //0,1,2
    private var loaded = false
    private var pressedFlag = false;
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        //setting up scroll view
        scrollView.frame = self.view.frame
        scrollView.contentSize = CGSize(width: self.view.frame.width * 3, height: self.view.frame.height)
        scrollView.delegate = self
        //lastContentOffset = self.view.frame.width
        
        //scrolls to middle page to start
        scrollView.contentOffset.x = self.view.frame.width
        setUpButtons()
        
        //setting up buttons
        leftButton.setFAIcon(FAType.FASearch, iconSize: 20, forState: .Normal)
        centerButton.setFAIcon(FAType.FAQrcode, iconSize: 50, forState: .Normal)
        rightButton.setFAIcon(FAType.FAHistory, iconSize: 20, forState: .Normal)
        
        setUpRolloutButton()
        
        
        
        
        
        
        loaded = true
        
        addViewsToScrollView()
        
        
        
        
    }
    
    
    func addViewsToScrollView(){
        
        //set up and add scan view
        let scanView = self.storyboard?.instantiateViewControllerWithIdentifier("scanViewController").view
        
        scanView?.frame = CGRectMake(0, 0, self.view.frame.width, scrollView.frame.height)
        self.scrollView.addSubview(scanView!)
        
        
        
        
        //set up and add qr view
        //let url = NSURL(string: "http://www.google.com")
        let qrCode = QRCode("http://www.google.com")
        
        let qrView = UIImageView(frame: CGRectMake(self.view.frame.width * 1.25, 50, self.view.frame.width * 0.5,self.view.frame.width * 0.5 ))
        qrView.image = qrCode?.image
        self.scrollView.addSubview(qrView)
        
    }
    
    func buttonPressed(button:KCFloatingActionButtonItem){
        if button.circleShadowColor == UIColor.whiteColor(){
            button.circleShadowColor = UIColor.grayColor()
            button.tintColor = UIColor.grayColor()
            button.buttonColor = UIColor.grayColor()
            button.tintColor = UIColor.grayColor()
            button.reloadInputViews()
            
            //button.opaque = false
            
        }
        else{
            button.circleShadowColor = UIColor.whiteColor()
            //button.opaque = true
        }
    }
    
    func setUpRolloutButton(){
        
        //setting up floating menu button
        let rolloutButton = KCFloatingActionButton(frame: CGRectMake(self.view.frame.width - 50, self.view.frame.height - 50, 40, 40))
        rolloutButton.itemButtonColor = UIColor.grayColor()
        rolloutButton.addItem("Tumblr", icon: UIImage.fontAwesomeIconWithName(.Tumblr, textColor: UIColor.blueColor(), size: CGSizeMake(20, 20)), handler: buttonPressed)
        rolloutButton.addItem("Reddit", icon: UIImage.fontAwesomeIconWithName(.Reddit, textColor: UIColor.blueColor(), size: CGSizeMake(5, 5), backgroundColor: UIColor.redColor()), handler: buttonPressed)
            
        rolloutButton.addItem("Github", icon: UIImage.fontAwesomeIconWithName(.Github, textColor: UIColor.blueColor(), size: CGSizeMake(20, 20)))
        rolloutButton.addItem("LinkedIn", icon: UIImage.fontAwesomeIconWithName(.LinkedIn, textColor: UIColor.blueColor(), size: CGSizeMake(20, 20)))
        rolloutButton.addItem("Twitch", icon: UIImage.fontAwesomeIconWithName(.Twitch, textColor: UIColor.blueColor(), size: CGSizeMake(20, 20)))
        rolloutButton.addItem("Twitter", icon: UIImage.fontAwesomeIconWithName(.Twitter, textColor: UIColor.blueColor(), size: CGSizeMake(20, 20)))
        rolloutButton.addItem("Instagram", icon: UIImage.fontAwesomeIconWithName(.Instagram, textColor: UIColor.blueColor(), size: CGSizeMake(20, 20)))
        rolloutButton.addItem("Facebook", icon: UIImage.fontAwesomeIconWithName(.Facebook, textColor: UIColor.blueColor(), size: CGSizeMake(20, 20)))
        
        //sets selected buttons
        for button in rolloutButton.items {
            button.buttonColor = UIColor.whiteColor();
        }
        
        self.view.addSubview(rolloutButton)
        
    }
    
    
    
    func scrollViewDidScroll(scrollView: UIScrollView) {
        
        let offset = scrollView.contentOffset.x
        if(loaded){
        switch currentPage {
        case 0:
            leftButton.setFAIcon(FAType.FASearch, iconSize: 50 - (30 * (scrollView.contentOffset.x / self.view.frame.width)), forState: UIControlState.Normal)
            centerButton.setFAIcon(FAType.FAQrcode, iconSize: 20 + (30 * (scrollView.contentOffset.x / self.view.frame.width)), forState: UIControlState.Normal)
            //leftButton.titleLabel?.
            break
        case 1:
            if(scrollView.contentOffset.x < self.view.frame.width){
                centerButton.setFAIcon(FAType.FAQrcode, iconSize: 20 + (30 * (scrollView.contentOffset.x / self.view.frame.width)), forState: UIControlState.Normal)
                leftButton.setFAIcon(FAType.FASearch, iconSize: 50 - (30 * (scrollView.contentOffset.x / self.view.frame.width)), forState: UIControlState.Normal)
            }
            else{
                var dif = (offset - self.view.frame.width) / (self.view.frame.width)
                rightButton.setFAIcon(FAType.FAHistory, iconSize: 20 + (30 * dif), forState: UIControlState.Normal)
                centerButton.setFAIcon(FAType.FAQrcode, iconSize: 50 - (30 * dif), forState: UIControlState.Normal)
            }
            
            
            break
        case 2:
            let dif = (offset - self.view.frame.width) / (self.view.frame.width)
            rightButton.setFAIcon(FAType.FAHistory, iconSize: 20 + (30 * dif), forState: UIControlState.Normal)
            centerButton.setFAIcon(FAType.FAQrcode, iconSize: 50 - (30 * dif), forState: UIControlState.Normal)
            break
        default:
            break
        }
            
        lastContentOffset = offset
        }
        if(pressedFlag){
            animateFromPress()
            lastContentOffset = offset
        }
        
        
        checkForPageChange()
        
    }
    
    func animateFromPress(){
        let offset = self.scrollView.contentOffset.x
        let dif = offset > self.view.frame.width ? (offset - self.view.frame.width) / (self.view.frame.width) : offset / self.view.frame.width
        if(lastContentOffset < offset){ //going to right button from left button
            rightButton.setFAIcon(FAType.FAHistory, iconSize: 20 + (30 * dif), forState: UIControlState.Normal)
            leftButton.setFAIcon(FAType.FASearch, iconSize: 50 - (30 * dif), forState: UIControlState.Normal)
        }
        else{ //going to left button from right button
            rightButton.setFAIcon(FAType.FAHistory, iconSize: 20 + (30 * dif), forState: UIControlState.Normal)
            leftButton.setFAIcon(FAType.FASearch, iconSize: 50 - (30 * dif), forState: UIControlState.Normal)
        }
    }
    
    func checkForPageChange(){
        //checks if page change needed
        switch scrollView.contentOffset.x / self.view.frame.width {
        case 0:
            self.currentPage = 0
            break
        case 1:
            self.currentPage = 1
            break
        case 2:
            self.currentPage = 2
            break
        default:
            break
            
        }
    }
    
    //scrolling from buttons
    func scrollViewDidEndScrollingAnimation(scrollView: UIScrollView) {
        checkForPageChange()
    }
    
    //scrolling from swipes/drags
    func scrollViewDidEndDecelerating(scrollView: UIScrollView) {
        checkForPageChange()
    }
    
    func setUpButtons(){
    
    
    }
    @IBAction func leftButtonPressed() {
        if(currentPage == 2){
            loaded = false
            pressedFlag = true
        }
        self.scrollView.scrollRectToVisible(CGRectMake(0, 0, self.scrollView.frame.width, self.scrollView.frame.height), animated: true)
        loaded = true
        pressedFlag = false
    }
    
    @IBAction func centerButtonPressed() {
        self.scrollView.scrollRectToVisible(CGRectMake(self.view.frame.width, 0, self.scrollView.frame.width, self.scrollView.frame.height), animated: true)
    }
    
    
    @IBAction func rightButtonPressed() {
        if(currentPage == 0){
            loaded = false
            pressedFlag = true
        }
        self.scrollView.scrollRectToVisible(CGRectMake(self.view.frame.width * 2, 0, self.scrollView.frame.width, self.scrollView.frame.height), animated: true)
        
        loaded = true
        pressedFlag = false
    }
    
    
    
    
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepareForSegue(segue: UIStoryboardSegue, sender: AnyObject?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
