//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "SPInterfaceItem.h"

@class MKMapSnapshot, NSBundle, NSDictionary, NSString, NSTimer, PUICActivityIndicatorView, UIView;

@interface SPInterfaceMapView : UIImageView <SPInterfaceItem>
{
    _Bool _enabled;
    NSDictionary *_itemDescriptionForIB;
    NSBundle *_bundle;
    NSDictionary *_companionProperty;
    long long _interfaceAlignment;
    long long _verticalInterfaceAlignment;
    double _width;
    double _widthAdjustment;
    double _height;
    double _heightAdjustment;
    MKMapSnapshot *_snapshot;
    PUICActivityIndicatorView *_activityIndicatorView;
    UIView *_activityIndicatorContainerView;
    NSTimer *_activityTimer;
    struct CGSize _fixedSize;
    CDStruct_feeb6407 _region;
}

@property(retain, nonatomic) NSTimer *activityTimer; // @synthesize activityTimer=_activityTimer;
@property(retain, nonatomic) UIView *activityIndicatorContainerView; // @synthesize activityIndicatorContainerView=_activityIndicatorContainerView;
@property(retain, nonatomic) PUICActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MKMapSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(nonatomic) CDStruct_feeb6407 region; // @synthesize region=_region;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) struct CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
@property(nonatomic) double heightAdjustment; // @synthesize heightAdjustment=_heightAdjustment;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double widthAdjustment; // @synthesize widthAdjustment=_widthAdjustment;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) long long verticalInterfaceAlignment; // @synthesize verticalInterfaceAlignment=_verticalInterfaceAlignment;
@property(nonatomic) long long interfaceAlignment; // @synthesize interfaceAlignment=_interfaceAlignment;
@property(copy, nonatomic) NSDictionary *companionProperty; // @synthesize companionProperty=_companionProperty;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSDictionary *itemDescriptionForIB; // @synthesize itemDescriptionForIB=_itemDescriptionForIB;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)hideActivityIndicatorView;
- (void)showActivityIndicatorView;
- (void)showActivityIndicatorViewWithDelay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setInterfaceItemValue:(id)arg1 property:(id)arg2;
- (void)layoutSubviews;
- (void)layoutAnnotations;
- (_Bool)regionIsValid;
- (id)initWithItemDescription:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

