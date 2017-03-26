//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface WCFavoritesCdnInfoTableData : NSObject <WCDBCoding>
{
    unsigned int itemLocalId;
    unsigned int totalLength;
    unsigned int uploadStatus;
    unsigned int isThumb;
    unsigned int dataType;
    NSString *dataLocalId;
    NSString *cdnUrl;
    NSString *cdnKey;
    NSString *md5;
    NSString *head256Md5;
    NSString *streamId;
    NSString *dataFmt;
    long long m___rowID;
}

+ (id)infoTableDataWithFavoritesCDNInfo:(id)arg1;
+ (void)_initPBTableOfWCFavoritesCdnInfoTableData;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId;
@property(nonatomic) unsigned int dataType; // @synthesize dataType;
@property(nonatomic) unsigned int isThumb; // @synthesize isThumb;
@property(retain, nonatomic) NSString *head256Md5; // @synthesize head256Md5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey;
@property(nonatomic) unsigned int uploadStatus; // @synthesize uploadStatus;
@property(nonatomic) unsigned int totalLength; // @synthesize totalLength;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(retain, nonatomic) NSString *dataLocalId; // @synthesize dataLocalId;
@property(nonatomic) unsigned int itemLocalId; // @synthesize itemLocalId;
- (void).cxx_destruct;
- (void)copyFieldFromOtherObject:(id)arg1;
- (const basic_string_805fe43b *)getWCDBPrimaryColumnName;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long long)getWCDBIndexArrayCount;
- (const map_d2afedfd *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const map_d2afedfd *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_d2afedfd *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_7a576766 *)getValueNameIndexMap;
- (id)getValueTable;
- (const WCDBCondition_0fe98630 *)db_dataFmt;
- (const WCDBCondition_0fe98630 *)db_streamId;
- (const WCDBCondition_8b94cd3d *)db_dataType;
- (const WCDBCondition_8b94cd3d *)db_isThumb;
- (const WCDBCondition_0fe98630 *)db_head256Md5;
- (const WCDBCondition_0fe98630 *)db_md5;
- (const WCDBCondition_0fe98630 *)db_cdnKey;
- (const WCDBCondition_8b94cd3d *)db_uploadStatus;
- (const WCDBCondition_8b94cd3d *)db_totalLength;
- (const WCDBCondition_0fe98630 *)db_cdnUrl;
- (const WCDBCondition_0fe98630 *)db_dataLocalId;
- (const WCDBCondition_8b94cd3d *)db_itemLocalId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

