//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAirplaneModeDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSTimer, NWSystemPathMonitor, SBAirplaneModeController, SBAlertItem, TUCall;

@interface SBTelephonyManager : NSObject <SBAirplaneModeDelegate>
{
    struct __CTServerConnection *_serverConnection;
    _Bool _containsCellularRadio;
    _Bool _hasCellularTelephony;
    _Bool _hasCellularData;
    struct __CFString *_cachedCTRegistrationCellStatus;
    struct __CFString *_cachedCTRegistrationDisplayStatus;
    int _cachedCTRegistrationIsForcedHome;
    int _cellRegistrationStatus;
    int _registrationStatus;
    NSTimer *_fakeServiceTimer;
    NSTimer *_fakeCellServiceTimer;
    _Bool _signalStrengthHasBeenSet;
    int _signalStrengthBars;
    int _maxSignalStrengthBars;
    NSString *_operatorName;
    NSString *_lastKnownNetworkCountryCode;
    unsigned int _usingWifi:1;
    unsigned int _usingVPN:1;
    unsigned int _pretendingToSearch:1;
    unsigned int _callForwardingIndicator:2;
    NSObject<OS_dispatch_queue> *_wirelessModemDynamicStoreQueue;
    struct __SCDynamicStore *_queue_wirelessModemDynamicStore;
    struct __CFString *_queue_wirelessModemDynamicStoreSharingKey;
    _Bool _isNetworkTethering;
    int _numberOfNetworkTetheredDevices;
    unsigned int _hasShownWaitingAlert:1;
    SBAlertItem *_activationAlertItem;
    int _numActivationFailures;
    int _inEmergencyCallbackMode;
    unsigned int _loggingCallAudio:1;
    SBAirplaneModeController *_airplaneModeController;
    int _needsUserIdentificationModule;
    NSString *_simStatus;
    int _suppressesCellDataIndicator;
    int _suppressesCellIndicators;
    int _lteConnectionShows4G;
    int _modemDataConnectionType;
    _Bool _modemDataConnectionTypeIsKnown;
    _Bool _fallingBackToCellular;
    struct tcp_connection_fallback_watch_s *_cellularFallbackWatcher;
    void *_queue_fastDormancySuspendAssertion;
    NWSystemPathMonitor *_systemPathMonitor;
    TUCall *_incomingCall;
    TUCall *_activeCall;
    TUCall *_heldCall;
    TUCall *_outgoingCall;
}

