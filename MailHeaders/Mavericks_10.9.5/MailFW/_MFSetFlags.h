/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray;

@interface _MFSetFlags : NSObject
{
    NSMutableArray *_messages;
    NSDictionary *_flagsToSet;
}

@property(readonly) NSArray *messages; // @synthesize messages=_messages;
@property(readonly) NSDictionary *flagsToSet; // @synthesize flagsToSet=_flagsToSet;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)addMessages:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFlagsDictionary:(id)arg1 messages:(id)arg2;

@end

