//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKColorComplicationView.h>

#import "NTKWorldClockComplicationDisplay.h"

@class NSDictionary, NSString, NTKColoringLabel, NTKDigitalTimeLabel, UIFont;

@interface NTKWorldClockColorComplicationView : NTKColorComplicationView <NTKWorldClockComplicationDisplay>
{
    NTKColoringLabel *_cityLabel;
    NTKDigitalTimeLabel *_timeLabel;
    UIFont *_normalLayoutCityFont;
    NSDictionary *_alternateLayoutCityTextAttributes;
    BOOL _alternateLayout;
}

- (void)setShortCity:(id)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setAnimatesForegroundColors:(BOOL)arg1;
- (void).cxx_destruct;
- (void)setForegroundColor:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned int complicationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

