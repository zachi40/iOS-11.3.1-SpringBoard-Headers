//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBMultiplexedHostingObserver.h"
#import "SBUISizeObservingViewDelegate.h"
#import "_SBMultiplexedHostViewScreenRectObserver.h"

@class NSString, UIView;

@interface SBMultiplexingViewController : UIViewController <SBUISizeObservingViewDelegate, SBMultiplexedHostingObserver, _SBMultiplexedHostViewScreenRectObserver>
{
    NSString *_hostRequester;
    UIView *_multiplexedHostingView;
    _Bool _hosting;
    id <SBMultiplexedHostingDelegate> _hostingDelegate;
    NSString *_isolationIdentifier;
}

- (void).cxx_destruct;
- (id)containingScrollView;
- (id)createViewControllerForIsolation;
- (void)dealloc;
- (_Bool)directlyForwardViewSizeChanges;
@property(readonly, copy, nonatomic) NSString *hostRequester; // @synthesize hostRequester=_hostRequester;
@property(nonatomic) __weak id <SBMultiplexedHostingDelegate> hostingDelegate; // @synthesize hostingDelegate=_hostingDelegate;
- (id)initWithIsolationIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isHosting) _Bool hosting; // @synthesize hosting=_hosting;
@property(readonly, copy, nonatomic) NSString *isolationIdentifier; // @synthesize isolationIdentifier=_isolationIdentifier;
- (void)loadView;
- (id)mainViewForTouchDelivery;
- (struct CGSize)preferredSizeForHostedView;
- (_Bool)shouldDisableClipping;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)wantsToShareTouches;
- (void)willActivateHosting;
- (void)willDeactivateHosting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

