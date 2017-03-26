//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface EmotionReward : PBGeneratedMessage
{
    unsigned int hasBegWord:1;
    unsigned int hasBegPicUrl:1;
    unsigned int hasThanksPicUrl:1;
    unsigned int hasMagicUrl:1;
    unsigned int hasMagicWord:1;
    unsigned int hasMagicExpire:1;
    unsigned int hasMagicLimit:1;
    unsigned int hasMagicMd5:1;
    unsigned int magicExpire;
    unsigned int magicLimit;
    NSString *begWord;
    NSString *begPicUrl;
    NSString *thanksPicUrl;
    NSString *magicUrl;
    NSString *magicWord;
    NSString *magicMd5;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetMagicMd5:) NSString *magicMd5; // @synthesize magicMd5;
@property(readonly, nonatomic) BOOL hasMagicMd5; // @synthesize hasMagicMd5;
@property(nonatomic, setter=SetMagicLimit:) unsigned int magicLimit; // @synthesize magicLimit;
@property(readonly, nonatomic) BOOL hasMagicLimit; // @synthesize hasMagicLimit;
@property(nonatomic, setter=SetMagicExpire:) unsigned int magicExpire; // @synthesize magicExpire;
@property(readonly, nonatomic) BOOL hasMagicExpire; // @synthesize hasMagicExpire;
@property(retain, nonatomic, setter=SetMagicWord:) NSString *magicWord; // @synthesize magicWord;
@property(readonly, nonatomic) BOOL hasMagicWord; // @synthesize hasMagicWord;
@property(retain, nonatomic, setter=SetMagicUrl:) NSString *magicUrl; // @synthesize magicUrl;
@property(readonly, nonatomic) BOOL hasMagicUrl; // @synthesize hasMagicUrl;
@property(retain, nonatomic, setter=SetThanksPicUrl:) NSString *thanksPicUrl; // @synthesize thanksPicUrl;
@property(readonly, nonatomic) BOOL hasThanksPicUrl; // @synthesize hasThanksPicUrl;
@property(retain, nonatomic, setter=SetBegPicUrl:) NSString *begPicUrl; // @synthesize begPicUrl;
@property(readonly, nonatomic) BOOL hasBegPicUrl; // @synthesize hasBegPicUrl;
@property(retain, nonatomic, setter=SetBegWord:) NSString *begWord; // @synthesize begWord;
@property(readonly, nonatomic) BOOL hasBegWord; // @synthesize hasBegWord;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

