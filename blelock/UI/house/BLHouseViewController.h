//
//  BLHouseViewController.h
//  blelock
//
//  Created by NetEase on 15/8/7.
//  Copyright (c) 2015年 Netease. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BLKey.h"

@interface BLHouseViewController : UIViewController

@property (nonatomic, strong) BLKey *key;
- (id)initWithKey:(BLKey *)myKey;

@end
