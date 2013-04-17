//
//  RSSOperation.h
//  Hoppr
//
//  Created by Sunil on 19/10/12.
//  Copyright (c) 2012 Robosoft Technologies. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HRConstants.h"

enum  {
	eNoInternetConnection,
	eParseError,
	eNoHostConnection
}ErrorCode;

typedef void (^SJCompletionHandler)(id result,NSError *error,RSSParserType type);

@protocol RSSOperationDelegate
@optional
-(void)operationDidBegin;
-(void)operationDidFinish:(NSOperation*)inOperation;
-(void)operationDidFail:(NSOperation*)inOperation;
-(void)operationFetchingFromServer:(NSOperation*)inOperation;

@end

@interface RSSOperation : NSOperation {
    NSError *error;
	RSSParserType type;
    NSMutableURLRequest *urlRequest;
    NSData       *mReceivedData;
    SJCompletionHandler handler;
    SJViewControllerType viewControllerType;
}
@property (nonatomic,assign) SJViewControllerType viewControllerType;
@property (nonatomic,copy) SJCompletionHandler handler;
@property (strong,nonatomic) NSError *error;
@property (assign,nonatomic) RSSParserType type;
@property (strong, nonatomic) NSMutableURLRequest   *urlRequest;
@property (strong,nonatomic)NSData   *receivedData;
@end

