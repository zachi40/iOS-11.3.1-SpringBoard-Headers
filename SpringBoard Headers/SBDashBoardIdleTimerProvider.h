//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIdleTimerObserving.h"

@class NSMutableSet, NSString;

@interface SBDashBoardIdleTimerProvider : NSObject <SBIdleTimerObserving>
{
    id <SBIdleTimer> _idleTimer;
    id <SBIdleBehaviorProviding> _idleTimerProvider;
    id <BSInvalidatable> _stateCaptureAssertion;
    NSMutableSet *_disabledIdleTimerAssertions;
    id <SBDashBoardIdleTimerProviderDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_idleTimerDescriptorForBehaviorProvider:(id)arg1;
- (void)_proposeEffectiveIdleTimerDescriptorForReason:(id)arg1;
- (void)_proposeIdleTimerDescriptor:(id)arg1 forReason:(id)arg2;
- (void)addDisabledIdleTimerAssertionReason:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SBDashBoardIdleTimerProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)effectiveIdleTimerDescriptor;
@property(retain, nonatomic) id <SBIdleTimer> idleTimer; // @synthesize idleTimer=_idleTimer;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (_Bool)isDisabledAssertionActiveForReason:(id)arg1;
@property(readonly, nonatomic, getter=isIdleTimerEnabled) _Bool idleTimerEnabled;
- (void)removeDisabledIdleTimerAssertionReason:(id)arg1;
- (void)resetIdleTimer;
- (void)updateIdleTimerWithIdleDimProvider:(id)arg1 reason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

