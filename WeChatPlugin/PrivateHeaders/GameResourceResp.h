//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface GameResourceResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasPropsCount:1;
    int propsCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutablePropsListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutablePropsListList; // @synthesize mutablePropsListList;
@property(nonatomic, setter=SetPropsCount:) int propsCount; // @synthesize propsCount;
@property(readonly, nonatomic) BOOL hasPropsCount; // @synthesize hasPropsCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addPropsList:(id)arg1;
- (void)addPropsListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *propsList; // @dynamic propsList;
- (id)propsListList;
- (id)init;

@end

