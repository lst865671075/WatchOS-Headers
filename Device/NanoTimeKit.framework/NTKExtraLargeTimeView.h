//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NTKTimeView.h"

@class NSString, NTKDigitalTimeLabel;

@interface NTKExtraLargeTimeView : UIView <NTKTimeView>
{
    BOOL _statusBarVisible;
    NTKDigitalTimeLabel *_timeHourView;
    NTKDigitalTimeLabel *_timeMinuteView;
}

@property(retain, nonatomic) NTKDigitalTimeLabel *timeMinuteView; // @synthesize timeMinuteView=_timeMinuteView;
@property(retain, nonatomic) NTKDigitalTimeLabel *timeHourView; // @synthesize timeHourView=_timeHourView;
- (void)setStatusBarVisible:(BOOL)arg1;
- (void)cancelWristRaiseAnimation;
- (void)setBottomColor:(id)arg1;
- (void)setTopColor:(id)arg1;
- (void)setAnimatesForegroundColors:(BOOL)arg1;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)cleanupAfterZoom;
- (void)prepareToZoom;
- (void).cxx_destruct;
- (void)setTimeOffset:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

