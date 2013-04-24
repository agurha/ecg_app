//
//  LoginViewController.h
//  ecg_ios
//
//  Created by A Gurha on 31/03/2013.
//  Copyright (c) 2013 A Gurha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "Three20/Three20.h"

@interface LoginViewController : UIViewController<UITextFieldDelegate>{
    
    IBOutlet UITextField *_email;
    IBOutlet UITextField *_password;
    
    IBOutlet UITextField *_regemail;
    IBOutlet UITextField *_regpassword;
    
    IBOutlet UIView *_registrationView;
    TTStyledTextLabel *_tandcview;


}

-(IBAction)loginButtonPressed:(id)sender;
-(IBAction)registerButtonPressed:(id)sender;
-(IBAction)createButtonPressed:(id)sender;
-(IBAction)cancelButtonPressed:(id)sender;
-(BOOL)textFieldShouldReturn:(UITextField *)textField;
-(void)dismissKeyboard;

@end

@interface LoginViewBackground : UIImageView {
    IBOutlet LoginViewController *delegate;
}

@end
