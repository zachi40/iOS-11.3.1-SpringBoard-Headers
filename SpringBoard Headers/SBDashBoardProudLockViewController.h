//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

@interface SBDashBoardProudLockViewController : SBDashBoardViewControllerBase
{
    long long _desiredIconState;
    _Bool _iconVisible;
    _Bool _suspendLockUpdates;
}

- (void)_setIconState:(long long)arg1 animated:(_Bool)arg2;
- (void)_setIconVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_showLockIfNeededAnimated:(_Bool)arg1;
- (void)_showLockIfNeededForAuthenticated:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)handleEvent:(id)arg1;
- (void)loadView;
- (id)proudLockIconView;
@property(nonatomic) _Bool suspendLockUpdates; // @synthesize suspendLockUpdates=_suspendLockUpdates;
- (void)updateLockForBiometricMatchFailure;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

