//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NNMKSQLiteConnection, NNMKSyncedMailbox, NSDate, NSString;

@interface NNMKDeviceSyncRegistry : NSObject
{
    _Bool _isMessagesSyncActive;
    _Bool _organizeByThread;
    _Bool _isMoreMessagesRequestPending;
    NSString *_path;
    unsigned long long _fullMessagesSyncVersion;
    NSDate *_dateReceivedCapForAdding;
    NNMKSyncedMailbox *_syncedMailbox;
    double _deviceScreenWidth;
    double _deviceScreenScale;
    NSString *_initialSyncIDSIdentifierNotYetAckd;
    NNMKSQLiteConnection *_database;
}

@property(retain, nonatomic) NNMKSQLiteConnection *database; // @synthesize database=_database;
@property(retain, nonatomic) NSString *initialSyncIDSIdentifierNotYetAckd; // @synthesize initialSyncIDSIdentifierNotYetAckd=_initialSyncIDSIdentifierNotYetAckd;
@property(nonatomic) _Bool isMoreMessagesRequestPending; // @synthesize isMoreMessagesRequestPending=_isMoreMessagesRequestPending;
@property(nonatomic) double deviceScreenScale; // @synthesize deviceScreenScale=_deviceScreenScale;
@property(nonatomic) double deviceScreenWidth; // @synthesize deviceScreenWidth=_deviceScreenWidth;
@property(nonatomic) _Bool organizeByThread; // @synthesize organizeByThread=_organizeByThread;
@property(retain, nonatomic) NNMKSyncedMailbox *syncedMailbox; // @synthesize syncedMailbox=_syncedMailbox;
@property(retain, nonatomic) NSDate *dateReceivedCapForAdding; // @synthesize dateReceivedCapForAdding=_dateReceivedCapForAdding;
@property(nonatomic) _Bool isMessagesSyncActive; // @synthesize isMessagesSyncActive=_isMessagesSyncActive;
@property(nonatomic) unsigned long long fullMessagesSyncVersion; // @synthesize fullMessagesSyncVersion=_fullMessagesSyncVersion;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)_insureTransactionFor:(CDUnknownBlockType)arg1;
- (id)_ungroupGroupedValue:(id)arg1;
- (id)_selectSyncedAccountsWhere:(id)arg1 blockForBinding:(CDUnknownBlockType)arg2;
- (id)_selectSyncedMessagesIdsWhere:(id)arg1 count:(unsigned long long)arg2 blockForBinding:(CDUnknownBlockType)arg3;
- (id)_selectSyncedMessagesWhere:(id)arg1 blockForBinding:(CDUnknownBlockType)arg2;
- (void)_deleteAllObjectsFromTable:(id)arg1;
- (void)_removeControlValueForKey:(id)arg1;
- (void)_setControlValueForKey:(id)arg1 withBlockForBinding:(CDUnknownBlockType)arg2;
- (void)_loadAllControlValues;
- (void)markIDSIdentifierAsAckd:(id)arg1;
- (void)addObjectId:(id)arg1 objectType:(id)arg2 forIDSIdentifierNotYetAckd:(id)arg3;
- (id)objectIdForIDSIdentifierNotYetAckd:(id)arg1 objectType:(id *)arg2;
- (_Bool)idsIdentifierHasBeenAckd:(id)arg1;
- (id)syncedAccountIdsResendRequested;
- (void)removeSyncedAccountForAccountWithId:(id)arg1;
- (void)addOrUpdateSyncedAccount:(id)arg1;
- (id)syncedAccountForAccountWithId:(id)arg1;
- (id)allSyncedAccountsKeyedByAccountId;
- (id)syncedMessagesStatusKeyedByMessageIdAfterDateReceived:(id)arg1;
- (void)removeSyncedMessagesBeforeDateReceived:(id)arg1 adjustDateReceivedCapForAdding:(_Bool)arg2;
- (unsigned long long)syncedMessagesCount;
- (id)oldestDateReceived;
- (id)firstSyncedMessageIdsContentNotSyncedOrRequestedByUser:(unsigned long long)arg1;
- (id)syncedMessageIdsContentRequestedByUser;
- (id)syncedMessageIdsResendRequested;
- (id)syncedMessagesForConversationWithId:(id)arg1;
- (void)removeSyncedMessageForMessageWithId:(id)arg1;
- (void)addOrUpdateSyncedMessage:(id)arg1;
- (id)syncedMessageForMessageWithId:(id)arg1;
- (_Bool)containsSyncedMessageForMessageWithId:(id)arg1;
- (void)cleanUpForNewFullMessagesSync;
- (void)endUpdates;
- (void)beginUpdates;
- (void)setMoreMessagesRequestPending:(_Bool)arg1;
- (id)initWithPath:(id)arg1;

@end

