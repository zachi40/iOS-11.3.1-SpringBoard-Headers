//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBLockStateAggregator : NSObject
{
    unsigned long long _lockState;
}

+ (id)sharedInstance;
- (id)_descriptionForLockState:(unsigned long long)arg1;
- (void)_updateLockState;
- (void)dealloc;
- (id)description;
- (_Bool)hasAnyLockState;
- (id)init;
- (unsigned long long)lockState;

@end

