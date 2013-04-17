//
//  SJViewController.m
//  RSHoppr
//
//  Created by Sunil on 11/04/13.
//  Copyright (c) 2013 Robosoft. All rights reserved.
//

#import "SJViewController.h"
#import "SJSecondViewController.h"
#import "HRDataSourceController.h"

#define kConfigCMSURL @"http://timesofindia.indiatimes.com/ipl/2013/cricfeeds.cms"

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
    //_clickMeLabel.text=@"";
    HRDataSourceController *sharedViewController=[HRDataSourceController sharedController];

    [sharedViewController parseDataContentsAtURL:kConfigCMSURL requestType:eHTTPGetRequest details:nil ofSection:eSectionTypeFeaturedTiles withViewControllerType:eHomeViewController completion:^(id result, NSError *error,RSSParserType type){
        if (error==nil) {
            if (type==eSectionTypeFeaturedTiles)
            {
                NSLog(@"%@",result);
                _clickMeLabel.text=@"didClickMe Tapped";
            }
            
        }
        else
        {
            NSLog(@"%@",error);
        }
    }];
    
  //  [self performSelector:@selector(cancelOperation) withObject:nil afterDelay:0.2];
    
}

- (IBAction)didClickMeAlsoTap:(id)sender
{
    _clickmealsoLabel.text=@"";
    HRDataSourceController *sharedViewController=[HRDataSourceController sharedController];
    [sharedViewController cancelAllOperationsForViewControllerType:eHomeViewController];
    [sharedViewController parseDataContentsAtURL:kConfigCMSURL requestType:eHTTPGetRequest details:nil ofSection:eSectionTypeFeaturedTiles withViewControllerType:eHomeViewController completion:^(id result, NSError *error,RSSParserType type){
        if (error==nil) {
            if (type==eSectionTypeFeaturedTiles)
            {
                NSLog(@"%@",result);
                _clickmealsoLabel.text=@"didClickMeAlso Tapped";
            }
            
        }
        else
        {
            NSLog(@"%@",error);
        }
    }];
 
}
-(void)cancelOperation
{
    [[HRDataSourceController sharedController] cancelAllOperationsForViewControllerType:eHomeViewController];
}
@end
