//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NNMKAccountsSyncServiceServerDelegate.h"
#import "NNMKFetchesSyncServiceServerDelegate.h"
#import "NNMKMessageContentSyncServiceServerDelegate.h"
#import "NNMKMessagesSyncServiceServerDelegate.h"
#import "PSYSyncCoordinatorDelegate.h"

@class BLTPingSubscriber, NNMKAccountsSyncServiceServer, NNMKDeviceSyncRegistry, NNMKFetchesSyncServiceServer, NNMKMessageContentSyncServiceServer, NNMKMessagesSyncServiceServer, NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSURL, PSYSyncCoordinator;

@interface NNMKSyncProvider : NSObject <NNMKMessagesSyncServiceServerDelegate, NNMKMessageContentSyncServiceServerDelegate, NNMKAccountsSyncServiceServerDelegate, NNMKFetchesSyncServiceServerDelegate, PSYSyncCoordinatorDelegate>
{
    _Bool _messagesVerificationTriggered;
    _Bool _messagesQueryAvailable;
    _Bool _isFirstMessagesRequestPending;
    id <NNMKSyncProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_providerQueue;
    BLTPingSubscriber *_notificationsPingSubscriber;
    PSYSyncCoordinator *_initialSyncCoordinator;
    NNMKDeviceSyncRegistry *_pairedDeviceRegistry;
    NNMKMessagesSyncServiceServer *_messagesSyncService;
    NNMKMessageContentSyncServiceServer *_contentSyncService;
    NNMKAccountsSyncServiceServer *_accountsSyncService;
    NNMKFetchesSyncServiceServer *_fetchesSyncService;
    NSString *_pendingMoreMessagesForConversationIdRequestConversationId;
    NSDate *_pendingMoreMessagesForConversationIdRequestBeforeDateReceived;
    NSMutableSet *_messageIdsToIgnoreStatusUpdates;
}

