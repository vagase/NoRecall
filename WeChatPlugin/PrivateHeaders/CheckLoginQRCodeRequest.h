//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface CheckLoginQRCodeRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasRandomEncryKey:1;
    unsigned int hasUuid:1;
    unsigned int hasTimeStamp:1;
    unsigned int hasOpcode:1;
    unsigned int timeStamp;
    unsigned int opcode;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *randomEncryKey;
    NSString *uuid;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetOpcode:) unsigned int opcode; // @synthesize opcode;
@property(readonly, nonatomic) BOOL hasOpcode; // @synthesize hasOpcode;
@property(nonatomic, setter=SetTimeStamp:) unsigned int timeStamp; // @synthesize timeStamp;
@property(readonly, nonatomic) BOOL hasTimeStamp; // @synthesize hasTimeStamp;
@property(retain, nonatomic, setter=SetUuid:) NSString *uuid; // @synthesize uuid;
@property(readonly, nonatomic) BOOL hasUuid; // @synthesize hasUuid;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

