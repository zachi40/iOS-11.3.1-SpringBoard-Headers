//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBRestartManager, SBRestartTransitionRequest;

@protocol SBRestartManagerDelegate <NSObject>

@optional
- (void)restartManager:(SBRestartManager *)arg1 willRestartWithTransitionRequest:(SBRestartTransitionRequest *)arg2;
- (void)restartManagerExitImminent:(SBRestartManager *)arg1;
- (void)restartManagerWillReboot:(SBRestartManager *)arg1;
- (void)restartManagerWillShutdown:(SBRestartManager *)arg1;
@end

