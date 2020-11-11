//
//  ViewController.swift
//  BlueBillywigNativePlayerKit-iOS-Example
//
//  Created by Olaf Timme on 09/11/2020.
//  Copyright © 2020 BlueBillywig. All rights reserved.
//

import UIKit
import BBNativePlayerKit


class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        let videoPlayerFrame = CGRect(x: 0, y: 0, width: view.frame.width, height: view.frame.width * 9 / 16)
        let bbPlayerView = BBNativePlayer.createPlayerView(frame: videoPlayerFrame, jsonUrl: "https://bb.dev.bbvms.com/p/default/c/1092747.json")

        view.addSubview(bbPlayerView)
    }
}

