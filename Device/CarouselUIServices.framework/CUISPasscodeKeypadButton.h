//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIView;

@interface CUISPasscodeKeypadButton : UIButton
{
    UIView *_backgroundView;
    BOOL _visible;
    float _backgroundInsetX;
    float _backgroundInsetY;
}

@property(nonatomic) float backgroundInsetY; // @synthesize backgroundInsetY=_backgroundInsetY;
@property(nonatomic) float backgroundInsetX; // @synthesize backgroundInsetX=_backgroundInsetX;
- (void)setVisible:(BOOL)arg1 duration:(double)arg2 delay:(double)arg3;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
