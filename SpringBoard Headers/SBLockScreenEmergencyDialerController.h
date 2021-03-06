//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBLockScreenEmergencyCallViewControllerDelegate.h"

@class NSString, SBLockScreenEmergencyCallViewController, UIViewController;

@interface SBLockScreenEmergencyDialerController : NSObject <SBLockScreenEmergencyCallViewControllerDelegate>
{
    SBLockScreenEmergencyCallViewController *_viewController;
    _Bool _active;
    id <SBLockScreenEmergencyDialerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)deactivate;
@property(nonatomic) __weak id <SBLockScreenEmergencyDialerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissEmergencyCallViewController:(id)arg1;
- (void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

