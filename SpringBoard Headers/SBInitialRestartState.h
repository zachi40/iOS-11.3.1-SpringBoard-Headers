//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSString, SBBootDefaults, UMUser;

@interface SBInitialRestartState : NSObject <BSDescriptionProviding>
{
    _Bool _isAuthenticated;
    _Bool _isInLostMode;
    _Bool _isBlocked;
    _Bool _hasPasscodeSet;
    _Bool _requiresSetup;
    _Bool _shouldNeverLock;
    _Bool _forSimulator;
    UMUser *_currentUser;
    SBBootDefaults *_bootDefaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBBootDefaults *bootDefaults; // @synthesize bootDefaults=_bootDefaults;
@property(retain, nonatomic) UMUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(nonatomic) _Bool hasPasscodeSet; // @synthesize hasPasscodeSet=_hasPasscodeSet;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_isAuthenticated;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_isBlocked;
@property(nonatomic, getter=isForSimulator) _Bool forSimulator; // @synthesize forSimulator=_forSimulator;
@property(nonatomic, getter=isInLostMode) _Bool inLostMode; // @synthesize inLostMode=_isInLostMode;
@property(nonatomic) _Bool requiresSetup; // @synthesize requiresSetup=_requiresSetup;
@property(nonatomic) _Bool shouldNeverLock; // @synthesize shouldNeverLock=_shouldNeverLock;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

