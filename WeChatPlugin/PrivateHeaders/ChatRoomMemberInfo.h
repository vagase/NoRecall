//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ChatRoomMemberInfo : PBGeneratedMessage
{
    unsigned int hasUserName:1;
    unsigned int hasNickName:1;
    unsigned int hasDisplayName:1;
    unsigned int hasBigHeadImgUrl:1;
    unsigned int hasSmallHeadImgUrl:1;
    unsigned int hasChatroomMemberFlag:1;
    unsigned int chatroomMemberFlag;
    NSString *userName;
    NSString *nickName;
    NSString *displayName;
    NSString *bigHeadImgUrl;
    NSString *smallHeadImgUrl;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetChatroomMemberFlag:) unsigned int chatroomMemberFlag; // @synthesize chatroomMemberFlag;
@property(readonly, nonatomic) BOOL hasChatroomMemberFlag; // @synthesize hasChatroomMemberFlag;
@property(retain, nonatomic, setter=SetSmallHeadImgUrl:) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl;
@property(readonly, nonatomic) BOOL hasSmallHeadImgUrl; // @synthesize hasSmallHeadImgUrl;
@property(retain, nonatomic, setter=SetBigHeadImgUrl:) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl;
@property(readonly, nonatomic) BOOL hasBigHeadImgUrl; // @synthesize hasBigHeadImgUrl;
@property(retain, nonatomic, setter=SetDisplayName:) NSString *displayName; // @synthesize displayName;
@property(readonly, nonatomic) BOOL hasDisplayName; // @synthesize hasDisplayName;
@property(retain, nonatomic, setter=SetNickName:) NSString *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

