//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYSyncEndResponse : PBCodable <NSCopying>
{
    SYErrorInfo *_error;
    int _errorResolution;
    SYMessageHeader *_header;
    NSString *_syncID;
    struct {
        unsigned int errorResolution:1;
    } _has;
}

@property(retain, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasErrorResolution;
@property(nonatomic) int errorResolution; // @synthesize errorResolution=_errorResolution;
@property(readonly, nonatomic) _Bool hasError;

@end

