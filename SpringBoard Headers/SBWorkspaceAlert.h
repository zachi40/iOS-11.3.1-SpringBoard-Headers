//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceEntity.h"

@class SBAlert;

@interface SBWorkspaceAlert : SBWorkspaceEntity
{
    SBAlert *_alert;
}

+ (id)entityForAlert:(id)arg1;
- (void).cxx_destruct;
- (CDUnknownBlockType)_generator;
@property(retain, nonatomic) SBAlert *alert; // @synthesize alert=_alert;
@property(readonly, nonatomic) Class alertClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAlert:(id)arg1;
- (_Bool)isAlertEntity;
- (id)representedDisplay;
- (_Bool)representsAlertOfClass:(Class)arg1;

@end
