//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBHardwareButtonInteraction.h"

@class NSString, SBBacklightController, SBBannerController, SBHIDInterface, SBLockScreenManager, SBOrientationLockManager, SBScreenWakeAnimationController, SBSoundController, SpringBoard;

@interface SBSleepWakeHardwareButtonInteraction : NSObject <SBHardwareButtonInteraction>
{
    _Bool _inhibitNextSinglePressUp;
    _Bool _SOSGestureActive;
    _Bool _fadeOutInProgressFromLockButtonWhileUnlocked;
    _Bool _undidFadeOutFromLockButton;
    _Bool _didPlayLockSound;
    SBBacklightController *_backlightController;
    SBBannerController *_bannerController;
    SBLockScreenManager *_lockScreenManager;
    SBOrientationLockManager *_orientationLockManager;
    SBScreenWakeAnimationController *_screenWakeAnimationController;
    SBSoundController *_soundController;
    SBHIDInterface *_HIDInterface;
    SpringBoard *_SBApp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBHIDInterface *HIDInterface; // @synthesize HIDInterface=_HIDInterface;
@property(retain, nonatomic) SpringBoard *SBApp; // @synthesize SBApp=_SBApp;
- (void)_performSleep;
- (void)_performWake;
- (void)_playLockSound;
@property(retain, nonatomic) SBBacklightController *backlightController; // @synthesize backlightController=_backlightController;
@property(retain, nonatomic) SBBannerController *bannerController; // @synthesize bannerController=_bannerController;
- (_Bool)consumeInitialPressDown;
- (_Bool)consumeSinglePressUp;
@property(nonatomic) _Bool didPlayLockSound; // @synthesize didPlayLockSound=_didPlayLockSound;
@property(nonatomic) _Bool fadeOutInProgressFromLockButtonWhileUnlocked; // @synthesize fadeOutInProgressFromLockButtonWhileUnlocked=_fadeOutInProgressFromLockButtonWhileUnlocked;
@property(nonatomic) _Bool inhibitNextSinglePressUp; // @synthesize inhibitNextSinglePressUp=_inhibitNextSinglePressUp;
- (id)init;
@property(nonatomic, getter=isSOSGestureActive) _Bool SOSGestureActive; // @synthesize SOSGestureActive=_SOSGestureActive;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBOrientationLockManager *orientationLockManager; // @synthesize orientationLockManager=_orientationLockManager;
- (_Bool)reverseSleepIfNeededAndPossible;
@property(retain, nonatomic) SBScreenWakeAnimationController *screenWakeAnimationController; // @synthesize screenWakeAnimationController=_screenWakeAnimationController;
@property(retain, nonatomic) SBSoundController *soundController; // @synthesize soundController=_soundController;
@property(nonatomic) _Bool undidFadeOutFromLockButton; // @synthesize undidFadeOutFromLockButton=_undidFadeOutFromLockButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

