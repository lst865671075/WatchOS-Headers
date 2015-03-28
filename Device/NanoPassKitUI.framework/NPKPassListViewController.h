//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NPKCollectionViewDataSource.h"
#import "NPKCollectionViewDelegate.h"
#import "NPKPassCollectionViewCellDelegate.h"
#import "NPKPaymentServiceDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NPKActivatingUIAssertion, NPKCollectionView, NPKPassGroupPagingBar, NPKPassListLayout, NPKPaymentService, NPKPaymentServiceFieldDetectAssertion, NPKPaymentServiceTransientPaymentPassAssertion, NPKPaymentStatusView, NPKSinglePassLayout, NPKTransitionalSinglePassLayout, NSArray, NSDate, NSNumber, NSString, PUICContentUnavailableView;

@interface NPKPassListViewController : UIViewController <NPKCollectionViewDataSource, UICollectionViewDelegateFlowLayout, NPKPassCollectionViewCellDelegate, NPKCollectionViewDelegate, NPKPaymentServiceDelegate>
{
    NSArray *_currentPassDescriptions;
    NSArray *_currentPaymentPassDescriptions;
    NSArray *_currentStandardPassDescriptions;
    NSNumber *_currentHelperViewAllowed;
    BOOL _transitioningLayout;
    BOOL _paymentStatusViewAnimating;
    BOOL _paymentStatusViewNeedsUpdate;
    BOOL _paymentStatusViewShouldBeVisible;
    BOOL _passesHaveLoaded;
    BOOL _useTransitionalContentOffset;
    NPKActivatingUIAssertion *_activatingUIAssertion;
    NPKPaymentService *_paymentService;
    NPKPassListLayout *_passCollectionViewLayout;
    NPKTransitionalSinglePassLayout *_transitionalLayout;
    NPKSinglePassLayout *_singlePassLayout;
    CDUnknownBlockType _postTransitionWork;
    NPKCollectionView *_passCollectionView;
    PUICContentUnavailableView *_contentUnavailableView;
    NPKPaymentStatusView *_paymentStatusView;
    NSString *_currentPaymentPassUniqueID;
    NPKPaymentServiceTransientPaymentPassAssertion *_transientPaymentPassAssertion;
    NSString *_initialPassUniqueID;
    struct CGPoint *_originalCollectionViewContentOffset;
    NPKPassGroupPagingBar *_groupPagingBar;
    NSDate *_snapshotExpiration;
    NPKPaymentServiceFieldDetectAssertion *_fieldDetectAssertion;
    struct CGPoint _transitionalContentOffset;
}

