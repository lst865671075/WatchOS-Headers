//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, PUICDelayedBlock;

@interface ORBTapGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    float _progressMin;
    float _progressLatch;
    float _progressMax;
    struct CGPoint _touchStartLocation;
    double _longPressStartTime;
    PUICDelayedBlock *_longPressProgressTimer;
    _Bool _cancelledOtherGestures;
    _Bool _hasLatched;
    _Bool _acceptLongPress;
    _Bool _shouldCancelOtherGestureRecognizers;
    _Bool _shouldAllowTouchMove;
    float _progress;
    id <ORBTapGestureRecognizerDelegate> _orbDelegate;
}

@property(nonatomic) _Bool shouldAllowTouchMove; // @synthesize shouldAllowTouchMove=_shouldAllowTouchMove;
@property(nonatomic) _Bool shouldCancelOtherGestureRecognizers; // @synthesize shouldCancelOtherGestureRecognizers=_shouldCancelOtherGestureRecognizers;
@property(nonatomic) _Bool acceptLongPress; // @synthesize acceptLongPress=_acceptLongPress;
@property(nonatomic) __weak id <ORBTapGestureRecognizerDelegate> orbDelegate; // @synthesize orbDelegate=_orbDelegate;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool hasLatched; // @synthesize hasLatched=_hasLatched;
- (void).cxx_destruct;
- (void)_clearLongPressProgressTimer;
- (void)_scheduleLongPressProgressTimerWithDelay:(double)arg1;
- (float)_longPressProgress;
- (void)_updateLongPressForTouchesEnded:(id)arg1;
- (void)_updateLongPressForTouchesBegan:(id)arg1;
- (void)_setScaleFactor;
- (_Bool)_touchMovedTooFarFromStartPoint:(id)arg1;
- (void)_cancelOtherGestureRecognizersIfNecessaryForTouches:(id)arg1 event:(id)arg2;
- (void)_cleanup;
- (void)_updateWithProgress:(float)arg1;
- (void)_updateWithEvent:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

