//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPGizmoApplicationManagerProtocol.h"

@class NSMutableArray, NSString, NSXPCConnection;

@interface SPGizmoApplicationManagerConnection : NSObject <SPGizmoApplicationManagerProtocol>
{
    _Bool _connectionIsValid;
    NSXPCConnection *_serverConnection;
    NSMutableArray *_observers;
}

+ (id)sharedConnection;
@property(retain) NSMutableArray *observers; // @synthesize observers=_observers;
@property _Bool connectionIsValid; // @synthesize connectionIsValid=_connectionIsValid;
@property(retain) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
- (void).cxx_destruct;
- (void)receiveData:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)fetchInstalledCustomLongLooksWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledGlancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)connect;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

