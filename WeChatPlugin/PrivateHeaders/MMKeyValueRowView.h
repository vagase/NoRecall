//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTextViewDelegate.h"

@class MMTextView, NSString;

@interface MMKeyValueRowView : NSView <NSTextViewDelegate>
{
    BOOL _editable;
    MMTextView *_keyLabel;
    MMTextView *_valueLabel;
    NSString *_valueString;
    id <MMKeyValueRowViewDelegate> _layoutDelegate;
    NSString *_placeholderString;
    NSString *_initialValue;
    CDUnknownBlockType _valueDidChangeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType valueDidChangeBlock; // @synthesize valueDidChangeBlock=_valueDidChangeBlock;
@property(retain, nonatomic) NSString *initialValue; // @synthesize initialValue=_initialValue;
@property(retain, nonatomic) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
@property(nonatomic) __weak id <MMKeyValueRowViewDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) BOOL editable; // @synthesize editable=_editable;
@property(retain, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(retain, nonatomic) MMTextView *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) MMTextView *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void).cxx_destruct;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) NSString *keyString;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 key:(id)arg2 value:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

