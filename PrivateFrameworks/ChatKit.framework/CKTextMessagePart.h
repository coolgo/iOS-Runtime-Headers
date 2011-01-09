/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString;



@interface CKTextMessagePart : CKMessagePart 
{
    NSString *_text;
    NSString *_contentLocation;
}

@property(copy) NSString *contentLocation;


- (BOOL)isDisplayable;
- (void)copyToPasteboard;
- (NSInteger)type;
- (id)text;
- (void)dealloc;
- (id)initWithText:(id)arg1;
- (id)detachedCopy;
- (id)contentLocation;
- (void)setContentLocation:(id)arg1;

@end