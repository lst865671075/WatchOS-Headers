//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "SPInterfaceItem.h"

@class NSArray, NSBundle, NSDictionary, NSString, UIColor;

@interface SPInterfaceGroupView : UIImageView <SPInterfaceItem>
{
    _Bool _clipsContentsVertically;
    _Bool _isNotification;
    _Bool _isSection;
    _Bool _isSectionDefault;
    _Bool _isRoot;
    _Bool _isTableRowRoot;
    _Bool _marginsSet;
    _Bool _radiusSet;
    _Bool _heightSet;
    _Bool _shouldRenderBackgroundColorAsImage;
    _Bool _defaultAnimate;
    id <SPInterfaceDelegate> _delegate;
    long long _groupViewLayout;
    NSDictionary *_itemDescriptionForIB;
    NSDictionary *_companionProperty;
    long long _interfaceAlignment;
    long long _verticalInterfaceAlignment;
    double _width;
    double _widthAdjustment;
    double _height;
    double _heightAdjustment;
    double _spacing;
    NSBundle *_bundle;
    NSString *_stringsFileName;
    UIColor *_renderedBackgroundColor;
    NSArray *_allAnimationImages;
    double _defaultDuration;
    struct CGSize _fixedSize;
    struct UIEdgeInsets _margins;
}

@property(nonatomic) _Bool defaultAnimate; // @synthesize defaultAnimate=_defaultAnimate;
@property(nonatomic) double defaultDuration; // @synthesize defaultDuration=_defaultDuration;
@property(copy, nonatomic) NSArray *allAnimationImages; // @synthesize allAnimationImages=_allAnimationImages;
@property(retain, nonatomic) UIColor *renderedBackgroundColor; // @synthesize renderedBackgroundColor=_renderedBackgroundColor;
@property(nonatomic) _Bool shouldRenderBackgroundColorAsImage; // @synthesize shouldRenderBackgroundColorAsImage=_shouldRenderBackgroundColorAsImage;
@property(nonatomic) _Bool heightSet; // @synthesize heightSet=_heightSet;
@property(nonatomic) _Bool radiusSet; // @synthesize radiusSet=_radiusSet;
@property(nonatomic) _Bool marginsSet; // @synthesize marginsSet=_marginsSet;
@property(nonatomic) _Bool isTableRowRoot; // @synthesize isTableRowRoot=_isTableRowRoot;
@property(nonatomic) _Bool isRoot; // @synthesize isRoot=_isRoot;
@property(nonatomic) _Bool isSectionDefault; // @synthesize isSectionDefault=_isSectionDefault;
@property(nonatomic) _Bool isSection; // @synthesize isSection=_isSection;
@property(copy, nonatomic) NSString *stringsFileName; // @synthesize stringsFileName=_stringsFileName;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) struct CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
@property(nonatomic) double heightAdjustment; // @synthesize heightAdjustment=_heightAdjustment;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double widthAdjustment; // @synthesize widthAdjustment=_widthAdjustment;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) long long verticalInterfaceAlignment; // @synthesize verticalInterfaceAlignment=_verticalInterfaceAlignment;
@property(nonatomic) long long interfaceAlignment; // @synthesize interfaceAlignment=_interfaceAlignment;
@property(copy, nonatomic) NSDictionary *companionProperty; // @synthesize companionProperty=_companionProperty;
@property(retain, nonatomic) NSDictionary *itemDescriptionForIB; // @synthesize itemDescriptionForIB=_itemDescriptionForIB;
@property(nonatomic) _Bool isNotification; // @synthesize isNotification=_isNotification;
@property(nonatomic) _Bool clipsContentsVertically; // @synthesize clipsContentsVertically=_clipsContentsVertically;
@property(nonatomic) long long groupViewLayout; // @synthesize groupViewLayout=_groupViewLayout;
@property(nonatomic) __weak id <SPInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setStaticNotificationAlertLabelText:(id)arg1;
- (void)applyTableCellDefaultAppearance;
- (void)removePropertiesForGlanceContentView;
- (void)action:(id)arg1 value:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)hasIntrinsicHeight;
- (struct UIEdgeInsets)alignmentRectInsets;
- (_Bool)hasDefinedHeight;
- (_Bool)hasDefinedWidth;
- (id)visibleSubviews;
- (id)generateBackgroundPlatterImageWithColor:(id)arg1;
- (void)setInterfaceItemValue:(id)arg1 property:(id)arg2;
- (void)setInterfaceItemValue:(id)arg1 forKey:(id)arg2 property:(id)arg3;
- (_Bool)_setInterfaceItemValue:(id)arg1 forKey:(id)arg2 property:(id)arg3;
- (id)allProperties;
- (id)initWithItemDescription:(id)arg1 bundle:(id)arg2 stringsFileName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

