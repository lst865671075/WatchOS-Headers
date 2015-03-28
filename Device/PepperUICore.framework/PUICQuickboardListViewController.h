//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PepperUICore/PUICQuickboardViewController.h>

#import "PUICTableViewDataSource.h"
#import "PUICTableViewDelegate.h"
#import "RadiosPreferencesDelegate.h"

@class NSMutableArray, NSString, PUICDictationViewController, PUICQuickboardListItemCell, PUICTableView, RadiosPreferences, UIButton, UIView;

@interface PUICQuickboardListViewController : PUICQuickboardViewController <PUICTableViewDelegate, PUICTableViewDataSource, RadiosPreferencesDelegate>
{
    PUICTableView *_tableView;
    UIView *_trayView;
    float _shadowImageHeight;
    PUICDictationViewController *_dictationViewController;
    UIButton *_dictationButton;
    RadiosPreferences *_radiosPreferences;
    NSMutableArray *_cachedHeights;
    NSMutableArray *_dismissedItemViews;
    id <PUICDictationViewControllerDelegate> _dictationDelegate;
    int _dictationMode;
    PUICQuickboardListItemCell *_selectedCell;
}

- (id)initWithDelegate:(id)arg1;
- (void)airplaneModeChanged;
- (void)dismissView:(id)arg1 toPositionY:(float)arg2 delayFactor:(unsigned int)arg3;
@property(retain, nonatomic) PUICQuickboardListItemCell *selectedCell; // @synthesize selectedCell=_selectedCell;
- (float)trayViewHiddenFrameOriginY;
- (float)trayViewVisibleFrameOriginY;
- (void)addDismissalAnimations;
- (void)addPresentationAnimations;
@property(nonatomic) int dictationMode; // @synthesize dictationMode=_dictationMode;
@property(nonatomic) __weak id <PUICDictationViewControllerDelegate> dictationDelegate; // @synthesize dictationDelegate=_dictationDelegate;
- (void)_updateAirplaneModeStatus;
- (void)_createRadiosPreferencesIfNeeded;
- (void)dictationButtonTapped:(id)arg1;
- (id)dictationButton;
- (void)didDeselectListItem:(int)arg1;
- (float)cachedHeightForListItem:(int)arg1 width:(float)arg2;
- (void)setupTrayView;
- (void)setupListView;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)additionalTrayButtons;
- (void)didSelectListItem:(int)arg1;
- (id)cellForListItem:(int)arg1;
- (float)heightForListItem:(int)arg1 width:(float)arg2;
- (int)numberOfListItems;
- (id)listView;
- (void)addContentViewAnimations:(BOOL)arg1;
- (void)setDismissMode:(unsigned int)arg1;
- (void)setConfirmSend:(BOOL)arg1;
- (id)initWithDelegate:(id)arg1 dictationMode:(int)arg2;
- (void)finishDismissalWithOptions:(unsigned int)arg1;
- (void).cxx_destruct;
- (double)animationDuration;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
