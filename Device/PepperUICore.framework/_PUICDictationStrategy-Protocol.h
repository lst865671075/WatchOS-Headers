//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFDictationConnection, AFSiriContext, NSString;

@protocol _PUICDictationStrategy <NSObject>
@property(readonly, nonatomic) float audioAveragePower;
@property(readonly, nonatomic) BOOL didCancel;
@property(readonly, nonatomic) BOOL isListening;
@property(readonly, nonatomic) id <_PUICDictationStrategyDelegate> delegate;
- (void)cancelListening;
- (void)finishListening:(void (^)(NSAttributedString *))arg1;
- (void)startListeningForViewController:(id <_PUICDictationStrategyDelegate>)arg1;

@optional
@property(retain, nonatomic) AFSiriContext *context;
@property(retain, nonatomic) NSString *languageCode;
- (AFDictationConnection *)yieldDictationConnection;
@end
