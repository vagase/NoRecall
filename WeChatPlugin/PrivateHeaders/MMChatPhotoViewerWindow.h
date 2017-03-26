//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatItemViewerWindow.h"

@class NSScrollView, QLPreviewView;

@interface MMChatPhotoViewerWindow : MMChatItemViewerWindow
{
    QLPreviewView *_quicklookView;
    NSScrollView *_scrollView;
}

@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) QLPreviewView *quicklookView; // @synthesize quicklookView=_quicklookView;
- (void).cxx_destruct;
- (id)contentForSharing;
- (void)copy:(id)arg1;
- (void)addToFavorites:(id)arg1;
- (void)exportContent:(id)arg1;
- (id)title;
- (BOOL)useSpaceKeyForClose;
- (struct CGSize)sizeForContent;
- (id)supportedActions;
- (id)mainImage;
- (void)refreshContent;
- (void)loadContent;
- (void)windowDidLoad;

@end

