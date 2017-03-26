//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMFavoritesDetailBaseCell.h"

#import "IContactMgrExt.h"

@class MMAvatarImageView, MMTextField, MMTextView, MMView;

@interface MMFavoritesDetailCardBaseCell : MMFavoritesDetailBaseCell <IContactMgrExt>
{
    MMView *_senderInfoView;
    MMAvatarImageView *_avatarImgView;
    MMTextField *_nickNameTextField;
    MMTextView *_dateTextView;
}

@property(retain, nonatomic) MMTextView *dateTextView; // @synthesize dateTextView=_dateTextView;
@property(retain, nonatomic) MMTextField *nickNameTextField; // @synthesize nickNameTextField=_nickNameTextField;
@property(retain, nonatomic) MMAvatarImageView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(retain, nonatomic) MMView *senderInfoView; // @synthesize senderInfoView=_senderInfoView;
- (void).cxx_destruct;
- (void)updateSenderContact:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)onModifyStrangerContacts:(id)arg1;
- (id)genNoImageTextAttrs;
- (id)genSenderInfoNickNameAttributedString;
- (id)genSenderInfoDateAttributedString;
- (id)contactDataWithUserName:(id)arg1;
- (void)layoutSenderInfoView;
- (void)setupSenderInfoView;
- (void)layoutSubView;
- (void)willBeRecycled;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

