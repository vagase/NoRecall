//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ModSnsBlackList : PBGeneratedMessage
{
    unsigned int hasContactUsername:1;
    unsigned int hasModType:1;
    unsigned int modType;
    NSString *contactUsername;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetModType:) unsigned int modType; // @synthesize modType;
@property(readonly, nonatomic) BOOL hasModType; // @synthesize hasModType;
@property(retain, nonatomic, setter=SetContactUsername:) NSString *contactUsername; // @synthesize contactUsername;
@property(readonly, nonatomic) BOOL hasContactUsername; // @synthesize hasContactUsername;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

