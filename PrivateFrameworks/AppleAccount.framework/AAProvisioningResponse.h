/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSArray, NSString, NSDictionary, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse  {
    NSDictionary *_mobileMe;
    NSDictionary *_appleAccount;
}

@property(readonly) NSArray * provisionedDataclasses;
@property(readonly) NSDictionary * dataclassProperties;
@property(readonly) NSString * personID;
@property(readonly) NSString * firstName;
@property(readonly) NSString * lastName;
@property(readonly) NSString * primaryEmail;
@property(readonly) NSNumber * primaryEmailVerified;
@property(readonly) NSNumber * mobileMeAccountStatusCode;
@property(readonly) NSString * mobileMeAccountFooterText;
@property(readonly) NSDictionary * mobileMeAccountFooterButton;
@property(readonly) NSDictionary * mobileMeAccountFirstDisplayAlert;


- (id)firstName;
- (id)lastName;
- (id)provisionedDataclasses;
- (void)dealloc;
- (id)dataclassProperties;
- (id)personID;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)mobileMeAccountStatusCode;
- (id)primaryEmail;
- (id)primaryEmailVerified;
- (id)mobileMeAccountFooterText;
- (id)mobileMeAccountFooterButton;
- (id)mobileMeAccountFirstDisplayAlert;

@end