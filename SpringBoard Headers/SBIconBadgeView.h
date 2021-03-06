//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBIconAccessoryView.h"

@class NSString, SBDarkeningImageView, SBIconAccessoryImage;

@interface SBIconBadgeView : UIView <SBIconAccessoryView>
{
    NSString *_text;
    SBDarkeningImageView *_incomingTextView;
    _Bool _animating;
    CDUnknownBlockType _queuedAnimation;
    _Bool _displayingAccessory;
    SBIconAccessoryImage *_backgroundImage;
    SBDarkeningImageView *_backgroundView;
    SBIconAccessoryImage *_textImage;
    SBDarkeningImageView *_textView;
}

+ (id)_checkoutBackgroundImage;
+ (id)_checkoutImageForText:(id)arg1 highlighted:(_Bool)arg2;
+ (id)_createImageForText:(id)arg1 highlighted:(_Bool)arg2;
+ (double)_maxTextWidth;
+ (struct CGPoint)_overhang;
+ (id)_textFont;
+ (struct CGPoint)_textOffset;
+ (double)_textPadding;
+ (id)checkoutAccessoryImagesForIcon:(id)arg1 location:(long long)arg2;
- (void).cxx_destruct;
- (void)_clearText;
- (void)_configureAnimatedForText:(id)arg1 highlighted:(_Bool)arg2 withPreparation:(CDUnknownBlockType)arg3 animation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_crossfadeToTextImage:(id)arg1 withPreparation:(CDUnknownBlockType)arg2 animation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_resizeForTextImage:(id)arg1;
- (void)_zoomInWithTextImage:(id)arg1 preparation:(CDUnknownBlockType)arg2 animation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_zoomOutWithPreparation:(CDUnknownBlockType)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGPoint)accessoryOriginForIconBounds:(struct CGRect)arg1;
- (void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 withPreparation:(CDUnknownBlockType)arg3 animation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
- (void)dealloc;
- (_Bool)displayingAccessory;
- (id)init;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(copy, nonatomic) CDUnknownBlockType queuedAnimation; // @synthesize queuedAnimation=_queuedAnimation;
- (void)setAccessoryBrightness:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

