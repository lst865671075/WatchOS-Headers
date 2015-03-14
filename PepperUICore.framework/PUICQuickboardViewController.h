//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PUICQuickboardTransition.h"

@class NSString, PUICQuickboardTransitionCoordinator, UIButton, UIView;

@interface PUICQuickboardViewController : UIViewController <PUICQuickboardTransition>
{
    _Bool _confirmSend;
    _Bool _animatesSelectionToDestinationView;
    id <PUICQuickboardViewControllerDelegate> _delegate;
    UIView *_contentView;
    UIButton *_cancelButton;
    UIButton *_acceptButton;
    NSString *_acceptButtonTitle;
    unsigned long long _dismissMode;
    UIViewController *_dismissalViewController;
    unsigned long long _quickboardType;
    UIView *_backgroundView;
    UIView *_headerView;
    UIViewController *_presentedVC;
    PUICQuickboardTransitionCoordinator *_qbTransitionCoordinator;
    UIView *_blackoutView;
    UIView *_punchoutView;
    UIView *_punchoutBackgroundView;
    double _dismissalAnimationDuration;
}

+ (double)recommendedTopContentInset;
@property(nonatomic) double dismissalAnimationDuration; // @synthesize dismissalAnimationDuration=_dismissalAnimationDuration;
@property(retain, nonatomic) UIView *punchoutBackgroundView; // @synthesize punchoutBackgroundView=_punchoutBackgroundView;
@property(retain, nonatomic) UIView *punchoutView; // @synthesize punchoutView=_punchoutView;
@property(retain, nonatomic) UIView *blackoutView; // @synthesize blackoutView=_blackoutView;
@property(retain, nonatomic) PUICQuickboardTransitionCoordinator *qbTransitionCoordinator; // @synthesize qbTransitionCoordinator=_qbTransitionCoordinator;
@property(nonatomic) __weak UIViewController *presentedVC; // @synthesize presentedVC=_presentedVC;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) unsigned long long quickboardType; // @synthesize quickboardType=_quickboardType;
@property(nonatomic) __weak UIViewController *dismissalViewController; // @synthesize dismissalViewController=_dismissalViewController;
@property(nonatomic) _Bool animatesSelectionToDestinationView; // @synthesize animatesSelectionToDestinationView=_animatesSelectionToDestinationView;
@property(nonatomic) unsigned long long dismissMode; // @synthesize dismissMode=_dismissMode;
@property(nonatomic) _Bool confirmSend; // @synthesize confirmSend=_confirmSend;
@property(copy, nonatomic) NSString *acceptButtonTitle; // @synthesize acceptButtonTitle=_acceptButtonTitle;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <PUICQuickboardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (void)blackPunchOutView:(id)arg1;
- (void)transparentPunchOutView:(id)arg1;
- (void)punchOutView:(id)arg1;
- (void)addContentViewAnimations:(_Bool)arg1;
- (void)cleanupAnimations;
- (void)finishDismissalWithOptions:(unsigned long long)arg1;
- (void)addDismissalAnimationsWithOptions:(unsigned long long)arg1;
- (void)finishPresentationWithOptions:(unsigned long long)arg1;
- (void)addPresentationAnimationsWithOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) double animationDuration;
- (void)acceptButtonTappedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_acceptButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)setShowsAcceptButton:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool showsAcceptButton;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

