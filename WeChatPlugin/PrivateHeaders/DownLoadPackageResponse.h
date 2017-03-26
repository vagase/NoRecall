//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t;

@interface DownLoadPackageResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasPackageBuf:1;
    unsigned int hasType:1;
    unsigned int hasTotalSize:1;
    unsigned int type;
    unsigned int totalSize;
    BaseResponse *baseResponse;
    SKBuiltinBuffer_t *packageBuf;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetTotalSize:) unsigned int totalSize; // @synthesize totalSize;
@property(readonly, nonatomic) BOOL hasTotalSize; // @synthesize hasTotalSize;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetPackageBuf:) SKBuiltinBuffer_t *packageBuf; // @synthesize packageBuf;
@property(readonly, nonatomic) BOOL hasPackageBuf; // @synthesize hasPackageBuf;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

