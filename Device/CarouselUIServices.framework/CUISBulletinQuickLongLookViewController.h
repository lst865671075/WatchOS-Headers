//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CUISAlertHeaderViewDelegate.h"
#import "CUISBulletinClientViewControllerDelegate.h"
#import "CUISBulletinQuickLongLook.h"
#import "CUISSiriContextProvider.h"
#import "UIScrollViewDelegate.h"

@class CUISAlertChevronView, CUISAlertHeaderView, CUISAlertPlatterView, CUISBulletinActionMenu, CUISBulletinClientViewController, NSDictionary, NSString, UIScrollView, UIView;

@interface CUISBulletinQuickLongLookViewController : UIViewController <CUISBulletinClientViewControllerDelegate, CUISAlertHeaderViewDelegate, UIScrollViewDelegate, CUISBulletinQuickLongLook, CUISSiriContextProvider>
{
    BOOL _scrollToBottomOnResize;
    id <CUISAlertHeaderViewDataSource> _headerInfo;
    NSDictionary *_customInfo;
    id <CUISBulletinQuickLongLookViewControllerDelegate> _delegate;
    CUISBulletinActionMenu *_menu;
    CUISBulletinClientViewController *_clientContent;
    CUISAlertHeaderView *_header;
    CUISAlertChevronView *_topChevron;
    UIScrollView *_scrollView;
    UIView *_topContainerView;
    CUISAlertPlatterView *_headerCompatibilityPlatterView;
    struct CGSize _contentFitSize;
}

+ (unsigned int)presentationModeForHeaderStyle:(unsigned int)arg1;
+ (unsigned int)headerStyleForPresentationMode:(unsigned int)arg1;
+ (float)roundUpToHalfOrFullPoint:(float)arg1;
+ (void)initialize;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
- (void)setActionMenu:(id)arg1;
- (void)animateDismissLongLookWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateInLongLookWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPresentationMode:(unsigned int)arg1;
- (void)didTapQuickLookTitleInHeaderView:(id)arg1;
- (void)didTapIconInHeaderView:(id)arg1;
- (void)animateInQuickLookWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) CUISAlertHeaderView *header; // @synthesize header=_header;
- (id)createSiriContext;
@property(retain, nonatomic) CUISAlertPlatterView *headerCompatibilityPlatterView; // @synthesize headerCompatibilityPlatterView=_headerCompatibilityPlatterView;
@property(nonatomic) struct CGSize contentFitSize; // @synthesize contentFitSize=_contentFitSize;
@property(retain, nonatomic) CUISAlertChevronView *topChevron; // @synthesize topChevron=_topChevron;
@property(retain, nonatomic) CUISBulletinClientViewController *clientContent; // @synthesize clientContent=_clientContent;
- (BOOL)hasPresentedViewController;
- (void)setHeaderInfo:(id)arg1;
- (id)initWithClientViewController:(id)arg1 customInfo:(id)arg2;
- (id)headerActionLaunchOptions;
- (BOOL)hasSelectedAction;
- (void)animateToLongLookIfReadyWithCompletion:(CDUnknownBlockType)arg1;
- (void)setQuickLongLookDelegate:(id)arg1;
- (void)clientViewControllerInvalidateBlurredHeaderContent:(id)arg1;
- (void)clientViewControllerRequestsPresentFullScreenViewController:(id)arg1;
- (void)clientViewController:(id)arg1 requestsReloadHeaderWithCustomInfo:(id)arg2;
- (void)clientViewController:(id)arg1 scrollToContentOffset:(float)arg2 animated:(BOOL)arg3;
- (void)clientViewControllerRequestsAutoScrollToBottom:(id)arg1;
- (void)clientViewControllerRequestsScrollToBottom:(id)arg1;
- (void)clientViewControllerNeedsResizeViews:(id)arg1;
- (void)clientViewControllerPerformedAction:(id)arg1;
- (void)clientViewControllerRequestsDismissal:(id)arg1;
@property(retain, nonatomic) NSDictionary *customInfo; // @synthesize customInfo=_customInfo;
- (void)alertBackgroundDidChange;
- (void)_updateHeaderFrame;
- (unsigned int)presentationMode;
- (void)_addClientViewIfNeeded;
- (BOOL)_scrollViewPastTopThreshold:(float)arg1;
- (void)_handleScrollDidEnd:(id)arg1;
- (BOOL)_shouldUseContentOffset:(struct CGPoint)arg1 inClientView:(struct CGPoint *)arg2;
- (BOOL)_draggedPastTopThreshold;
- (void)_scrollToBottom;
- (void)prepareDismissal;
- (void)prepareDismissalWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateCellWidth;
- (void)_updateContentFitSize;
- (void)_quickboardDidFinishPresenting:(id)arg1;
- (id)alertSuppressionContexts;
@property(retain, nonatomic) CUISBulletinActionMenu *menu; // @synthesize menu=_menu;
- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLayoutSubviews;
@property(nonatomic) __weak id <CUISBulletinQuickLongLookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

