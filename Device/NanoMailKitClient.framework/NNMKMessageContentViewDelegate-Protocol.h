//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NNMKMessageContentView, NSMutableAttributedString;

@protocol NNMKMessageContentViewDelegate <NSObject>

@optional
- (void)messageContentViewDidStopLoading:(NNMKMessageContentView *)arg1;
- (void)messageContentViewWillStartLoading:(NNMKMessageContentView *)arg1;
- (void)messageContentView:(NNMKMessageContentView *)arg1 willEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)messageContentViewWillBeginDragging:(NNMKMessageContentView *)arg1;
- (void)messageContentView:(NNMKMessageContentView *)arg1 didEndScrollingAtYPosition:(float)arg2;
- (void)messageContentView:(NNMKMessageContentView *)arg1 didScrollToYPosition:(float)arg2;
- (void)messageContentView:(NNMKMessageContentView *)arg1 adjustedAttributedString:(NSMutableAttributedString *)arg2;
- (void)messageContentViewWillRenderContent:(NNMKMessageContentView *)arg1;
@end
