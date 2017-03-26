//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString, SKBuiltinBuffer_t;

@interface GetLoginQRCodeResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasQrcode:1;
    unsigned int hasUuid:1;
    unsigned int hasCheckTime:1;
    unsigned int hasNotifyKey:1;
    unsigned int hasExpiredTime:1;
    unsigned int hasBlueToothBroadCastUuid:1;
    unsigned int hasBlueToothBroadCastContent:1;
    unsigned int checkTime;
    unsigned int expiredTime;
    BaseResponse *baseResponse;
    SKBuiltinBuffer_t *qrcode;
    NSString *uuid;
    SKBuiltinBuffer_t *notifyKey;
    NSString *blueToothBroadCastUuid;
    SKBuiltinBuffer_t *blueToothBroadCastContent;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetBlueToothBroadCastContent:) SKBuiltinBuffer_t *blueToothBroadCastContent; // @synthesize blueToothBroadCastContent;
@property(readonly, nonatomic) BOOL hasBlueToothBroadCastContent; // @synthesize hasBlueToothBroadCastContent;
@property(retain, nonatomic, setter=SetBlueToothBroadCastUuid:) NSString *blueToothBroadCastUuid; // @synthesize blueToothBroadCastUuid;
@property(readonly, nonatomic) BOOL hasBlueToothBroadCastUuid; // @synthesize hasBlueToothBroadCastUuid;
@property(nonatomic, setter=SetExpiredTime:) unsigned int expiredTime; // @synthesize expiredTime;
@property(readonly, nonatomic) BOOL hasExpiredTime; // @synthesize hasExpiredTime;
@property(retain, nonatomic, setter=SetNotifyKey:) SKBuiltinBuffer_t *notifyKey; // @synthesize notifyKey;
@property(readonly, nonatomic) BOOL hasNotifyKey; // @synthesize hasNotifyKey;
@property(nonatomic, setter=SetCheckTime:) unsigned int checkTime; // @synthesize checkTime;
@property(readonly, nonatomic) BOOL hasCheckTime; // @synthesize hasCheckTime;
@property(retain, nonatomic, setter=SetUuid:) NSString *uuid; // @synthesize uuid;
@property(readonly, nonatomic) BOOL hasUuid; // @synthesize hasUuid;
@property(retain, nonatomic, setter=SetQrcode:) SKBuiltinBuffer_t *qrcode; // @synthesize qrcode;
@property(readonly, nonatomic) BOOL hasQrcode; // @synthesize hasQrcode;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

