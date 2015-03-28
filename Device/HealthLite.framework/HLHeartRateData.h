//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary;

@interface HLHeartRateData : NSObject
{
    BOOL _isFake;
    NSDate *_timestamp;
    unsigned int _confidenceLevel;
    unsigned int _mode;
    int _eventSource;
    double _heartRate;
    double _confidence;
}

@property BOOL isFake; // @synthesize isFake=_isFake;
@property int eventSource; // @synthesize eventSource=_eventSource;
- (id)initWithHeartRate:(double)arg1 confidence:(double)arg2 confidenceLevel:(unsigned int)arg3 hrMode:(unsigned int)arg4 timestamp:(id)arg5;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned int confidenceLevel; // @synthesize confidenceLevel=_confidenceLevel;
- (id)initWithIOHIDEvent:(struct __IOHIDEvent *)arg1;
- (void).cxx_destruct;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)description;
@property(readonly, nonatomic) double heartRate; // @synthesize heartRate=_heartRate;

@end
