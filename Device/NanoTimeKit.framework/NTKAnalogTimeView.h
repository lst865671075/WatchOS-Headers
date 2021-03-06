//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKView.h"

#import "NTKTimeView.h"

@class NSString, NTKAnalogScene;

@interface NTKAnalogTimeView : SKView <NTKTimeView>
{
    BOOL _zooming;
    NTKAnalogScene *_analogScene;
    unsigned int _runningFrameInterval;
    unsigned int _zoomingFrameInterval;
}

- (id)doubleKeylinePathAroundDial;
- (id)singleKeylinePathAroundDial;
- (id)keylinePathAroundSecondHand;
@property(nonatomic) BOOL shouldRasterizeBackground;
- (void)_renderContent;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)unloadMonogramComplication;
- (id)loadMonogramComplication;
- (void)_applyDataMode:(int)arg1;
@property(readonly, nonatomic) unsigned int runningFrameInterval; // @synthesize runningFrameInterval=_runningFrameInterval;
@property(readonly, nonatomic) unsigned int zoomingFrameInterval; // @synthesize zoomingFrameInterval=_zoomingFrameInterval;
- (void)updateFrameInterval;
@property(retain, nonatomic) NTKAnalogScene *analogScene; // @synthesize analogScene=_analogScene;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 andScene:(id)arg2;
- (void)unloadDateComplication;
- (id)loadDateComplicationOfStyle:(unsigned int)arg1 withFont:(id)arg2;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_configureForEditMode:(int)arg1;
- (void)setZoomFraction:(float)arg1 diameter:(float)arg2;
@property(readonly, nonatomic) BOOL zooming; // @synthesize zooming=_zooming;
- (void)cleanupAfterZoom;
- (void)prepareToZoom;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1;
- (void).cxx_destruct;
- (void)setFrozen:(BOOL)arg1;
- (void)setTimeOffset:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

