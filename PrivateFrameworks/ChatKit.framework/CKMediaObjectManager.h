/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableDictionary;

@interface CKMediaObjectManager : NSObject {
    NSMutableDictionary *_mediaObjectDict;
}

+ (id)sharedInstance;

- (void)_registerAllMediaTypes;
- (void)dealloc;
- (Class)mediaObjectClassForMIMEType:(id)arg1;
- (Class)mediaObjectClassForPath:(id)arg1;
- (Class)mediaObjectClassForTransferGUID:(id)arg1;
- (id)newMediaObjectForData:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3;
- (id)newMediaObjectForFilename:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3 composeOptions:(id)arg4;
- (id)newMediaObjectForTransferGUID:(id)arg1;

@end
