//
//  HRLoginOperation.m
//  Hoppr
//
//  Created by Sunil on 19/10/12.
//  Copyright (c) 2012 Robosoft Technologies. All rights reserved.
//

#import "HRLoginOperation.h"
#import "SBJson.h"


@interface HRLoginOperation()


@end

@implementation HRLoginOperation


-(void)FetchData
{
    NSHTTPURLResponse __autoreleasing *response =nil; 
    NSError __autoreleasing *inError = nil;
    self.receivedData=[NSURLConnection sendSynchronousRequest:self.urlRequest returningResponse:&response error:&inError];
    BOOL success=NO;
    success = ((nil != mReceivedData) && (nil == inError));
    NSHTTPURLResponse *serverResponse=(NSHTTPURLResponse*)response;
    int serverResponseCode=eSuccessResponse;
    if ([serverResponse respondsToSelector:@selector(statusCode)])
    {
        serverResponseCode= [serverResponse statusCode];
    }
    
    if (![self isCancelled])
    {
        if (serverResponseCode==eSuccessResponse) {
            
            SBJsonParser *parser=[[SBJsonParser alloc] init];
            NSDictionary *theResponse = [parser objectWithData:mReceivedData];
            dispatch_async(dispatch_get_main_queue(),^{
                if (handler) {
                    handler(theResponse,nil,self.type);
                }
            } );
        }
        else
        {
            NSError *userInfoError = [NSError errorWithDomain:kEmptyResponseErrorDomain code:eNotFound userInfo:nil];
            dispatch_async(dispatch_get_main_queue(),^{
                if (handler) {
                handler(nil,userInfoError,self.type);
                }
            } );
        }
    }
}


-(void)main
{
    [self FetchData];
}

@end
