//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatLogVoiceCellView.h"

#import "AVAudioPlayerDelegate.h"
#import "CommonPlayerDelegate.h"

@class AVAudioPlayer, NSString, NSTimer, SilkAudioPlayer;

@interface MMFavChatLogVoiceCellView : MMChatLogVoiceCellView <AVAudioPlayerDelegate, CommonPlayerDelegate>
{
    BOOL _bPlaying;
    AVAudioPlayer *_audioPlayer;
    SilkAudioPlayer *_silkAudioPlayer;
    NSTimer *_playTimer;
}

@property(retain, nonatomic) NSTimer *playTimer; // @synthesize playTimer=_playTimer;
@property(retain, nonatomic) SilkAudioPlayer *silkAudioPlayer; // @synthesize silkAudioPlayer=_silkAudioPlayer;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void).cxx_destruct;
- (void)playerShouldStopWhenReceiveStopPlayNotification:(id)arg1;
- (void)onCommonPlayerPauseWithPath:(id)arg1;
- (void)onCommonPlayerStopWithPath:(id)arg1;
- (void)onCommonPlayerPlayWithPath:(id)arg1;
- (void)onCommonPlayerError:(id)arg1 withPath:(id)arg2;
- (void)onCommonPlayerEndWithPath:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)onCommonPlayerPlayAtTime:(double)arg1 withPath:(id)arg2;
- (void)voiceDidChangedCurrentTime:(id)arg1;
- (void)updateUIWithCurrentTime:(double)arg1;
- (void)stopPlayTimer;
- (void)startPlayTimer;
- (BOOL)isPlaying;
- (void)stopPlaying;
- (void)stopPlayingWhenClose;
- (void)layoutVoiceView;
- (void)populateWithFavItemDataField:(id)arg1 parentFavItem:(id)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

