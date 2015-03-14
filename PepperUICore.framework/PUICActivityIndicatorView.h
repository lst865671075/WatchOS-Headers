//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface PUICActivityIndicatorView : UIView
{
    UIView *_content;
    unsigned long long _state;
    unsigned long long _nextState;
    double _spinUpProgress;
    _Bool _hidesWhenStopped;
    _Bool _ignoreViewHierarchyChange;
    long long _activityIndicatorViewStyle;
    id <PUICActivityIndicatorViewDelegate> _delegate;
    UIColor *_color;
}

@property(nonatomic) _Bool ignoreViewHierarchyChange; // @synthesize ignoreViewHierarchyChange=_ignoreViewHierarchyChange;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) __weak id <PUICActivityIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle;
- (void).cxx_destruct;
- (double)spinUpProgress;
- (void)setSpinUpProgress:(double)arg1;
- (void)_didAnimateOut;
- (void)_willAnimateOutWithDuration:(double)arg1;
- (void)_didAnimateIn;
- (void)_willAnimateInWithDuration:(double)arg1;
- (void)didMoveToWindow;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (void)setAnimating:(_Bool)arg1 skipBeginOrEndAnimations:(_Bool)arg2;
@property(nonatomic, getter=isAnimating) _Bool animating; // @dynamic animating;
- (void)_removeAllAnimations:(_Bool)arg1;
- (void)_stopAnimatingNow;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_rotateNow;
- (void)_beginSpinUp;
- (id)_spinUpAnimation;
- (id)_spinAnimation;
- (void)_beginSpinDownNow:(_Bool)arg1;
- (id)_frameAnimationFromFrame:(int)arg1 toFrame:(int)arg2;
- (_Bool)_spinsDown;
- (void)_updateContentImage;
- (void)_goToImageFrame:(int)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithActivityIndicatorStyle:(long long)arg1;
- (void)_commonInit;
- (int)_numFrames;

@end

