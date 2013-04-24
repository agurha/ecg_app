//
//  AppDelegate.h
//  ecg_iphone
//
//  Created by A Gurha on 31/03/2013.
//  Copyright (c) 2013 A Gurha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HomeViewController.h"
#import "LoginViewController.h"

@interface ECGAppWindow : UIWindow {
    
}
@end

@interface AppDelegate : UIResponder <UIApplicationDelegate, UIActionSheetDelegate> {
    IBOutlet ECGAppWindow *window;
    
    LoginViewController *loginViewController;
    
    UIView *_mainView;
    
    IBOutlet UIView *_loadingView;
    IBOutlet UIImageView *_loadingViewLogo;

    HomeViewController *rootViewController;
    
    
}


@property (strong, nonatomic) ECGAppWindow *window;
@property (readonly) LoginViewController *loginViewController;
@property (readonly) HomeViewController *homeViewController;

-(BOOL)hasNetworkConnection;
-(BOOL)hasWiFiConnection;

@end
