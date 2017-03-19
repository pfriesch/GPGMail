//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSCopying.h"

@class MFCriterion, NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface Conversation : NSObject <NSCopying>
{
    NSMutableArray *_primitiveOrderedConversationMembers;	// 8 = 0x8
    NSArray *_orderedConversationMembers;	// 16 = 0x10
    NSMutableDictionary *_conversationMemberByMessage;	// 24 = 0x18
    NSMutableDictionary *_conversationMemberByMessageID;	// 32 = 0x20
    NSMutableArray *_asyncLoadConversationMembersCompletionHandlers;	// 40 = 0x28
    BOOL _conversationMembersLoaded;	// 48 = 0x30
    BOOL _isRegisteredForConversationUpdates;	// 49 = 0x31
    long long _conversationID;	// 56 = 0x38
    MFCriterion *_mailboxCriterion;	// 64 = 0x40
    NSArray *_initialMessages;	// 72 = 0x48
    NSSet *_initialPrimaryMessages;	// 80 = 0x50
    long long _loadBehavior;	// 88 = 0x58
    unsigned long long _initialReadingMemberIndex;	// 96 = 0x60
    NSString *_subject;	// 104 = 0x68
}

+ (BOOL)automaticallyNotifiesObserversOfOrderedConversationMembers;	// IMP=0x000000010003f62c
+ (id)keyPathsForValuesAffectingMessages;	// IMP=0x000000010012835a
+ (id)log;	// IMP=0x000000010012814b
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) BOOL isRegisteredForConversationUpdates; // @synthesize isRegisteredForConversationUpdates=_isRegisteredForConversationUpdates;
@property(nonatomic) BOOL conversationMembersLoaded; // @synthesize conversationMembersLoaded=_conversationMembersLoaded;
@property(nonatomic) unsigned long long initialReadingMemberIndex; // @synthesize initialReadingMemberIndex=_initialReadingMemberIndex;
@property(nonatomic) long long loadBehavior; // @synthesize loadBehavior=_loadBehavior;
@property(copy, nonatomic) NSSet *initialPrimaryMessages; // @synthesize initialPrimaryMessages=_initialPrimaryMessages;
@property(copy, nonatomic) NSArray *initialMessages; // @synthesize initialMessages=_initialMessages;
@property(readonly, nonatomic) MFCriterion *mailboxCriterion; // @synthesize mailboxCriterion=_mailboxCriterion;
@property(nonatomic) long long conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;	// IMP=0x00000001001292b6
- (void)unhideMessages:(id)arg1;	// IMP=0x0000000100128fa8
- (void)hideMessages:(id)arg1;	// IMP=0x0000000100128d13
- (void)markConversationMembersAsRead:(id)arg1;	// IMP=0x000000010003ec05
- (void)_conversationMessagesFlagsChanged:(id)arg1;	// IMP=0x000000010008722d
- (void)_conversationMessagesCompacted:(id)arg1;	// IMP=0x00000001000877ff
- (void)_conversationMessagesUpdated:(id)arg1;	// IMP=0x0000000100083c10
- (void)_conversationsUpdated:(id)arg1;	// IMP=0x0000000100084dc1
- (void)_conversationMessagesLoaded:(id)arg1;	// IMP=0x000000010004e08f
- (void)_updateConversationMembersWithAddedMessages:(id)arg1 primaryMessages:(id)arg2;	// IMP=0x000000010003ce1e
- (void)_removeMessage:(id)arg1 fromConversationMember:(id)arg2;	// IMP=0x0000000100087c4a
- (void)_addMessage:(id)arg1 isPrimary:(BOOL)arg2 toConversationMember:(id)arg3;	// IMP=0x0000000100058ad3
- (void)_removeConversationMember:(id)arg1;	// IMP=0x000000010012895a
- (void)_addNewConversationMember:(id)arg1;	// IMP=0x000000010003e1f2
- (void)_updateInitialReadingMemberIndex;	// IMP=0x000000010012870f
- (void)_updateOrderedConversationMembers;	// IMP=0x000000010003e7f2
- (void)_quickFetchTimeout;	// IMP=0x0000000100128573
- (void)loadConversationMembersForDisplay;	// IMP=0x0000000100128439
- (void)asyncLoadConversationMembers:(CDUnknownBlockType)arg1;	// IMP=0x000000010003c78f
- (id)_subjectConversationMember;	// IMP=0x00000001001283e9
- (void)_updateSubject;	// IMP=0x000000010012837a
@property(copy, nonatomic) NSArray *orderedConversationMembers;
@property(readonly, copy, nonatomic) NSSet *messages;
- (CDUnknownBlockType)_orderingComparator;	// IMP=0x000000010003e577
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100086be0
- (id)description;	// IMP=0x0000000100128293
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100094f92
- (unsigned long long)hash;	// IMP=0x0000000100094f80
- (BOOL)isEqual:(id)arg1;	// IMP=0x000000010003f416
- (void)dealloc;	// IMP=0x000000010005833a
- (id)initWithConversationID:(long long)arg1 mailboxCriterion:(id)arg2 initialMessages:(id)arg3 initialPrimaryMessages:(id)arg4 loadBehavior:(long long)arg5;	// IMP=0x000000010003a08b
- (id)init;	// IMP=0x00000001001281c4

@end
