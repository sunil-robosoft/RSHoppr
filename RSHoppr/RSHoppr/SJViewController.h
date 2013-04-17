//
//  SJViewController.h
//  RSHoppr
//
//  Created by Sunil on 11/04/13.
//  Copyright (c) 2013 Robosoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SJViewController : UIViewController

- (IBAction)didClickMeTap:(id)sender;
- (IBAction)didClickMeAlsoTap:(id)sender;
@property (strong, nonatomic) IBOutlet UILabel *clickMeLabel;
@property (strong, nonatomic) IBOutlet UILabel *clickmealsoLabel;
@end
