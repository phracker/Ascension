//
//  SVFileInfoStrings.h
//  Ascension
//
//  Copyright (c) 2011, Stefan Vogt. All rights reserved.
//  http://byteproject.net
//
//  Use of this source code is governed by a MIT-style license.
//  See the file LICENSE for details.
//

#import <Cocoa/Cocoa.h>

@interface SVFileInfoStrings : NSObject {
	
	NSString *uiFileSizeString;
	NSString *uiCreationDateString;
	NSString *uiModDateString;
}

// interface strings
@property (readwrite, assign) NSString *uiFileSizeString;
@property (readwrite, assign) NSString *uiCreationDateString;
@property (readwrite, assign) NSString *uiModDateString;

// singleton class method
+ (SVFileInfoStrings *)sharedFileInfoStrings;

// general methods
- (void)updateFileSizeString:(NSNotification *)note;
- (void)updateCreationDateString:(NSNotification *)note;
- (void)updateModDateString:(NSNotification *)note;

@end
