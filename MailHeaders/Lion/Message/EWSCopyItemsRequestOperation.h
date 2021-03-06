/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface EWSCopyItemsRequestOperation : EWSRequestOperation <NSCoding>
{
    NSString *_sourceEWSFolderIdString;
    NSString *_destinationEWSFolderIdString;
    NSArray *_EWSItemIds;
    NSArray *_offlineCreatedEWSItemIdStrings;
}

+ (Class)classForResponse;
- (id)initWithEWSItemIds:(id)arg1 sourceIdString:(id)arg2 destinationIdString:(id)arg3 gateway:(id)arg4 errorHandler:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (void)_ewsCopyItemsRequestOperationCommonInitWithEWSItemIds:(id)arg1 sourceIdString:(id)arg2 destinationIdString:(id)arg3 gateway:(id)arg4 errorHandler:(id)arg5;
- (id)activityString;
- (id)prepareRequest;
- (void)setupOfflineResponse;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) NSArray *offlineCreatedEWSItemIdStrings; // @synthesize offlineCreatedEWSItemIdStrings=_offlineCreatedEWSItemIdStrings;
@property(retain, nonatomic) NSArray *EWSItemIds; // @synthesize EWSItemIds=_EWSItemIds;
@property(retain, nonatomic) NSString *destinationEWSFolderIdString; // @synthesize destinationEWSFolderIdString=_destinationEWSFolderIdString;
@property(retain, nonatomic) NSString *sourceEWSFolderIdString; // @synthesize sourceEWSFolderIdString=_sourceEWSFolderIdString;

@end

