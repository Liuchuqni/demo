//
//  AppDelegate.h
//  TESTDEO
//
//  Created by 红尘 on 15/7/24.
//  Copyright (c) 2015年 红尘. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property(nonatomic, readonly) CLLocation* lastLocation;



@end

