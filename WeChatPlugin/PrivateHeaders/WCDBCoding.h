//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCoding.h"

@class NSArray, NSDictionary;

@protocol WCDBCoding <PBCoding>
+ (id)dummyObject;
@property(nonatomic) long long __rowID;
- (const map_7a576766 *)getValueNameIndexMap;
- (NSArray *)getValueTable;

@optional
+ (NSDictionary *)getWCDBTableHelperDictionary;
- (const map_d2afedfd *)getFileValueTagIndexMap;
- (NSArray *)getFileValueTypeTable;
- (const map_d2afedfd *)getPackedValueTagIndexMap;
- (NSArray *)getPackedValueTypeTable;
- (const basic_string_805fe43b *)getWCDBPrimaryColumnName;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long long)getWCDBIndexArrayCount;
@end