@property(readonly, nonatomic) NSString *noContentMessage;
@property(retain, nonatomic) NPKPaymentServiceTransientPaymentPassAssertion *transientPaymentPassAssertion; // @synthesize transientPaymentPassAssertion=_transientPaymentPassAssertion;
@property(retain, nonatomic) NSString *currentPaymentPassUniqueID; // @synthesize currentPaymentPassUniqueID=_currentPaymentPassUniqueID;
@property(retain, nonatomic) NPKPaymentStatusView *paymentStatusView; // @synthesize paymentStatusView=_paymentStatusView;
- (BOOL)_visibleSinglePaymentPassHasUniqueIdentifier:(id)arg1;
- (void)npkCollectionViewShouldOverrideSetContentOffset:(struct CGPoint *)arg1;
- (void)npkCollectionViewDidAddSubview:(id)arg1;
- (void)npkPassCollectionViewCellDidReceiveNewZIndex:(id)arg1;
- (void)npkPassCollectionViewCellDidChangeSuperview:(id)arg1;
- (void)npkPassCollectionViewCellBeganDragging:(id)arg1;
- (void)npkPassCollectionViewCellTapped:(id)arg1;
- (BOOL)npkCollectionViewIsShowingHelperCell;
@property(nonatomic) BOOL paymentStatusViewShouldBeVisible; // @synthesize paymentStatusViewShouldBeVisible=_paymentStatusViewShouldBeVisible;
@property(nonatomic) BOOL paymentStatusViewNeedsUpdate; // @synthesize paymentStatusViewNeedsUpdate=_paymentStatusViewNeedsUpdate;
@property(nonatomic) BOOL paymentStatusViewAnimating; // @synthesize paymentStatusViewAnimating=_paymentStatusViewAnimating;
- (void)_setupPaymentStatusViewFrame;
- (id)_passDescriptionForSingleVisibleCell;
- (void)setPaymentStatusViewVisible:(BOOL)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) NPKPaymentServiceFieldDetectAssertion *fieldDetectAssertion; // @synthesize fieldDetectAssertion=_fieldDetectAssertion;
- (void)_paymentPassSelectedForCell:(id)arg1;
@property(nonatomic) struct CGPoint transitionalContentOffset; // @synthesize transitionalContentOffset=_transitionalContentOffset;
@property(nonatomic) BOOL useTransitionalContentOffset; // @synthesize useTransitionalContentOffset=_useTransitionalContentOffset;
@property(retain, nonatomic) NPKTransitionalSinglePassLayout *transitionalLayout; // @synthesize transitionalLayout=_transitionalLayout;
@property(nonatomic) struct CGPoint *originalCollectionViewContentOffset; // @synthesize originalCollectionViewContentOffset=_originalCollectionViewContentOffset;
- (id)_allIndexPathsInGroupForPassWithIndexPath:(id)arg1;
- (BOOL)_shouldInvertPresentationForCardAtIndexPath:(id)arg1;
- (void)setShowingCloseButton:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL listViewAllowed;
@property(copy, nonatomic) CDUnknownBlockType postTransitionWork; // @synthesize postTransitionWork=_postTransitionWork;
@property(nonatomic) BOOL transitioningLayout; // @synthesize transitioningLayout=_transitioningLayout;
@property(retain, nonatomic) NSDate *snapshotExpiration; // @synthesize snapshotExpiration=_snapshotExpiration;
@property(readonly, nonatomic) BOOL snapshotShouldExpire;
@property(readonly, nonatomic) BOOL currentHelperViewAllowed;
@property(readonly, nonatomic) NSString *noContentTitle;
@property(retain, nonatomic) PUICContentUnavailableView *contentUnavailableView; // @synthesize contentUnavailableView=_contentUnavailableView;
- (void)_paymentPassNoLongerSelectedForCell:(id)arg1;
- (void)closeButtonTapped;
@property(readonly, nonatomic) NSArray *currentPassDescriptions;
- (void)setShowGroupPagingBar:(BOOL)arg1 numberOfItemsInGroup:(unsigned int)arg2 selectedIndexInGroup:(unsigned int)arg3;
- (void)_auditCellZIndexes;
- (void)_individualPassCellSelected:(id)arg1;
@property(retain, nonatomic) NPKActivatingUIAssertion *activatingUIAssertion; // @synthesize activatingUIAssertion=_activatingUIAssertion;
- (id)_descriptionForIndexPath:(id)arg1;
@property(readonly, getter=isOrbEnabled) BOOL orbEnabled;
- (BOOL)_showApplePayHelperCard;
@property(readonly) NSArray *nonPaymentPassDescriptionsForDisplay;
@property(readonly) NSArray *paymentPassDescriptionsForDisplay;
- (struct CGRect)_paymentStatusViewFrame;
- (void)selectCardWithUniqueID:(id)arg1 showDiff:(BOOL)arg2 animated:(BOOL)arg3;
@property(nonatomic) BOOL passesHaveLoaded; // @synthesize passesHaveLoaded=_passesHaveLoaded;
@property(retain, nonatomic) NPKPassGroupPagingBar *groupPagingBar; // @synthesize groupPagingBar=_groupPagingBar;
@property(retain, nonatomic) NPKCollectionView *passCollectionView; // @synthesize passCollectionView=_passCollectionView;
@property(retain, nonatomic) NSString *initialPassUniqueID; // @synthesize initialPassUniqueID=_initialPassUniqueID;
@property(retain, nonatomic) NPKPassListLayout *passCollectionViewLayout; // @synthesize passCollectionViewLayout=_passCollectionViewLayout;
@property(retain, nonatomic) NPKSinglePassLayout *singlePassLayout; // @synthesize singlePassLayout=_singlePassLayout;
- (void)performWorkWhenPassesHaveLoaded:(CDUnknownBlockType)arg1;
- (void)_collectionView:(id)arg1 tappedIndexPath:(id)arg2 animated:(BOOL)arg3 transitionType:(unsigned int)arg4;
@property(readonly, nonatomic) NSArray *currentStandardPassDescriptions;
@property(readonly, nonatomic) NSArray *currentPaymentPassDescriptions;
- (void)_handleBarcodeModeChanged:(id)arg1;
- (void)_handleLocaleChanged:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_willDeletePaymentPass:(id)arg1;
- (void)_handlePassesChanged:(id)arg1;
@property(retain, nonatomic) NPKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
- (void).cxx_destruct;
- (void)_updateContentView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)dealloc;
- (float)initialYOffset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
