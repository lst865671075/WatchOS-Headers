//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPComplicationData, SPDataAccess;

@protocol SPDataAccessDelegateProtocol <NSObject>
- (void)dataAccess:(SPDataAccess *)arg1 firstUnlock:(_Bool)arg2;
- (void)dataAccess:(SPDataAccess *)arg1 complicationReply:(SPComplicationData *)arg2;
@end

