//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MessageHandler.h"

@interface EmoticonMessageHandler : MessageHandler
{
    id <EmoticonMessageHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <EmoticonMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onSendFinished:(id)arg1 taskId:(unsigned long long)arg2 msgData:(id)arg3;
- (void)addMsgToSendQueue:(id)arg1 msgData:(id)arg2;

@end

