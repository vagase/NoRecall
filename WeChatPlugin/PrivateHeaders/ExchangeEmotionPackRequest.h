//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface ExchangeEmotionPackRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasProductId:1;
    unsigned int hasSeriesId:1;
    BaseRequest *baseRequest;
    NSString *productId;
    NSString *seriesId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSeriesId:) NSString *seriesId; // @synthesize seriesId;
@property(readonly, nonatomic) BOOL hasSeriesId; // @synthesize hasSeriesId;
@property(retain, nonatomic, setter=SetProductId:) NSString *productId; // @synthesize productId;
@property(readonly, nonatomic) BOOL hasProductId; // @synthesize hasProductId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

