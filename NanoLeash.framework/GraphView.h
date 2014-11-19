//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GraphTextView, GraphViewSegment, NSMutableArray;

@interface GraphView : UIView
{
    NSMutableArray *_segments;
    GraphViewSegment *_current;
    GraphTextView *_text;
}

@property(retain, nonatomic) GraphTextView *text; // @synthesize text=_text;
@property(nonatomic) GraphViewSegment *current; // @synthesize current=_current;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)drawRect:(struct CGRect)arg1;
- (void)recycleSegment;
- (id)addSegment;
- (void)addAvgRSSI:(double)arg1 actualRSSI:(double)arg2;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

