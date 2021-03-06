//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUtilityLabelImageComplicationView.h>

@class NTKDigitalTimeLabel;

@interface NTKUtilityTimeLabelImageComplicationView : NTKUtilityLabelImageComplicationView
{
    NTKDigitalTimeLabel *_timeLabelIdeal;
    NTKDigitalTimeLabel *_timeLabelNoDesignator;
}

@property(retain, nonatomic) NTKDigitalTimeLabel *timeLabelNoDesignator; // @synthesize timeLabelNoDesignator=_timeLabelNoDesignator;
@property(retain, nonatomic) NTKDigitalTimeLabel *timeLabelIdeal; // @synthesize timeLabelIdeal=_timeLabelIdeal;
- (void)_showAndAdjustTimeLabel;
- (void)_setTimeLabelOverrideDate:(id)arg1;
- (void)_adjustTimeLabel;
- (void)_applyForegroundAlpha;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

