//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface VerifyUserResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasUserName:1;
    BaseResponse *baseResponse;
    NSString *userName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