@property(retain, nonatomic) NSMutableSet *messageIdsToIgnoreStatusUpdates; // @synthesize messageIdsToIgnoreStatusUpdates=_messageIdsToIgnoreStatusUpdates;
@property(retain, nonatomic) NSDate *pendingMoreMessagesForConversationIdRequestBeforeDateReceived; // @synthesize pendingMoreMessagesForConversationIdRequestBeforeDateReceived=_pendingMoreMessagesForConversationIdRequestBeforeDateReceived;
@property(retain, nonatomic) NSString *pendingMoreMessagesForConversationIdRequestConversationId; // @synthesize pendingMoreMessagesForConversationIdRequestConversationId=_pendingMoreMessagesForConversationIdRequestConversationId;
@property(nonatomic) _Bool isFirstMessagesRequestPending; // @synthesize isFirstMessagesRequestPending=_isFirstMessagesRequestPending;
@property(nonatomic) _Bool messagesQueryAvailable; // @synthesize messagesQueryAvailable=_messagesQueryAvailable;
@property(retain, nonatomic) NNMKFetchesSyncServiceServer *fetchesSyncService; // @synthesize fetchesSyncService=_fetchesSyncService;
@property(retain, nonatomic) NNMKAccountsSyncServiceServer *accountsSyncService; // @synthesize accountsSyncService=_accountsSyncService;
@property(retain, nonatomic) NNMKMessageContentSyncServiceServer *contentSyncService; // @synthesize contentSyncService=_contentSyncService;
@property(retain, nonatomic) NNMKMessagesSyncServiceServer *messagesSyncService; // @synthesize messagesSyncService=_messagesSyncService;
@property(nonatomic) _Bool messagesVerificationTriggered; // @synthesize messagesVerificationTriggered=_messagesVerificationTriggered;
@property(retain, nonatomic) NNMKDeviceSyncRegistry *pairedDeviceRegistry; // @synthesize pairedDeviceRegistry=_pairedDeviceRegistry;
@property(retain, nonatomic) PSYSyncCoordinator *initialSyncCoordinator; // @synthesize initialSyncCoordinator=_initialSyncCoordinator;
@property(retain, nonatomic) BLTPingSubscriber *notificationsPingSubscriber; // @synthesize notificationsPingSubscriber=_notificationsPingSubscriber;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue; // @synthesize providerQueue=_providerQueue;
@property(nonatomic) __weak id <NNMKSyncProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_messageHasContentCompletelySynced:(id)arg1;
- (id)_syncedMailboxForGetters;
- (void)_requestDelegateForVerificationOfMessagesAndIds:(id)arg1 afterDate:(id)arg2;
- (void)_requestDelegateForResendingAccountWithId:(id)arg1;
- (void)_requestDelegateForResendingMessageWithId:(id)arg1;
- (void)_requestDelegateToSendMessageTo:(id)arg1 cc:(id)arg2 subject:(id)arg3 body:(id)arg4;
- (void)_requestDelegateForFetchResume;
- (void)_requestDelegateToStopDownloadingAllContentAndAttachments;
- (void)_requestDelegateToStopDownloadingContentAndAttachmentsForMessageWithId:(id)arg1;
- (void)_requestDelegateForContentForMessageWithId:(id)arg1 highPriority:(_Bool)arg2;
- (void)_requestDelegateForContentForMessageIds:(id)arg1 highPriority:(_Bool)arg2;
- (void)_requestDelegateForFirstMessages;
- (void)_requestDelegateForMoreMessagesBeforeDateReceived:(id)arg1 forConversationWithId:(id)arg2;
- (void)_requestDelegateForMoreMessages;
- (void)_requestDelegateForAccounts;
- (void)_notifyDelegateThatMessagesStatusWereUpdated:(id)arg1;
- (void)_executePendingContentRequests;
- (void)_sendFirstUnsyncedAndUnrequestedContents;
- (void)_executePendingResends;
- (void)_executePendingRequests;
- (void)_warnReceiverNeedsUnlock;
- (id)_messageProtobufForMessage:(id)arg1;
- (_Bool)_isMessageStatusOkForCurrentSyncedMailbox:(unsigned long long)arg1;
- (_Bool)_currentSyncedMailboxAddsDeletesMessagesByStatusUpdates;
- (_Bool)_isMessageOkForCurrentSyncedMailbox:(id)arg1;
- (id)_filterOutMessagesReceivedByDateReceived:(id)arg1;
- (id)_filterOutMessagesReceived:(id)arg1 byAlreadySynced:(_Bool)arg2 bySyncedMailboxType:(_Bool)arg3;
- (void)_runSyncVerification;
- (void)_triggerFullMessagesSync;
- (_Bool)_willPresentNotificationForMessage:(id)arg1;
- (void)_markConversationWithId:(id)arg1 forNotify:(_Bool)arg2;
- (void)_addMessages:(id)arg1 messagesAreNew:(_Bool)arg2;
- (void)_verifyPairingForcingSync:(_Bool)arg1;
- (void)_handleDidUnpair;
- (void)_handleDidPairWithNewDevice;
- (void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFullSync:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestContent:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesForConversation:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessages:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFetchResume:(id)arg2;
- (void)accountsSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)accountsSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2;
- (void)messageContentSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)messageContentSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didRequestCompactMessages:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didWarnMessagesFilteredOut:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didRequestSendMessage:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didDeleteMessages:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didUpdateMessagesStatus:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2;
@property(readonly, nonatomic) double maximumScreenshotsHeight;
@property(readonly, nonatomic) double pairedDeviceScreenScale;
@property(readonly, nonatomic) double pairedDeviceScreenWidth;
@property(readonly, nonatomic) _Bool organizeByThread;
@property(readonly, nonatomic) NSString *syncedMailboxCustomName;
@property(readonly, nonatomic) NSURL *syncedMailboxURL;
@property(readonly, nonatomic) NSString *syncedMailboxAccountId;
@property(readonly, nonatomic) unsigned long long syncedMailboxType;
@property(readonly, nonatomic) _Bool messagesSyncActive;
- (void)notifyOrganizeByThreadChanged;
- (void)notifySyncedMailboxChanged;
- (void)notifyMessagesQueryAvailable;
- (void)notifyMessagesQueryUnavailable;
- (void)addUpdateOrDeleteAccounts:(id)arg1;
- (void)addScreenshot:(id)arg1 forMessageId:(id)arg2;
- (void)addImageAttachment:(id)arg1 forMessageId:(id)arg2 contentId:(id)arg3;
- (void)reportMessageContentDownloadFailureForMessageId:(id)arg1;
- (void)addMessageContent:(id)arg1 preview:(id)arg2;
- (void)markConversationIdForNotNotify:(id)arg1;
- (void)markConversationIdForNotify:(id)arg1 messages:(id)arg2;
- (void)deleteMessagesWithIds:(id)arg1;
- (void)updateMessagesStatus:(id)arg1;
- (void)addMessages:(id)arg1;
- (void)replyWithVerificationResultsMessagesMissing:(id)arg1 messagesWithDifferentStatus:(id)arg2 extraMessageIds:(id)arg3;
- (void)replyWithAccountToResend:(id)arg1;
- (void)replyWithMessageToResend:(id)arg1;
- (void)replyWithAccounts:(id)arg1;
- (void)replyWithMessagesFailedDueToDataProtectedForDateReceivedBefore:(id)arg1 conversationId:(id)arg2;
- (void)replyWithMoreMessages:(id)arg1 forConversationWithId:(id)arg2;
- (void)replyWithMoreMessages:(id)arg1 forDateReceivedBefore:(id)arg2;
- (void)replyWithFirstMessages:(id)arg1 syncedMailboxType:(unsigned long long)arg2 syncedMailboxAccountId:(id)arg3 syncedMailboxURL:(id)arg4 syncedMailboxCustomName:(id)arg5 organizeByThread:(_Bool)arg6;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

