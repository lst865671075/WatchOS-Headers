//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData, NSString;

@interface NNMKMessageContent : NSObject <NSSecureCoding>
{
    _Bool _mainAlternativeValid;
    _Bool _partiallyLoaded;
    NSString *_messageId;
    NSData *_textData;
    NSArray *_attachments;
}

+ (id)classesForUnarchivingTextData;
+ (_Bool)supportsSecureCoding;
+ (unsigned long long)numberOfFixedCharactersInTextData;
@property(nonatomic) _Bool partiallyLoaded; // @synthesize partiallyLoaded=_partiallyLoaded;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSData *textData; // @synthesize textData=_textData;
@property(nonatomic) _Bool mainAlternativeValid; // @synthesize mainAlternativeValid=_mainAlternativeValid;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

