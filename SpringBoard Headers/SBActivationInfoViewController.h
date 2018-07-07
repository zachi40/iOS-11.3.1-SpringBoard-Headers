//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIButton, UITextView, UIView;

@interface SBActivationInfoViewController : UIViewController
{
    NSString *_meid;
    NSString *_imei;
    NSString *_iccid;
    NSString *_csn;
    NSString *_serial;
    _Bool _isOnBootstrap;
    double _alertHeight;
    UIView *_containerView;
    UITextView *_textView;
    UIButton *_regulatoryInfoButton;
}

- (void).cxx_destruct;
- (id)_attributedLineWithLabel:(id)arg1 labelAttributes:(id)arg2 value:(id)arg3 valueAttributes:(id)arg4;
- (id)_formattedCSN;
- (id)_formattedICCID;
- (id)_formattedIMEI;
- (id)_formattedString:(id)arg1 withSpaceAfterDigits:(unsigned long long)arg2;
- (void)_simStatusChanged:(id)arg1;
- (void)_updateTextView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
@property(readonly, nonatomic) UIButton *regulatoryInfoButton; // @synthesize regulatoryInfoButton=_regulatoryInfoButton;
- (void)viewWillAppear:(_Bool)arg1;

@end
