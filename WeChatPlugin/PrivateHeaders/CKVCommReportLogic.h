//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageExt.h"
#import "MMCGIDelegate.h"
#import "MMService.h"

@class NSString;

@interface CKVCommReportLogic : MMService <IMessageExt, MMCGIDelegate, MMService>
{
}

- (void)onGetNewXmlMsg:(id)arg1 type:(id)arg2 msgData:(id)arg3;
- (void)OnReportReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetKVStrategyReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)ReportDataWithMainThread:(id)arg1;
- (_Bool)RequestGetKVStrategy:(id)arg1;
- (void)ReportData:(id)arg1 withData:(id)arg2 withChannel:(int)arg3;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

