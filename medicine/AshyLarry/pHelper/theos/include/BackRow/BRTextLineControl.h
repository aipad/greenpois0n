/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTypesetLine;

__attribute__((visibility("hidden")))
@interface BRTextLineControl : BRControl {
@private
	BRTypesetLine *_line;	// 40 = 0x28
}
- (void)dealloc;	// 0x315f518d
- (void)drawInContext:(CGContextRef)context;	// 0x315f51d5
- (void)setLine:(id)line;	// 0x315f5145
@end
