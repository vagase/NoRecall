//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface SnsObjectOpResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasOpCount:1;
    int opRetListMemoizedSerializedSize;
    unsigned int opCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableOpRetListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableOpRetListList; // @synthesize mutableOpRetListList;
@property(nonatomic, setter=SetOpCount:) unsigned int opCount; // @synthesize opCount;
@property(readonly, nonatomic) BOOL hasOpCount; // @synthesize hasOpCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addOpRetListFromArray:(id)arg1;
- (void)addOpRetList:(int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *opRetList; // @dynamic opRetList;
- (id)opRetListList;
- (id)init;

@end

