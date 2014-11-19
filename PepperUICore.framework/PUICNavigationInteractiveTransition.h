//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UINavigationInteractiveTransitionBase.h"

@class UIScreenEdgePanGestureRecognizer;

@interface PUICNavigationInteractiveTransition : _UINavigationInteractiveTransitionBase
{
    UIScreenEdgePanGestureRecognizer *_edgePanRecognizer;
    _Bool _useScreenEdgePopGesture;
    id <PUICNavigationInteractiveTransitionStopDelegate> _stopAnimationDelegate;
}

@property(nonatomic) __weak id <PUICNavigationInteractiveTransitionStopDelegate> stopAnimationDelegate; // @synthesize stopAnimationDelegate=_stopAnimationDelegate;
@property(nonatomic) _Bool useScreenEdgePopGesture; // @synthesize useScreenEdgePopGesture=_useScreenEdgePopGesture;
- (void).cxx_destruct;
- (void)finalizeStoppedTransition:(_Bool)arg1;
- (void)_stopInteractiveTransition;
- (_Bool)transitionWasStopped;
- (_Bool)stoppedTransitionWasCancelled;
@property(readonly, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;
- (void)setNotInteractiveTransition;
- (void)startInteractiveTransition;
- (id)gestureRecognizerView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;
- (void)_configureNavigationGesture;
- (id)initWithNavigationController:(id)arg1 animator:(id)arg2;

@end