+ (struct __CTServerConnection *)defaultTelephonyCenter;
+ (id)sharedTelephonyManager;
+ (id)sharedTelephonyManagerCreatingIfNecessary:(_Bool)arg1;
- (void).cxx_destruct;
- (_Bool)MALoggingEnabled;
- (void)SBTelephonyDaemonRestartHandler;
- (id)SIMStatus;
- (void)_avSystemControllerDidError:(id)arg1;
- (struct __CFString *)_cachedCTRegistrationCellStatus;
- (struct __CFString *)_cachedCTRegistrationDisplayStatus;
- (unsigned long long)_callCountForService:(int)arg1;
- (void)_cancelFakeCellServiceTimer;
- (void)_cancelFakeServiceTimer;
- (void)_carrierBundleChanged;
- (id)_fastPickedRouteForCall;
- (void)_fetchOperatorNameWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_lteConnectionShows4G;
- (void)_operatorBundleChanged;
- (void)_performQueryInBackground:(CDUnknownBlockType)arg1 withMainQueueResultHandler:(CDUnknownBlockType)arg2;
- (id)_phoneApp;
- (void)_postDataConnectionTypeChanged;
- (void)_postStartupNotification;
- (_Bool)_pretendingToSearch;
- (void)_provisioningUpdateWithStatus:(int)arg1;
- (void)_queue_noteWirelessModemDynamicStoreChanged;
- (void)_reallySetOperatorName:(id)arg1;
- (void)_resetModemConnectionType;
- (struct __CTServerConnection *)_serverConnection;
- (void)_serverConnectionDidError:(CDStruct_1ef3fb1f)arg1;
- (void)_setCachedCTRegistrationCellStatus:(struct __CFString *)arg1 displayStatus:(struct __CFString *)arg2 forcedHome:(_Bool)arg3;
- (void)_setCellRegistrationStatus:(int)arg1;
- (void)_setCurrentActivationAlertItem:(id)arg1;
- (void)_setIsInEmergencyCallbackMode:(unsigned char)arg1;
- (void)_setIsLoggingCallAudio:(_Bool)arg1;
- (void)_setIsNetworkTethering:(_Bool)arg1 withNumberOfDevices:(int)arg2;
- (void)_setIsUsingWiFiConnection:(_Bool)arg1;
- (void)_setRegistrationStatus:(int)arg1;
- (void)_setSIMStatus:(id)arg1;
- (void)_setSignalStrengthBars:(int)arg1 maxBars:(int)arg2;
- (void)_setSuppressesCellDataIndicator:(int)arg1;
- (void)_setSuppressesCellIndicators:(int)arg1;
- (void)_startFakeServiceIfNecessary;
- (void)_stopFakeCellService;
- (void)_stopFakeService;
- (_Bool)_suppressesCellDataIndicator;
- (void)_updateDataConnectionType;
- (void)_updateLastKnownNetworkCountryCode;
- (int)_updateModemDataConnectionTypeWithCTInfo:(id)arg1;
- (void)_updateNetworkLocale;
- (void)_updateRegistrationNow;
- (void)_updateState;
@property(retain, nonatomic) TUCall *activeCall; // @synthesize activeCall=_activeCall;
- (_Bool)activeCallExists;
- (void)airplaneModeDidChange:(_Bool)arg1;
- (unsigned long long)callCount;
- (void)callEventHandler:(id)arg1;
- (int)callForwardingIndicator;
- (int)cellRegistrationStatus;
- (_Bool)cellularRadioCapabilityIsActive;
- (_Bool)containsCellularRadio;
- (id)copyMobileEquipmentInfo;
- (id)copyTelephonyCapabilities;
- (int)dataConnectionType;
- (void)disconnectAllCalls;
- (void)disconnectCallAndActivateHeld;
- (void)disconnectDisplayedCall;
- (void)disconnectIncomingCall;
- (id)displayedCall;
- (void)dumpBasebandState:(id)arg1;
- (_Bool)emergencyCallSupported;
- (unsigned long long)faceTimeAudioCallCount;
- (void)handleCallControlFailure:(id)arg1;
- (_Bool)hasCellularData;
- (_Bool)hasCellularTelephony;
@property(retain, nonatomic) TUCall *heldCall; // @synthesize heldCall=_heldCall;
- (_Bool)heldCallExists;
- (_Bool)inCall;
- (double)inCallDuration;
- (_Bool)inCallUsingSpeakerOrReceiver;
@property(retain, nonatomic) TUCall *incomingCall; // @synthesize incomingCall=_incomingCall;
- (_Bool)incomingCallExists;
- (id)init;
- (_Bool)isEmergencyCallActive;
- (_Bool)isEndpointOnCurrentDevice;
- (_Bool)isInEmergencyCallbackMode;
- (_Bool)isLoggingCallAudio;
- (_Bool)isNetworkRegistrationEnabled;
- (_Bool)isNetworkTethering;
- (_Bool)isTTYEnabled;
- (_Bool)isUsingSlowDataConnection;
- (_Bool)isUsingVPNConnection;
- (id)lastKnownNetworkCountryCode;
- (int)maxSignalStrengthBars;
- (_Bool)multipleCallsExist;
- (_Bool)needsUserIdentificationModule;
- (int)numberOfNetworkTetheredDevices;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)operatorName;
@property(retain, nonatomic) TUCall *outgoingCall; // @synthesize outgoingCall=_outgoingCall;
- (_Bool)outgoingCallExists;
- (void)postponementStatusChanged;
- (void)preHeatDataLinkForDomains:(id)arg1;
- (void)queue_setFastDormancySuspended:(_Bool)arg1 withConnection:(struct __CTServerConnection *)arg2;
- (_Bool)registeredWithoutCellular;
- (int)registrationCauseCode;
- (int)registrationStatus;
- (void)setCallForwardingIndicator:(int)arg1;
- (void)setFastDormancySuspended:(_Bool)arg1;
- (void)setNetworkRegistrationEnabled:(_Bool)arg1;
- (void)setOperatorName:(id)arg1;
- (int)signalStrengthBars;
- (void)swapCalls;
- (void)telephonyAudioChangeHandler;
- (unsigned long long)telephonyCallCount;
- (void)updateCallForwardingIndicator;
- (void)updateCalls;
- (_Bool)updateLocale;
- (void)updateSpringBoard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
