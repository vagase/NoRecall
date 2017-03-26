//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface TKState : NSObject <NSCoding, NSCopying>
{
    NSString *_name;
    CDUnknownBlockType _willEnterStateBlock;
    CDUnknownBlockType _didEnterStateBlock;
    CDUnknownBlockType _willExitStateBlock;
    CDUnknownBlockType _didExitStateBlock;
}

+ (id)stateWithName:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType didExitStateBlock; // @synthesize didExitStateBlock=_didExitStateBlock;
@property(copy, nonatomic) CDUnknownBlockType willExitStateBlock; // @synthesize willExitStateBlock=_willExitStateBlock;
@property(copy, nonatomic) CDUnknownBlockType didEnterStateBlock; // @synthesize didEnterStateBlock=_didEnterStateBlock;
@property(copy, nonatomic) CDUnknownBlockType willEnterStateBlock; // @synthesize willEnterStateBlock=_willEnterStateBlock;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

