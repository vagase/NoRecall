//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, SKBuiltinBuffer_t;

@interface ShakeMusicRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasData:1;
    SKBuiltinBuffer_t *data_;
    unsigned int hasDataId:1;
    unsigned int hasEndFlag:1;
    unsigned int hasVoiceLen:1;
    unsigned int hasNetType:1;
    unsigned int hasSdkVersion:1;
    unsigned int dataId;
    unsigned int endFlag;
    float voiceLen;
    unsigned int netType;
    unsigned int sdkVersion;
    BaseRequest *baseRequest;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetSdkVersion:) unsigned int sdkVersion; // @synthesize sdkVersion;
@property(readonly, nonatomic) BOOL hasSdkVersion; // @synthesize hasSdkVersion;
@property(nonatomic, setter=SetNetType:) unsigned int netType; // @synthesize netType;
@property(readonly, nonatomic) BOOL hasNetType; // @synthesize hasNetType;
@property(nonatomic, setter=SetVoiceLen:) float voiceLen; // @synthesize voiceLen;
@property(readonly, nonatomic) BOOL hasVoiceLen; // @synthesize hasVoiceLen;
@property(nonatomic, setter=SetEndFlag:) unsigned int endFlag; // @synthesize endFlag;
@property(readonly, nonatomic) BOOL hasEndFlag; // @synthesize hasEndFlag;
@property(nonatomic, setter=SetDataId:) unsigned int dataId; // @synthesize dataId;
@property(readonly, nonatomic) BOOL hasDataId; // @synthesize hasDataId;
@property(retain, nonatomic, setter=SetData:) SKBuiltinBuffer_t *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

