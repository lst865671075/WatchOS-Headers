//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Emoji/EJEmojiCollection.h>

#import "EJMutableEmojiCollection.h"

@class NSMutableArray;

@interface EJMutableEmojiCollection : EJEmojiCollection <EJMutableEmojiCollection>
{
    NSMutableArray *_emojiArray;
}

+ (id)emojiCollectionWithEmojisFromArray:(id)arg1;
+ (id)emojiCollectionWithEmoji:(id)arg1;
- (void)removeAllEmojis;
- (void)removeEmoji:(id)arg1;
- (void)addEmojisFromArray:(id)arg1;
- (void)setEmoji:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addEmoji:(id)arg1;
- (id)emojiAtIndex:(unsigned int)arg1;
- (unsigned int)emojiCount;
- (void).cxx_destruct;
- (id)init;

@end

