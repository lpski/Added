//
//  ContactView.swift
//  Added
//
//  Created by Luke Porupski on 8/20/16.
//  Copyright © 2016 Luke Porupski. All rights reserved.
//

import UIKit

class ContactView: UIView {
    
    var nameLabel: UILabel?
    var socials: NSMutableArray?
    var socialsView: UIView?
    var offset: Int = 30
    

    override init (frame : CGRect) {
        super.init(frame : frame)
        
        nameLabel = UILabel()
        nameLabel?.frame = CGRectMake(0, 3, self.frame.width, 30)
        
        //sets up social
        self.addSocials()
        
        
        //adding subviews
        self.addSubview(nameLabel!)
        self.addSubview(socialsView!)
    }
    
    func addSocials(){
        
        
        if socials != nil{
            
            for value in socials!{
                
                var site: String
                var username: String
                
                //site = value[0]
                //username = account[1]
                
                //var siteLabel: UILabel = UILabel(frame: CGRectMake(10,offset,self.frame.width / 3,20))
                //var nameLabel: UILabel = UILabel(frame: CGRectMake(self.frame.width / 2,offset,self.frame.width / 3,20))
                
                //offset += 20
                
                //self.addSubview(siteLabel)
                //self.addSubview(nameLabel)
                
            }
            
        }
        
        /*
        for account in socials! {
            
         
        }*/

        
    }
    
    
    
    
    convenience init () {
        self.init(frame:CGRect.zero)
    }
    
    required init(coder aDecoder: NSCoder) {
        fatalError("This class does not support NSCoding")
    }
    

}
