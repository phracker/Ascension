//
//  SVFontProperties.h
//  Ascension
//
//  Copyright (c) 2011, Stefan Vogt. All rights reserved.
//  http://byteproject.net
//
//  Use of this source code is governed by a MIT-style license.
//  See the file LICENSE for details.
//

#import <Cocoa/Cocoa.h>

@interface SVFontProperties : NSObject {
	
	NSString *fontName;
	CGFloat	 fontSize;
}

// strings
@property (readwrite, assign) NSString *fontName;

// integer and float values
@property (readwrite, assign) CGFloat fontSize;

@end
