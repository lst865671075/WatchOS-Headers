//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PUICStatusViewDataSource.h"
#import "UIStatusBarServerClient.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, UILabel, UIStatusBarServer, _PUICStatusBarGlobalContextIndicatorsView;

@interface PUICStatusBarGlobalContextView : UIView <UIStatusBarServerClient, PUICStatusViewDataSource>
{
    UILabel *_time;
    _PUICStatusBarGlobalContextIndicatorsView *_indicatorsView;
    double _indicatorsOffset;
    _Bool _animatingTime;
    _Bool _tookAssertion;
    _Bool _networkActivity;
    NSArray *_statusViewStates;
    NSDictionary *_statusViewStatesMap;
    NSMutableArray *_animationsQueue;
    unsigned long long _animationsInFight;
    unsigned long long _layoutBehaviorOverride;
    unsigned long long _currentLayoutBehavior;
    _Bool _inForeground;
    _Bool _currentDataIsStale;
    UIStatusBarServer *_statusBarServer;
}

@property(nonatomic) _Bool currentDataIsStale; // @synthesize currentDataIsStale=_currentDataIsStale;
@property(nonatomic) _Bool inForeground; // @synthesize inForeground=_inForeground;
@property(retain, nonatomic) UIStatusBarServer *statusBarServer; // @synthesize statusBarServer=_statusBarServer;
@property(nonatomic) unsigned long long layoutBehaviorOverride; // @synthesize layoutBehaviorOverride=_layoutBehaviorOverride;
- (void).cxx_destruct;
- (void)applyProperties:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initFromProperties:(id)arg1;
- (id)properties;
- (id)stateByIndex:(unsigned long long)arg1 forStatusView:(id)arg2;
- (unsigned long long)numberOfStatesForStatusView:(id)arg1;
- (void)_initializeStatusObjectsIfNecessary;
- (void)_kickOffIndicatorsAnimation:(id)arg1;
- (void)_kickOffTimeAnimation:(id)arg1;
- (void)_dequeuAnimations;
- (void)setTimeHidden:(_Bool)arg1 duration:(double)arg2 animation:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setTimeHidden:(_Bool)arg1 animation:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setTimeHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isTimeHidden;
- (void)setIndicatorsHidden:(_Bool)arg1 duration:(double)arg2 animation:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setIndicatorsHidden:(_Bool)arg1 animation:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setIndicatorsHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)areIndicatorsHidden;
- (void)_activityIndicatorChanged:(id)arg1;
- (void)_adjustStatesForData:(const CDStruct_1f4d094c *)arg1 animated:(_Bool)arg2 forceCycle:(_Bool)arg3;
- (void)_updateTime:(id)arg1;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(_Bool)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_1f4d094c *)arg2 withActions:(int)arg3;
- (void)_updateWithStatusBarData:(const CDStruct_1f4d094c *)arg1 withActions:(int)arg2;
- (void)_updateStatusBarServerRegistration;
- (void)_didEnterBackground:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (void)didMoveToSuperview;
@property(nonatomic, getter=isDoNotDisturbIndicatorSuppressed) _Bool suppressDoNotDisturbIndicator;
@property(nonatomic, getter=isDisconnectedIndicatorSuppressed) _Bool suppressDisconnectedIndicator;
@property(nonatomic, getter=isAirplaneModeIndicatorSuppressed) _Bool suppressAirplaneModeIndicator;
@property(nonatomic, getter=isChargingIndicatorSuppressed) _Bool suppressChargingIndicator;
- (void)_stateUnsupressed:(id)arg1;
- (void)_stateSuppressed:(id)arg1;
- (void)_releaseVisibleAssertion;
- (void)_takeVisibleAssertion;
- (void)willMoveToSuperview:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_layoutGlobalContextViews;
- (void)setNeedsLayout;
- (unsigned long long)layoutBehavior;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_getInitialTimeString;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

