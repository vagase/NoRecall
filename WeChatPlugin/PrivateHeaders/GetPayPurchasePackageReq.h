//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface GetPayPurchasePackageReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasType:1;
    unsigned int hasPrice:1;
    unsigned int hasPriceType:1;
    unsigned int hasExtInfo:1;
    unsigned int type;
    unsigned int price;
    BaseRequest *baseRequest;
    NSString *priceType;
    NSString *extInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetExtInfo:) NSString *extInfo; // @synthesize extInfo;
@property(readonly, nonatomic) BOOL hasExtInfo; // @synthesize hasExtInfo;
@property(retain, nonatomic, setter=SetPriceType:) NSString *priceType; // @synthesize priceType;
@property(readonly, nonatomic) BOOL hasPriceType; // @synthesize hasPriceType;
@property(nonatomic, setter=SetPrice:) unsigned int price; // @synthesize price;
@property(readonly, nonatomic) BOOL hasPrice; // @synthesize hasPrice;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

