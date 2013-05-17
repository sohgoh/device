//
//  SRFlipsideViewController.h
//  SimpleRemote
//
//  Created by Masakazu Ohtsuka on 2013/05/17.
//  Copyright (c) 2013年 KAYAC Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SRFlipsideViewController;

@protocol SRFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(SRFlipsideViewController *)controller;
@end

@interface SRFlipsideViewController : UIViewController

@property (weak, nonatomic) id <SRFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
