//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface BizApiInfo : PBGeneratedMessage
{
    unsigned int hasApiName:1;
    NSString *apiName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetApiName:) NSString *apiName; // @synthesize apiName;
@property(readonly, nonatomic) BOOL hasApiName; // @synthesize hasApiName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

