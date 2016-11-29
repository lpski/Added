//
//  ScrollViewController.swift
//  Added_2
//
//  Created by Luke Porupski on 11/9/16.
//  Copyright © 2016 Luke Porupski. All rights reserved.
//

import UIKit
import BubbleTransition

class ScrollViewController: UIViewController {

    @IBOutlet weak var scrollView: UIScrollView!
    
    let transition = BubbleTransition()
    var cameraButton: UIButton?
    
    
    override func viewDidLoad() {
        super.viewDidLoad()

        self.scrollView.contentSize.width = self.view.frame.width * 2
        //scrollView.autoresizingMask = UIViewAutoresizing.flexibleHeight

        
        //set up views
        setupViews()
    }

    
    func setupViews(){
        
        //setting up home view controller
        let vc1 = self.storyboard?.instantiateViewController(withIdentifier: "homeViewController") as! HomeViewController
        vc1.view.frame = CGRect(x: 0, y: 0, width: self.view.frame.width, height: self.view.frame.height)
        addChildViewController(vc1)
        self.scrollView.addSubview(vc1.view)
        vc1.didMove(toParentViewController: self)
        
        
        
        //setting up history view controller
        let vc2 = self.storyboard?.instantiateViewController(withIdentifier: "historyViewController")
        vc2?.view.frame = CGRect(x: self.view.frame.width, y: 0, width: self.view.frame.width, height: self.view.frame.height)
        addChildViewController(vc2!)
        self.scrollView.addSubview((vc2?.view)!)
        vc2?.didMove(toParentViewController: self)
        
    }
    
    
    
    
    //controller handlers
    /*func didPressCameraButton(){
        
        let toVC = self.storyboard?.instantiateViewController(withIdentifier: "cameraViewController") as! CameraViewController
        self.navigationController?.pushViewController(toVC, animated: true)
        
        
        
    }*/
    
    
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
