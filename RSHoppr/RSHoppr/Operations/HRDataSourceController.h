//
//  HRDataSourceController.h
//  Hoppr
//
//  Created by Sunil on 18/10/12.
//  Copyright (c) 2012 Robosoft Technologies. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HRConstants.h"
#import "RSSOperation.h"

@interface HRDataSourceController : NSObject
{
    NSOperationQueue *operationQueue;
    NSString *urlString;
}
@property (readonly,nonatomic)NSOperationQueue *operationQueue;

+(HRDataSourceController *)sharedController;
-(void)cancelAllOperations;
-(void)cancelAllOperationsForViewControllerType:(SJViewControllerType)inViewControllerType;
-(void)cancelAllOperationsForViewControllerType:(SJViewControllerType)inViewControllerType forType:(RSSParserType)caller;
-(void)parseDataContentsAtURL:(NSString *)inURLString
                  requestType:(enum eHTTPRequestType)inRequestType
                      details:(NSDictionary *)inDetails
                    ofSection:(RSSParserType)inSectionType
withViewControllerType:(SJViewControllerType)inViewControllerType completion:(SJCompletionHandler)handler;

@end
