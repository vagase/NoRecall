//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MessageSender.h"

#import "ICdnComMgrExt.h"
#import "MMCGIDelegate.h"

@class CdnTaskInfo, NSString;

@interface AppMessageSender : MessageSender <ICdnComMgrExt, MMCGIDelegate>
{
    unsigned int _scene;
    CdnTaskInfo *m_oCurTaskInfo;
    NSString *m_nsFileAeskey;
    NSString *m_nsFileMsgSignature;
    NSString *m_nsFakeFileAeskey;
    NSString *m_nsFakeFileMsgSignature;
    NSString *m_nsMsgMd5;
    unsigned int m_uMsgCrc32;
}

@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)startUploadBigFileWithoutHitCheck;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)handleFileMsg;
- (void)sendCGIWithoutUploadMedia;
- (void)startSending;
- (void)uploadSuccessByCDN:(id)arg1;
- (void)uploadFailByCDN:(int)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (BOOL)sendAppMsgWithFileExists:(BOOL)arg1;
- (void)startUploadAppMsg;
- (void)handleStartUploadFailed;
- (BOOL)sendAppMessageOnUploadThumbFailed:(id)arg1;
- (void)startUploadAppMsgByCDNWithHitCheck:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

