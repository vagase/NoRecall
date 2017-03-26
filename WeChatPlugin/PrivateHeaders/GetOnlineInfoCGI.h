//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMNetServiceExt.h"

@class NSString;

@interface GetOnlineInfoCGI : NSObject <MMNetServiceExt>
{
    BOOL _isSessionTimeout;
    BOOL _isFirstActiveMsgAfterQRCodeAuth;
    unsigned int _currentOnlineStatus;
    unsigned int _curOnlineVersion;
    id <GetOnlineInfoCGIExt> _delegate;
}

@property(nonatomic) BOOL isFirstActiveMsgAfterQRCodeAuth; // @synthesize isFirstActiveMsgAfterQRCodeAuth=_isFirstActiveMsgAfterQRCodeAuth;
@property(nonatomic) unsigned int curOnlineVersion; // @synthesize curOnlineVersion=_curOnlineVersion;
@property(nonatomic) BOOL isSessionTimeout; // @synthesize isSessionTimeout=_isSessionTimeout;
@property(nonatomic) __weak id <GetOnlineInfoCGIExt> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int currentOnlineStatus; // @synthesize currentOnlineStatus=_currentOnlineStatus;
- (void).cxx_destruct;
- (void)onSessionTimeout;
- (BOOL)shouldNotifyLockStateChangedWithStatus:(unsigned int)arg1;
- (BOOL)shouldSendActiveStateCGIWithStatus:(unsigned int)arg1;
- (void)sendGetOnlineInfoCGIWithCompletion:(CDUnknownBlockType)arg1;
- (void)TryGetOnlineInfo:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

