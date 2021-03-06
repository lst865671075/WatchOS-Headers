//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class IDSService, NSHashTable, NSObject<OS_dispatch_queue>, NSString;

@interface NMCConnectivityManager : NSObject <IDSServiceDelegate>
{
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_idsDispatchQueue;
    NSHashTable *_observers;
    BOOL _hasUpdatedStateOnce;
    BOOL _connected;
}

+ (id)sharedManager;
- (id)_defaultPairedDevice;
- (void)_updateConnectivityState;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)addObserver:(id)arg1;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (id)init;
@property(readonly, nonatomic, getter=isConnected) BOOL connected;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

