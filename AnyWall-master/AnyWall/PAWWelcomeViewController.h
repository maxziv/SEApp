//
//  PAWViewController.h
//  Anywall
//
//  Created by Christopher Bowns on 1/30/12.
//  Copyright (c) 2013 Parse. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PAWWelcomeViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (nonatomic) int touchCount;
- (IBAction)loginButtonSelected:(id)sender;
- (IBAction)createButtonSelected:(id)sender;
- (IBAction)gotoParse:(id)sender;

@end

