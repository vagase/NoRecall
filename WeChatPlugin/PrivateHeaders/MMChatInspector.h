//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "NSPopoverDelegate.h"

@class BFNavigationController, MMChatInspectorMainViewController, MMChatInspectorPickPeopleController, MMChatInspectorQRViewController, NSPopover, NSString, NSWindow, WCContactData;

@interface MMChatInspector : MMViewController <NSPopoverDelegate>
{
    WCContactData *_contact;
    BFNavigationController *_navController;
    NSWindow *_spawningWindow;
    MMChatInspectorMainViewController *_mainScreenController;
    NSPopover *_popover;
    MMChatInspectorPickPeopleController *_addPeoplePicker;
    MMChatInspectorPickPeopleController *_invitePeoplePicker;
    MMChatInspectorQRViewController *_qrController;
}

@property(retain, nonatomic) MMChatInspectorQRViewController *qrController; // @synthesize qrController=_qrController;
@property(retain, nonatomic) MMChatInspectorPickPeopleController *invitePeoplePicker; // @synthesize invitePeoplePicker=_invitePeoplePicker;
@property(retain, nonatomic) MMChatInspectorPickPeopleController *addPeoplePicker; // @synthesize addPeoplePicker=_addPeoplePicker;
@property(retain, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MMChatInspectorMainViewController *mainScreenController; // @synthesize mainScreenController=_mainScreenController;
@property(nonatomic) __weak NSWindow *spawningWindow; // @synthesize spawningWindow=_spawningWindow;
@property(retain, nonatomic) BFNavigationController *navController; // @synthesize navController=_navController;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)hide;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)showWithContact:(id)arg1 inView:(id)arg2;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

