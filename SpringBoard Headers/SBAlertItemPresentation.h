//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAlertItem;

@interface SBAlertItemPresentation : NSObject
{
    SBAlertItem *_alertItem;
    id <SBAlertItemPresenter> _presenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBAlertItem *alertItem; // @synthesize alertItem=_alertItem;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAlertItem:(id)arg1 presenter:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) id <SBAlertItemPresenter> presenter; // @synthesize presenter=_presenter;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
