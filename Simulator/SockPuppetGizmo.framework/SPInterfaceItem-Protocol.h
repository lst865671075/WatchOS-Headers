//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPInterfaceObject.h"

@protocol SPInterfaceItem <SPInterfaceObject>
- (_Bool)hasIntrinsicHeight;
- (void)setFixedSize:(struct CGSize)arg1;
- (struct CGSize)fixedSize;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)setHeight:(double)arg1;
- (double)height;
- (long long)verticalInterfaceAlignment;
- (void)setVerticalInterfaceAlignment:(long long)arg1;
- (long long)interfaceAlignment;
- (void)setInterfaceAlignment:(long long)arg1;

@optional
- (void)prepareInterfaceItemForIB;
- (void)contentSizeCategoryDidChange;
@end
