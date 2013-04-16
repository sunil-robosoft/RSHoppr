//
//  RSSOperation.m
//  Hoppr
//
//  Created by Sunil on 19/10/12.
//  Copyright (c) 2012 Robosoft Technologies. All rights reserved.
//

#import "RSSOperation.h"

@implementation RSSOperation

@synthesize type;
@synthesize error;
@synthesize urlRequest;
@synthesize receivedData = mReceivedData;
@synthesize viewControllerType;
@synthesize handler;
- (id) init
{
	self = [super init];
	if (self != nil)
    {
       
	}
	return self;
}
-(void)cancel
{
    [self cleanUp];
	[super cancel];
}


- (void) dealloc
{
    [self cleanUp];
}

-(void)cleanUp
{
    if (mReceivedData)
        self.receivedData = nil;

    self.handler=nil;
	self.error=nil;
    self.urlRequest = nil;
}

@end

