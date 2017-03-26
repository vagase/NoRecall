//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface VoiceTransRes : PBGeneratedMessage
{
    unsigned int hasSequence:1;
    unsigned int hasEndFlag:1;
    unsigned int hasResult:1;
    unsigned int sequence;
    unsigned int endFlag;
    NSString *result;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetResult:) NSString *result; // @synthesize result;
@property(readonly, nonatomic) BOOL hasResult; // @synthesize hasResult;
@property(nonatomic, setter=SetEndFlag:) unsigned int endFlag; // @synthesize endFlag;
@property(readonly, nonatomic) BOOL hasEndFlag; // @synthesize hasEndFlag;
@property(nonatomic, setter=SetSequence:) unsigned int sequence; // @synthesize sequence;
@property(readonly, nonatomic) BOOL hasSequence; // @synthesize hasSequence;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

