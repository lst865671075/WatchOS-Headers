//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSSet, NSString, NSTimer;

@interface SYPersistentStore : NSObject
{
    NSString *_path;
    struct __CFString *_loggingFacility;
    double _timeToLiveCache;
    _Bool _changeTrackingEnabled;
    NSObject<OS_dispatch_queue> *_syncQ;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_getInFullSync;
    struct sqlite3_stmt *_setInFullSync;
    struct sqlite3_stmt *_getChangeCount;
    struct sqlite3_stmt *_getNextExpireTime;
    struct sqlite3_stmt *_purgeExpiredChanges;
    struct sqlite3_stmt *_insertChange;
    struct sqlite3_stmt *_getFullsyncSent;
    struct sqlite3_stmt *_setFullsyncSent;
    struct sqlite3_stmt *_logSyncComplete;
    struct sqlite3_stmt *_getChangeIDsSinceVersion;
    struct sqlite3_stmt *_getLocalVersion;
    struct sqlite3_stmt *_getOldestVersion;
    struct sqlite3_stmt *_setVectorClock;
    struct sqlite3_stmt *_setPeerSeqNo;
    struct sqlite3_stmt *_getPeerSeqNo;
    _Bool _cachedVersionStale;
    NSString *_peerID;
    NSSet *_cachedChangedSyncIDs;
    unsigned long long _cachedChangedSyncIDsVersion;
    NSTimer *_expirationTimer;
}

@property(retain, nonatomic) NSTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(nonatomic) _Bool cachedVersionStale; // @synthesize cachedVersionStale=_cachedVersionStale;
@property(nonatomic) unsigned long long cachedChangedSyncIDsVersion; // @synthesize cachedChangedSyncIDsVersion=_cachedChangedSyncIDsVersion;
@property(retain, nonatomic) NSSet *cachedChangedSyncIDs; // @synthesize cachedChangedSyncIDs=_cachedChangedSyncIDs;
@property(readonly, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (void).cxx_destruct;
- (void)changeTrackingToggled:(_Bool)arg1;
- (_Bool)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
- (unsigned long long)_oldestVersion;
- (_Bool)logSyncCompletionToRemoteVersion:(unsigned long long)arg1;
- (_Bool)logChanges:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long lastSeenRemoteVersion;
@property(readonly, nonatomic) unsigned long long currentLocalVersion;
@property(nonatomic) _Bool completedSync;
@property(nonatomic) _Bool inFullSync;
@property(retain, nonatomic) NSString *vectorClockJSON;
@property(readonly, nonatomic) unsigned long long changeCount;
- (void)expirationTimerFired:(id)arg1;
- (void)setExpirationTimer;
- (void)expireChanges;
@property(nonatomic) double timeToLive;
@property(readonly, nonatomic) NSString *path;
- (unsigned long long)lastSequenceNumberForPeerID:(id)arg1;
- (void)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2;
- (unsigned long long)nextSequenceNumber;
- (void)_cacheTTL;
- (void)_convertTimestamps;
- (_Bool)_openDBAtPath:(id)arg1;
- (int)_getSchemaVersion;
- (_Bool)_tableEmpty:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 loggingFacility:(struct __CFString *)arg2 changeTrackingEnabled:(_Bool)arg3;

@end

