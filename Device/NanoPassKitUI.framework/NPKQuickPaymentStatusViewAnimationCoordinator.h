//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface NPKQuickPaymentStatusViewAnimationCoordinator : NSObject
{
    id <NPKQuickPaymentStatusViewAnimationCoordinatorDelegate> _delegate;
    UIView *_topContainerView;
    UIView *_bottomContainerView;
    unsigned int _transitionState;
    UIView *_pendingTopView;
    UIView *_pendingBottomView;
    UIView *_currentTopView;
    UIView *_currentBottomView;
}

@property(retain, nonatomic) UIView *currentBottomView; // @synthesize currentBottomView=_currentBottomView;
@property(retain, nonatomic) UIView *currentTopView; // @synthesize currentTopView=_currentTopView;
- (void)_handleAnimationSequenceComplete;
- (CDUnknownBlockType)_statusViewsAnimationBlockForPresentation:(BOOL)arg1;
@property(retain, nonatomic) UIView *pendingBottomView; // @synthesize pendingBottomView=_pendingBottomView;
@property(retain, nonatomic) UIView *pendingTopView; // @synthesize pendingTopView=_pendingTopView;
- (void)_invokeDidStartHidingOnDelegate;
- (void)_invokeDidFinishPresentingOnDelegate;
@property(nonatomic) unsigned int transitionState; // @synthesize transitionState=_transitionState;
- (void)_swapInPendingTopAndBottomViews;
- (void)_getAnimationsMovingForState:(unsigned int)arg1;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
- (void)setNewTopView:(id)arg1 bottomView:(id)arg2 animated:(BOOL)arg3;
- (void)invalidateContainerViewFrames;
- (id)initWithTopContainerView:(id)arg1 bottomContainerView:(id)arg2;
- (void).cxx_destruct;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) __weak id <NPKQuickPaymentStatusViewAnimationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;

@end
