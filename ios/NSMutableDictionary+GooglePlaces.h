//
//  NSMutableDictionary+GooglePlaces.h
//  RNGooglePlaces
//
//  Created by Dhanraj on 21/02/18.
//  Copyright © 2018 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GooglePlaces/GooglePlaces.h>

@interface NSMutableDictionary (GMSPlaces)

+ (instancetype)dictionaryWithGMSPlace2:(GMSPlace*)place;

@end
