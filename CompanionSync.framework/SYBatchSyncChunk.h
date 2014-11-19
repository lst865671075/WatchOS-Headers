//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, SYMessageHeader;

@interface SYBatchSyncChunk : PBCodable <NSCopying>
{
    unsigned int _chunkIndex;
    SYMessageHeader *_header;
    NSMutableArray *_objects;
    NSString *_syncID;
}

@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(nonatomic) unsigned int chunkIndex; // @synthesize chunkIndex=_chunkIndex;
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
- (id)objectsAtIndex:(unsigned long long)arg1;
- (unsigned long long)objectsCount;
- (void)addObjects:(id)arg1;
- (void)clearObjects;

@end

