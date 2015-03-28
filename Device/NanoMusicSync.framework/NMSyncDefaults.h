//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber;

@interface NMSyncDefaults : NSObject
{
    int _notifyToken;
    BOOL _needsSync;
    BOOL _assetSyncEnabled;
    NSNumber *_assetSyncLimit;
    NSDate *_modificationDate;
    unsigned int _assetSyncLimitType;
    NSNumber *_assetSyncPlaylistPersistentID;
    NSNumber *_lastFullySentAssetSyncPlaylistPersistentID;
    NSNumber *_lastFullySentAssetSyncPlaylistVersion;
    NSNumber *_numberOfSyncedAssetSyncPlaylistSongs;
}

+ (id)sharedDefaults;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) NSNumber *numberOfSyncedAssetSyncPlaylistSongs; // @synthesize numberOfSyncedAssetSyncPlaylistSongs=_numberOfSyncedAssetSyncPlaylistSongs;
@property(copy, nonatomic) NSNumber *lastFullySentAssetSyncPlaylistVersion; // @synthesize lastFullySentAssetSyncPlaylistVersion=_lastFullySentAssetSyncPlaylistVersion;
@property(copy, nonatomic) NSNumber *lastFullySentAssetSyncPlaylistPersistentID; // @synthesize lastFullySentAssetSyncPlaylistPersistentID=_lastFullySentAssetSyncPlaylistPersistentID;
@property(copy, nonatomic) NSNumber *assetSyncPlaylistPersistentID; // @synthesize assetSyncPlaylistPersistentID=_assetSyncPlaylistPersistentID;
@property(nonatomic) unsigned int assetSyncLimitType; // @synthesize assetSyncLimitType=_assetSyncLimitType;
@property(nonatomic, getter=isAssetSyncEnabled) BOOL assetSyncEnabled; // @synthesize assetSyncEnabled=_assetSyncEnabled;
@property(copy, nonatomic) NSNumber *assetSyncLimit; // @synthesize assetSyncLimit=_assetSyncLimit;
- (void)_setNeedsSynchronize;
- (void)_writeChanges;
- (void)_readDefaults;
- (void)_handleRemoteChangeIgnoringSenderPID:(BOOL)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;

@end
