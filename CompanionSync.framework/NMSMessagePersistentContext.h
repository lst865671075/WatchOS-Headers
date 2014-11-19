//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSString;

@interface NMSMessagePersistentContext : NSObject <NSSecureCoding>
{
    _Bool _fromRequest;
    unsigned short _messageID;
    NSString *_idsIdentifier;
    NSDictionary *_userInfo;
    NSDictionary *_customIDSFlags;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isFromRequest) _Bool fromRequest; // @synthesize fromRequest=_fromRequest;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSDictionary *customIDSFlags; // @synthesize customIDSFlags=_customIDSFlags;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

