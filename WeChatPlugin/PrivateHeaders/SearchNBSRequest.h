//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, PositionInfo, SKBuiltinBuffer_t;

@interface SearchNBSRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasKeyWord:1;
    unsigned int hasTags:1;
    unsigned int hasBizMarkets:1;
    unsigned int hasUserPos:1;
    unsigned int hasPageBuff:1;
    BaseRequest *baseRequest;
    NSString *keyWord;
    NSString *tags;
    NSString *bizMarkets;
    PositionInfo *userPos;
    SKBuiltinBuffer_t *pageBuff;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetPageBuff:) SKBuiltinBuffer_t *pageBuff; // @synthesize pageBuff;
@property(readonly, nonatomic) BOOL hasPageBuff; // @synthesize hasPageBuff;
@property(retain, nonatomic, setter=SetUserPos:) PositionInfo *userPos; // @synthesize userPos;
@property(readonly, nonatomic) BOOL hasUserPos; // @synthesize hasUserPos;
@property(retain, nonatomic, setter=SetBizMarkets:) NSString *bizMarkets; // @synthesize bizMarkets;
@property(readonly, nonatomic) BOOL hasBizMarkets; // @synthesize hasBizMarkets;
@property(retain, nonatomic, setter=SetTags:) NSString *tags; // @synthesize tags;
@property(readonly, nonatomic) BOOL hasTags; // @synthesize hasTags;
@property(retain, nonatomic, setter=SetKeyWord:) NSString *keyWord; // @synthesize keyWord;
@property(readonly, nonatomic) BOOL hasKeyWord; // @synthesize hasKeyWord;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

