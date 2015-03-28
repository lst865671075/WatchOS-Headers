//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CUISPasscodeFieldDelegate.h"

@class CUISPasscodeField, CUISPasscodeKeypadButton, NSDate, NSDictionary, NSString, NSTimer, PUICActivityIndicatorView, UILabel, UIView;

@interface CUISPasscodeViewController : UIViewController <CUISPasscodeFieldDelegate>
{
    int _mode;
    UIView *_keypad;
    NSDictionary *_passcodeFields;
    CUISPasscodeField *_currentPasscodeField;
    CUISPasscodeField *_newPasscodeField1;
    CUISPasscodeField *_newPasscodeField2;
    int _currentPasscodeFieldStyle;
    int _newPasscodeFieldStyle;
    CUISPasscodeKeypadButton *_deleteButton;
    CUISPasscodeKeypadButton *_okButton;
    CUISPasscodeKeypadButton *_cancelButton;
    UIView *_contentView;
    UIView *_nopeView;
    UILabel *_nopeReasonLabel;
    PUICActivityIndicatorView *_spinner;
    BOOL _isWaiting;
    NSTimer *_enterPasscodePromptTimer;
    int _passcodeLengthLimit;
    UILabel *_blockedLabel;
    unsigned int _failedPasscodeAttempts;
    NSDate *_unblockDate;
    NSTimer *_blockedStateUpdateTimer;
    BOOL _shouldShowCancel;
    BOOL _shouldUseLockScreenAnimation;
    BOOL _shouldShowSpinnerOnEntry;
    id <CUISPasscodeViewControllerDelegate> _delegate;
    id <CUISSetupAsyncPasscodeCreationViewControllerDelegate> _asynchronousDelegate;
    NSString *_changingPasscode;
    NSString *_currentPasscode;
    UILabel *_titleLabel;
    int _activeFieldType;
}

+ (unsigned int)minutesToBlockForFailedPasscodeAttempts:(int)arg1;
+ (unsigned int)maxMinutesToBlock;
- (void)_clearBlockedState;
- (void)_updateTitle:(id)arg1;
@property(nonatomic, getter=_activeFieldType, setter=_setActiveFieldType:) int activeFieldType; // @synthesize activeFieldType=_activeFieldType;
@property(copy, nonatomic) NSString *changingPasscode; // @synthesize changingPasscode=_changingPasscode;
@property(nonatomic) __weak id <CUISSetupAsyncPasscodeCreationViewControllerDelegate> asynchronousDelegate; // @synthesize asynchronousDelegate=_asynchronousDelegate;
@property(nonatomic) BOOL shouldShowSpinnerOnEntry; // @synthesize shouldShowSpinnerOnEntry=_shouldShowSpinnerOnEntry;
@property(nonatomic) BOOL shouldUseLockScreenAnimation; // @synthesize shouldUseLockScreenAnimation=_shouldUseLockScreenAnimation;
@property(nonatomic) BOOL shouldShowCancel; // @synthesize shouldShowCancel=_shouldShowCancel;
- (id)initForChangeWithCurrentPasscode:(id)arg1;
- (id)initComplexWithMode:(int)arg1;
- (void)_showPasscodeError:(id)arg1;
@property(copy, nonatomic) NSString *currentPasscode; // @synthesize currentPasscode=_currentPasscode;
- (void)_showConfirmPasscode:(id)arg1;
- (void)_showDifferingPasscodes;
- (void)_resetForIncorrectPasscode;
- (BOOL)validatePasscode:(id)arg1 error:(id *)arg2;
- (void)passcodeField:(id)arg1 didEnterPasscode:(id)arg2;
- (void)_passcodeEntered:(id)arg1;
- (void)_enterPasscodePromptTimerFired:(id)arg1;
- (void)_configureAccessibleKeypadButton:(id)arg1;
- (void)keypadButtonTapped:(id)arg1;
- (void)_doLockScreenAnimationOut;
- (void)_doLockScreenAnimationIn;
- (void)_setNopeViewVisible:(BOOL)arg1;
@property(readonly, nonatomic, getter=_activeField) CUISPasscodeField *activeField;
- (void)_saveBlockState;
- (void)_setupBlockedTextWithMinutes:(int)arg1;
- (void)_layoutFieldsForFieldType:(int)arg1 titleScreenOffset:(int)arg2;
- (void)_setAuxiliaryButtonsVisible:(BOOL)arg1;
- (void)_setKeypadNumbersDisabledForLongPasscode:(BOOL)arg1;
- (void)_updateBlockedState;
- (void)_dismissNope;
- (void)_setupKeypad;
- (unsigned int)expectedPasscodeLength;
- (void)_setWaiting:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setActiveFieldType:(int)arg1 animated:(BOOL)arg2 withNewTitle:(id)arg3;
- (void)_setInitialTitle;
- (void)_clearAndHideAllFields;
- (id)_initWithMode:(int)arg1 forceComplex:(BOOL)arg2;
- (id)initWithMode:(int)arg1;
- (void)_cancel;
- (void).cxx_destruct;
- (void)reset;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (BOOL)prefersStatusBarHidden;
@property(nonatomic) __weak id <CUISPasscodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

@end
