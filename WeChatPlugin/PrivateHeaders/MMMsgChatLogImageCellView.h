//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatLogImageCellView.h"

#import "IMMRecordDownloadMgrExt.h"

@class NSString;

@interface MMMsgChatLogImageCellView : MMChatLogImageCellView <IMMRecordDownloadMgrExt>
{
}

+ (double)cellHeightWithFavItemDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 constrainedToWidth:(double)arg4;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)layoutThumbImageView;
- (void)populateWithFavItemDataField:(id)arg1 parentMessage:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

