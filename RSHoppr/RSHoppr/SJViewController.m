//
//  SJViewController.m
//  RSHoppr
//
//  Created by Sunil on 11/04/13.
//  Copyright (c) 2013 Robosoft. All rights reserved.
//

#import "SJViewController.h"
#import "SJSecondViewController.h"

@interface SJViewController ()

@end

@implementation SJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)didClickMeTap:(id)sender
{
    SJSecondViewController *sVw=[[SJSecondViewController alloc]initWithNibName:@"SJSecondViewController" bundle:nil];
    sVw.modalTransitionStyle = UIModalTransitionStyleFlipHorizontal;
    [self presentViewController:sVw animated:YES completion:nil];
}

@end
