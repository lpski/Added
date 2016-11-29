//
//  HistoryViewController.swift
//  Added_2
//
//  Created by Luke Porupski on 11/9/16.
//  Copyright © 2016 Luke Porupski. All rights reserved.
//

import UIKit

extension UIColor {
    convenience init(red: Int, green: Int, blue: Int) {
        assert(red >= 0 && red <= 255, "Invalid red component")
        assert(green >= 0 && green <= 255, "Invalid green component")
        assert(blue >= 0 && blue <= 255, "Invalid blue component")
        
        self.init(red: CGFloat(red) / 255.0, green: CGFloat(green) / 255.0, blue: CGFloat(blue) / 255.0, alpha: 1.0)
    }
    
    convenience init(netHex:Int) {
        self.init(red:(netHex >> 16) & 0xff, green:(netHex >> 8) & 0xff, blue:netHex & 0xff)
    }
}

class HistoryViewController: UIViewController {

    @IBOutlet weak var collectionView: UICollectionView!
    
    let kItemSpace = -20.0
    let kCellHeight = 120.0
    let kDemoCell = "demoCell"
    
    let citiesArray = ["Bangkok", "Barcelona", "Beijing", "Istanbul", "Kiev", "Kyoto"]
    let colorsArray = [0xEE5464, 0xDC4352, 0xFD6D50, 0xEA583F, 0xF6BC43, 0x8DC253]
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        //set up collection view
        collectionView.delegate = self
        collectionView.dataSource = self
        
        collectionView.decelerationRate = UIScrollViewDecelerationRateFast
        collectionView.backgroundColor = UIColor(red: 51/255, green: 55/255, blue: 61/255, alpha: 1)
        //collectionView.setCollectionViewLayout(StickCollectionViewFlowLayout, animated: true)
    }
    
    override var preferredStatusBarStyle: UIStatusBarStyle{
        return UIStatusBarStyle.lightContent
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}
    
extension HistoryViewController: UICollectionViewDataSource, UICollectionViewDelegate {
    
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        return 1
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return citiesArray.count
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell: SCCornerCollectionViewCell = self.collectionView.dequeueReusableCell(withReuseIdentifier: kDemoCell, for: indexPath) as! SCCornerCollectionViewCell
        
        let hexString = self.colorsArray[indexPath.row]
        let color = UIColor(netHex: hexString)
        
        cell.color = color
        cell.city = citiesArray[indexPath.row]
        cell.frame.size.width = self.view.frame.width
        return cell
    }
    
    
}
    

