//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NTKAlarm;

@protocol NTKAlarmClient <NSObject>
- (void)updateModelWithNextAlarm:(NTKAlarm *)arg1;
- (void)updateModelWithAlarm:(NTKAlarm *)arg1;
- (void)updateModelWithAlarms:(NSArray *)arg1;
@end

