//
//  FKFlickrTestNull.m
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrTestNull.h" 

@implementation FKFlickrTestNull



- (BOOL) needsLogin {
    return YES;
}

- (BOOL) needsSigning {
    return YES;
}

- (FKPermission) requiredPerms {
    return 0;
}

- (NSString *) name {
    return @"flickr.test.null";
}

- (BOOL) isValid:(NSError **)error {
    BOOL valid = YES;
	NSMutableString *errorDescription = [[NSMutableString alloc] initWithString:@"You are missing required params: "];

	if(error != NULL) {
		if(!valid) {	
			NSDictionary *userInfo = @{NSLocalizedDescriptionKey: errorDescription};
			*error = [NSError errorWithDomain:FKFlickrKitErrorDomain code:FKErrorInvalidArgs userInfo:userInfo];
		}
	}
    return valid;
}

- (NSDictionary *) args {
    NSMutableDictionary *args = [NSMutableDictionary dictionary];

    return [args copy];
}

- (NSString *) descriptionForError:(NSInteger)error {
    switch(error) {
		case FKFlickrTestNullError_SSLIsRequired:
			return @"SSL is required";
		case FKFlickrTestNullError_InvalidSignature:
			return @"Invalid signature";
		case FKFlickrTestNullError_MissingSignature:
			return @"Missing signature";
		case FKFlickrTestNullError_LoginFailedOrInvalidAuthToken:
			return @"Login failed / Invalid auth token";
		case FKFlickrTestNullError_UserNotLoggedInOrInsufficientPermissions:
			return @"User not logged in / Insufficient permissions";
		case FKFlickrTestNullError_InvalidAPIKey:
			return @"Invalid API Key";
		case FKFlickrTestNullError_ServiceCurrentlyUnavailable:
			return @"Service currently unavailable";
		case FKFlickrTestNullError_WriteOperationFailed:
			return @"Write operation failed";
		case FKFlickrTestNullError_FormatXXXNotFound:
			return @"Format \"xxx\" not found";
		case FKFlickrTestNullError_MethodXXXNotFound:
			return @"Method \"xxx\" not found";
		case FKFlickrTestNullError_InvalidSOAPEnvelope:
			return @"Invalid SOAP envelope";
		case FKFlickrTestNullError_InvalidXMLRPCMethodCall:
			return @"Invalid XML-RPC Method Call";
		case FKFlickrTestNullError_BadURLFound:
			return @"Bad URL found";
  
		default:
			return @"Unknown error code";
    }
}

@end
