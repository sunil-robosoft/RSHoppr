//
//  HRDataSourceController.m
//  Hoppr
//
//  Created by Sunil on 18/10/12.
//  Copyright (c) 2012 Robosoft Technologies. All rights reserved.
//

#import "HRDataSourceController.h"
#import "RSSOperation.h"
#import "HRLoginOperation.h"
#import "SBJsonWriter.h"

@interface HRDataSourceController()

-(NSMutableURLRequest *)getURLRequestWithURLString:(NSString *)inURLString ofType:(enum eHTTPRequestType)inRequerstType andDetails:(NSDictionary *)inDetails;
-(NSString *)getPostStringForDetails:(NSDictionary *)inDetails;

//-(NSString*)urlEscapeString:(NSString *)unencodedString;
//-(NSString*)addQueryStringToUrlString:(NSString *)urlString withDictionary:(NSDictionary *)dictionary;

@end

static HRDataSourceController *sharedDSController=nil;

@implementation HRDataSourceController
@synthesize operationQueue;

- (id) init
{
	self = [super init];
	if (self != nil) {
		operationQueue=[[NSOperationQueue alloc] init];
	}
	return self;
}


#pragma mark Interface Methods

+(HRDataSourceController *)sharedController
{
	if(nil==sharedDSController)
	{
		sharedDSController=[[HRDataSourceController alloc] init];
	}
	return sharedDSController;
}


-(void)cancelAllOperations
{
    [operationQueue cancelAllOperations];
    [operationQueue.operations makeObjectsPerformSelector:@selector(setHandler:) withObject:nil];
}

-(void)cancelAllOperationsForViewControllerType:(SJViewControllerType)inViewControllerType
{
	NSArray *operations = [operationQueue operations];
	for (RSSOperation *operation in  operations)
	{
		if (operation.viewControllerType == inViewControllerType)
		{
         //   operation.handler=nil;
			[operation cancel];
		}
	}
}

-(void)cancelAllOperationsForViewControllerType:(SJViewControllerType)inViewControllerType forType:(RSSParserType)caller
{
	NSArray *operations = [operationQueue operations];
	for (RSSOperation *operation in  operations)
	{
		if (operation.viewControllerType == inViewControllerType && operation.type == caller)
		{
         //   operation.handler=nil;
			[operation cancel];
		}
	}
}
-(void)parseDataContentsAtURL:(NSString *)inURLString requestType:(enum eHTTPRequestType)inRequestType details:(NSDictionary *)inDetails ofSection:(RSSParserType)inSectionType  withViewControllerType:(SJViewControllerType)inViewControllerType completion:(SJCompletionHandler)handler
{
    NSMutableURLRequest *theRequest = [self getURLRequestWithURLString:inURLString ofType:inRequestType andDetails:inDetails];
    
    HRLoginOperation* loginOperation =[[HRLoginOperation alloc] init];
    loginOperation.type=inSectionType;
    loginOperation.urlRequest = theRequest;
    loginOperation.viewControllerType=inViewControllerType;
    loginOperation.handler=handler;
    [operationQueue addOperation:loginOperation];
}




#pragma mark Private Methods

-(NSMutableURLRequest *)getURLRequestWithURLString:(NSString *)inURLString ofType:(enum eHTTPRequestType)inRequerstType andDetails:(NSDictionary *)inDetails
{
    NSMutableURLRequest *urlRequest = nil;
    
    switch (inRequerstType)
    {
        case eHTTPGetRequest:
        {
            NSString *theURLString =[self addQueryStringToUrlString:inURLString withDictionary:inDetails]; //[self addQueryStringToUrlString:inURLString withDictionary:inDetails];
            urlString=theURLString;
          //  NSLog(@"theURLString =  %@",theURLString);
            
            urlRequest = [[NSMutableURLRequest alloc] init];
            [urlRequest setURL:[NSURL URLWithString:theURLString]];  
            [urlRequest setHTTPMethod:@"GET"];
            [urlRequest setValue:@"application/json" forHTTPHeaderField:@"Content-Type"];
            [urlRequest setTimeoutInterval:90];
            break;
        }
        case eHTTPPostRequest:
        {
            urlString=inURLString;
            NSString *post = [self getPostStringForDetails:inDetails];
           // NSLog(@"post %@",post);
            NSData *postData = [post dataUsingEncoding:NSASCIIStringEncoding allowLossyConversion:YES];
            
            
            NSString *postLength = [NSString stringWithFormat:@"%d", [postData length]];
            
            urlRequest = [[NSMutableURLRequest alloc] init];
            [urlRequest setURL:[NSURL URLWithString:inURLString]];
            [urlRequest setHTTPMethod:@"POST"];
            [urlRequest setValue:postLength forHTTPHeaderField:@"Content-Length"];
            [urlRequest setValue:@"application/json" forHTTPHeaderField:@"Content-Type"];
            [urlRequest setHTTPBody:postData];
            [urlRequest setTimeoutInterval:90];
        }
            break;

        default:
            break;
    }
    
    return urlRequest;
}

-(NSString*)urlEscapeString:(NSString *)unencodedString
{
    CFStringRef originalStringRef = (__bridge_retained CFStringRef)unencodedString;
    NSString *s = (__bridge_transfer NSString *)CFURLCreateStringByAddingPercentEscapes(NULL,originalStringRef, NULL, NULL,kCFStringEncodingUTF8);
    CFRelease(originalStringRef);
    return s;
}
-(NSString*)addQueryStringToUrlString:(NSString *)inUrlString withDictionary:(NSDictionary *)dictionary
{
    NSMutableString *urlWithQuerystring = [[NSMutableString alloc] initWithString:inUrlString];
    
    for (id key in dictionary) {
        NSString *keyString = [key description];
        NSString *valueString = [[dictionary objectForKey:key] description];
        
        if ([urlWithQuerystring rangeOfString:@"?"].location == NSNotFound) {
            [urlWithQuerystring appendFormat:@"?%@=%@", [self urlEscapeString:keyString], [self urlEscapeString:valueString]];
        } else {
            [urlWithQuerystring appendFormat:@"&%@=%@", [self urlEscapeString:keyString], [self urlEscapeString:valueString]];
        }
    }
    return urlWithQuerystring;
}


-(NSString *)getPostStringForDetails:(NSDictionary *)inDetails
{
    NSString *postString = @"";

    SBJsonWriter *jsonWriter = [[SBJsonWriter alloc] init];
    postString = [jsonWriter stringWithObject:inDetails];
    return postString;
}

@end
