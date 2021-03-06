//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDataPlanAlertItem.h"

#import "SBDataPlanAlertActions.h"

@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem <SBDataPlanAlertActions>
{
    NSURL *_accountURL;
}

+ (id)laterButtonTitle;
+ (id)nowButtonTitle;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *accountURL; // @synthesize accountURL=_accountURL;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1;
- (void)notNow;
- (void)takeAction;

@end

