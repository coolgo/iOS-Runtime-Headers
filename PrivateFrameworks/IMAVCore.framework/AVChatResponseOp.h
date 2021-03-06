/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSDictionary;

@interface AVChatResponseOp : AVChatNegotiationOp {
    NSDictionary *_callerProperties;
    unsigned int _response;
    unsigned int _sessionID;
}

- (void)_sendMessageToBuddy:(id)arg1 result:(id)arg2;
- (void)createChildOperations;
- (void)dealloc;
- (void)didFinish;
- (id)initWithParticipant:(id)arg1 response:(unsigned int)arg2 conferenceID:(id)arg3;
- (void)main;

@end
