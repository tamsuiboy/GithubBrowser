//
//  SettingsViewController.h
//  GithubBrowser
//
//  Created by Oscar Del Ben on 4/9/11.
//  Copyright 2011 DibiStore. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface SettingsViewController : UIViewController {
}

@property (nonatomic, retain) IBOutlet UITextField *usernameTextField;
@property (nonatomic, retain) IBOutlet UITextField *passwordTextField;

- (void)cancel;
- (IBAction)save;

@end
