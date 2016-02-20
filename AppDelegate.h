//
//  AppDelegate.h
//  artfolio
//
//  Created by Kyle Griffith on 2016-02-19.
//  Copyright © 2016 Kyle Griffith. All rights reserved.
//

#import <UIKit/UIKit.h>
@class TakePhotoViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) TakePhotoViewController *viewController;

@end

