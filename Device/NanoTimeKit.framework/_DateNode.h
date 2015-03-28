//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

#import "NTKDateComplicationDisplay.h"

@class NSString, SKSpriteNode, UIColor, UIFont;

@interface _DateNode : SKNode <NTKDateComplicationDisplay>
{
    NSString *_text;
    SKSpriteNode *_textNode;
    SKSpriteNode *_leftTextNode;
    SKSpriteNode *_rightTextNode;
    struct _NSRange _dayRange;
    UIColor *_baseColor;
    UIColor *_numberColor;
    BOOL _splitAndLayoutTwoTextSpriteNodes;
    unsigned int complicationType;
    id <NTKComplicationDisplayObserver> displayObserver;
    unsigned int _style;
    UIFont *_font;
    CDUnknownBlockType _updater;
}

- (void)setDateComplicationBaseColor:(id)arg1;
- (void)_updateSpriteNodes;
- (id)_spriteNodeWithAttributedText:(id)arg1;
- (id)_attributedStringAccentingNumbersInString:(id)arg1;
- (void)_nilAllTextSpriteNodes;
- (BOOL)shouldCancelTouchesInScrollview;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
@property(nonatomic) unsigned int complicationType; // @synthesize complicationType;
- (void)setDateComplicationText:(id)arg1 withDayRange:(struct _NSRange)arg2 forDateStyle:(unsigned int)arg3;
- (void)setDateComplicationText:(id)arg1 forDateStyle:(unsigned int)arg2;
- (unsigned int)supportedDateComplicationDateStyles;
- (void)setDateComplicationNumberColor:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType updater; // @synthesize updater=_updater;
- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
