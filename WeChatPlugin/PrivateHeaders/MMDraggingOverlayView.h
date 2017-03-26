//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMView.h"

@class MMTextView, NSArray, NSAttributedString;

@interface MMDraggingOverlayView : MMView
{
    BOOL _disabled;
    BOOL _isDraggingEntered;
    NSArray *_ignorePasteboardTypes;
    MMView *_contentView;
    MMTextView *_titleTextView;
    NSArray *_acceptableTypes;
    CDUnknownBlockType _draggingEntered;
    CDUnknownBlockType _draggingExited;
    CDUnknownBlockType _performDragOperationBlock;
    CDUnknownBlockType _didDropItemBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didDropItemBlock; // @synthesize didDropItemBlock=_didDropItemBlock;
@property(copy, nonatomic) CDUnknownBlockType performDragOperationBlock; // @synthesize performDragOperationBlock=_performDragOperationBlock;
@property(copy, nonatomic) CDUnknownBlockType draggingExited; // @synthesize draggingExited=_draggingExited;
@property(copy, nonatomic) CDUnknownBlockType draggingEntered; // @synthesize draggingEntered=_draggingEntered;
@property(retain, nonatomic) NSArray *acceptableTypes; // @synthesize acceptableTypes=_acceptableTypes;
@property(retain, nonatomic) MMTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MMView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) BOOL isDraggingEntered; // @synthesize isDraggingEntered=_isDraggingEntered;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) NSArray *ignorePasteboardTypes; // @synthesize ignorePasteboardTypes=_ignorePasteboardTypes;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)containsIgnoreTypes:(id)arg1;
- (void)mouseUp:(id)arg1;
@property(retain, nonatomic) NSAttributedString *overlayText;
- (void)setOverlayTextWithHeading:(id)arg1 title:(id)arg2;
- (void)setOverlayTextWithTitle:(id)arg1;
- (void)registerForDraggedTypes:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_centerTextView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

