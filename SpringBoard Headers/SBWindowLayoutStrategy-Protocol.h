//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScreen, UIWindow;

@protocol SBWindowLayoutStrategy <NSObject>
- (struct CGRect)frameOnScreen:(UIScreen *)arg1 withInterfaceOrientation:(long long)arg2;
- (_Bool)shouldClipForWindow:(UIWindow *)arg1;
@end

