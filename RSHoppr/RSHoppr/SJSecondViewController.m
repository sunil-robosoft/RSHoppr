//
//  SJSecondViewController.m
//  RSHoppr
//
//  Created by Sunil on 12/04/13.
//  Copyright (c) 2013 Robosoft. All rights reserved.
//

#import "SJSecondViewController.h"

@interface SJSecondViewController ()

@end

@implementation SJSecondViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSLog(@"viewDidLoad       viewDidLoad");
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)didClickMeTap:(id)sender
{
    [self dismissViewControllerAnimated:YES completion:nil];
}
@end
