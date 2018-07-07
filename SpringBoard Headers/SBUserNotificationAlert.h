//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class BKSProcessAssertion, BSAuditToken, NSDictionary, NSExtension, NSObject<OS_dispatch_source>, NSString, NSTimer, NSURL, SBUISound, UIViewController, _SBRemoteAlertContentHostViewController;

@interface SBUserNotificationAlert : SBAlertItem
{
    NSString *_alertSource;
    BSAuditToken *_auditToken;
    unsigned int _replyPort;
    NSObject<OS_dispatch_source> *_portWatcher;
    NSObject<OS_dispatch_source> *_expirationTimer;
    _Bool _sentResponse;
    _Bool _cleanedUp;
    int _token;
    int _timeout;
    unsigned long long _requestFlags;
    NSString *_alertHeader;
    id _alertMessage;
    NSString *_alertMessageDelimiter;
    NSString *_lockScreenAlertHeader;
    id _lockScreenAlertMessage;
    NSString *_lockScreenAlertMessageDelimiter;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_otherButtonTitle;
    NSString *_soundPath;
    unsigned int _soundID;
    unsigned int _soundIDBehavior;
    NSDictionary *_vibrationPattern;
    long long _soundAlertType;
    NSString *_soundAlertTopic;
    double _soundRepeatDuration;
    NSTimer *_soundStopTimer;
    id _keyboardTypes;
    id _autocapitalizationTypes;
    id _autocorrectionTypes;
    id _textFieldTitles;
    id _textFieldValues;
    double _creationTime;
    int _defaultButtonTag;
    int _unlockActionButtonTag;
    unsigned int _replyFlags;
    NSString *_defaultResponseLaunchBundleID;
    NSURL *_defaultResponseLaunchURL;
    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
    _SBRemoteAlertContentHostViewController *_contentViewControllerForAlertController;
    long long _defaultButtonActionStyle;
    long long _alternateButtonActionStyle;
    long long _otherButtonActionStyle;
    unsigned int _allowedInLoginWindow:1;
    unsigned int _canceled:1;
    unsigned int _isActivated:1;
    unsigned int _aboveLock:1;
    unsigned int _displayActionButtonOnLockScreen:1;
    unsigned int _dismissOnLock:1;
    unsigned int _dontDismissOnUnlock:1;
    unsigned int _behavesSuperModally:1;
    unsigned int _allowMenuButtonDismissal:1;
    unsigned int _forcesModalAlertAppearance:1;
    unsigned int _dismissesOverlaysOnLockScreen:1;
    unsigned int _disableIdleSleepWhileVisible:1;
    unsigned int _configuredLocked:1;
    unsigned int _configuredNeedsPasscode:1;
    unsigned int _defaultResponseAppLaunchWaitingForPasscode:1;
    unsigned int _deactivatingForPresentationUpdate:1;
    SBUISound *_sound;
    BKSProcessAssertion *_processAssertion;
    unsigned int _allowLockscreenDismissal:1;
    id <BSInvalidatable> _idleTimerDisableAssertion;
    NSString *_extensionIdentifier;
    NSExtension *_alertExtension;
    id <NSCopying> _extensionRequest;
}

- (void).cxx_destruct;
- (void)_activateApplication:(id)arg1 withURL:(id)arg2;
- (void)_cleanup;
- (void)_clearRemoteViewControllerIfPresent;
- (_Bool)_displayActionButtonOnLockScreen;
- (void)_noteVolumeOrLockPressed;
- (id)_prepareNewAlertControllerWithLockedState:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)_publicDescription;
- (id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2;
- (void)_sendResponseAndCleanUp:(int)arg1;
- (void)_setActivated:(_Bool)arg1;
- (long long)_uiAlertActionStyleFromSBUserNotificationButtonPresentationStyle:(int)arg1;
@property(retain) NSExtension *alertExtension; // @synthesize alertExtension=_alertExtension;
@property(retain) NSString *alertHeader; // @synthesize alertHeader=_alertHeader;
@property(retain) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain) NSString *alertMessageDelimiter; // @synthesize alertMessageDelimiter=_alertMessageDelimiter;
- (_Bool)allowInLoginWindow;
- (_Bool)allowLockScreenDismissal;
- (_Bool)allowMenuButtonDismissal;
@property(retain) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(retain) id autocapitalizationTypes; // @synthesize autocapitalizationTypes=_autocapitalizationTypes;
@property(retain) id autocorrectionTypes; // @synthesize autocorrectionTypes=_autocorrectionTypes;
- (_Bool)behavesSuperModally;
- (void)cancel;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
@property(retain) UIViewController *contentViewControllerForAlertController; // @synthesize contentViewControllerForAlertController=_contentViewControllerForAlertController;
- (void)dealloc;
@property(retain) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(retain) NSString *defaultResponseLaunchBundleID; // @synthesize defaultResponseLaunchBundleID=_defaultResponseLaunchBundleID;
@property(retain) NSURL *defaultResponseLaunchURL; // @synthesize defaultResponseLaunchURL=_defaultResponseLaunchURL;
- (id)description;
- (void)didDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (void)dismissIfNecessaryWithResponse:(int)arg1;
- (_Bool)dismissOnLock;
- (_Bool)dismissesOverlaysOnLockScreen;
- (void)doCleanupAfterDeactivationAnimation;
@property(retain) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(copy) id <NSCopying> extensionRequest; // @synthesize extensionRequest=_extensionRequest;
- (_Bool)forcesModalAlertAppearance;
- (id)initWithMessage:(id)arg1 replyPort:(unsigned int)arg2 requestFlags:(int)arg3 auditToken:(CDStruct_6ad76789)arg4;
@property(retain) id keyboardTypes; // @synthesize keyboardTypes=_keyboardTypes;
@property(retain) NSString *lockScreenAlertHeader; // @synthesize lockScreenAlertHeader=_lockScreenAlertHeader;
@property(retain) NSString *lockScreenAlertMessage; // @synthesize lockScreenAlertMessage=_lockScreenAlertMessage;
@property(retain) NSString *lockScreenAlertMessageDelimiter; // @synthesize lockScreenAlertMessageDelimiter=_lockScreenAlertMessageDelimiter;
@property(retain) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
- (void)performUnlockAction;
- (_Bool)reappearsAfterLock;
- (_Bool)reappearsAfterUnlock;
@property(retain) NSString *remoteServiceBundleIdentifier; // @synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier;
@property(retain) NSString *remoteViewControllerClassName; // @synthesize remoteViewControllerClassName=_remoteViewControllerClassName;
@property(retain) NSString *soundAlertTopic; // @synthesize soundAlertTopic=_soundAlertTopic;
@property long long soundAlertType; // @synthesize soundAlertType=_soundAlertType;
@property unsigned int soundID; // @synthesize soundID=_soundID;
@property unsigned int soundIDBehavior; // @synthesize soundIDBehavior=_soundIDBehavior;
@property(retain) NSString *soundPath; // @synthesize soundPath=_soundPath;
@property(retain) id textFieldTitles; // @synthesize textFieldTitles=_textFieldTitles;
@property(retain) id textFieldValues; // @synthesize textFieldValues=_textFieldValues;
@property(retain) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
- (_Bool)shouldShowInLockScreen;
- (id)sound;
- (int)token;
- (_Bool)undimsScreen;
- (void)updateWithMessage:(id)arg1 requestFlags:(int)arg2;
- (void)willActivate;
- (void)willDeactivateForReason:(int)arg1;

@end
