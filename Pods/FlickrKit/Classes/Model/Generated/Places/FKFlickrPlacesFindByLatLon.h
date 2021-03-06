//
//  FKFlickrPlacesFindByLatLon.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPlacesFindByLatLonError_RequiredArgumentsMissing = 1,		 /* One or more required parameters was not included with the API request. */
	FKFlickrPlacesFindByLatLonError_NotAValidLatitude = 2,		 /* The latitude argument failed validation. */
	FKFlickrPlacesFindByLatLonError_NotAValidLongitude = 3,		 /* The longitude argument failed validation. */
	FKFlickrPlacesFindByLatLonError_NotAValidAccuracy = 4,		 /* The accuracy argument failed validation. */
	FKFlickrPlacesFindByLatLonError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPlacesFindByLatLonError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPlacesFindByLatLonError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPlacesFindByLatLonError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPlacesFindByLatLonError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPlacesFindByLatLonError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPlacesFindByLatLonError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPlacesFindByLatLonError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPlacesFindByLatLonError;

/*

Return a place ID for a latitude, longitude and accuracy triple.<br /><br />
The flickr.places.findByLatLon method is not meant to be a (reverse) geocoder in the traditional sense. It is designed to allow users to find photos for "places" and will round up to the nearest place type to which corresponding place IDs apply.<br /><br />
For example, if you pass it a street level coordinate it will return the city that contains the point rather than the street, or building, itself.<br /><br />
It will also truncate latitudes and longitudes to three decimal points.




Response:

<places latitude="37.76513627957266" longitude="-122.42020770907402" accuracy="16" total="1">
   <place place_id="Y12JWsKbApmnSQpbQg" woeid="23512048"
      latitude="37.765" longitude="-122.424" 
      place_url="/United+States/California/San+Francisco/Mission+Dolores"
      place_type="neighbourhood" place_type_id="22" 
      timezone="America/Los_Angeles"
      name="Mission Dolores, San Francisco, CA, US, United States"/>
</places>

*/
@interface FKFlickrPlacesFindByLatLon : NSObject <FKFlickrAPIMethod>

/* The latitude whose valid range is -90 to 90. Anything more than 4 decimal places will be truncated. */
@property (nonatomic, copy) NSString *lat; /* (Required) */

/* The longitude whose valid range is -180 to 180. Anything more than 4 decimal places will be truncated. */
@property (nonatomic, copy) NSString *lon; /* (Required) */

/* Recorded accuracy level of the location information. World level is 1, Country is ~3, Region ~6, City ~11, Street ~16. Current range is 1-16. The default is 16. */
@property (nonatomic, copy) NSString *accuracy;


@end
