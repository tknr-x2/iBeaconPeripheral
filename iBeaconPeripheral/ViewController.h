//
//  ViewController.h
//  iBeaconPeripheral
//
//  Created by takanori uehara on 2014/11/17.
//  Copyright (c) 2014年 takanori uehara. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreLocation/CoreLocation.h>
#import <QuartzCore/QuartzCore.h>

@interface ViewController : UIViewController <CBPeripheralManagerDelegate, UITextFieldDelegate>


@end

