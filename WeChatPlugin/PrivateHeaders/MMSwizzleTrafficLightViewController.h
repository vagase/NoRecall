//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

@class NSButton;

@interface MMSwizzleTrafficLightViewController : MMViewController
{
    NSButton *_minButton;
    NSButton *_closeButton;
    NSButton *_zoomButton;
}

@property(retain, nonatomic) NSButton *zoomButton; // @synthesize zoomButton=_zoomButton;
@property(retain, nonatomic) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSButton *minButton; // @synthesize minButton=_minButton;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setTitleBarButonsNeddDisplay;
- (void)resetTrafficLightButtonsState;
- (id)layoutTrafficLightButtonWithButtonType:(unsigned long long)arg1 buttonContainer:(id)arg2;
- (void)layoutTrafficLightButtons:(id)arg1;
- (void)swizzleCoreUIPresentationStateMethod;
- (void)swizzleCoreUIStateMethod;
- (void)dealloc;
- (void)viewDidLoad;

@end

