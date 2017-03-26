//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface CDNUploadMsgImgPrepareResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasClientImgId:1;
    unsigned int hasFromUserName:1;
    unsigned int hasToUserName:1;
    unsigned int hasCreateTime:1;
    unsigned int hasNewMsgId:1;
    unsigned int hasAeskey:1;
    unsigned int hasFileId:1;
    unsigned int createTime;
    BaseResponse *baseResponse;
    NSString *clientImgId;
    NSString *fromUserName;
    NSString *toUserName;
    unsigned long long newMsgId;
    NSString *aeskey;
    NSString *fileId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetFileId:) NSString *fileId; // @synthesize fileId;
@property(readonly, nonatomic) BOOL hasFileId; // @synthesize hasFileId;
@property(retain, nonatomic, setter=SetAeskey:) NSString *aeskey; // @synthesize aeskey;
@property(readonly, nonatomic) BOOL hasAeskey; // @synthesize hasAeskey;
@property(nonatomic, setter=SetNewMsgId:) unsigned long long newMsgId; // @synthesize newMsgId;
@property(readonly, nonatomic) BOOL hasNewMsgId; // @synthesize hasNewMsgId;
@property(nonatomic, setter=SetCreateTime:) unsigned int createTime; // @synthesize createTime;
@property(readonly, nonatomic) BOOL hasCreateTime; // @synthesize hasCreateTime;
@property(retain, nonatomic, setter=SetToUserName:) NSString *toUserName; // @synthesize toUserName;
@property(readonly, nonatomic) BOOL hasToUserName; // @synthesize hasToUserName;
@property(retain, nonatomic, setter=SetFromUserName:) NSString *fromUserName; // @synthesize fromUserName;
@property(readonly, nonatomic) BOOL hasFromUserName; // @synthesize hasFromUserName;
@property(retain, nonatomic, setter=SetClientImgId:) NSString *clientImgId; // @synthesize clientImgId;
@property(readonly, nonatomic) BOOL hasClientImgId; // @synthesize hasClientImgId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

