/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSDictionary;

@interface FTProfileGetDefaultInvitationContext : FTProfileMessage  {
    NSString *_responseRegionID;
    NSString *_responseBasePhoneNumber;
    BOOL _responseValidated;
    NSDictionary *_responseExtraInfo;
}

@property BOOL responseValidated;
@property(copy) NSDictionary * responseExtraInfo;
@property(copy) NSString * responseRegionID;
@property(copy) NSString * responseBasePhoneNumber;


- (id)bagKey;
- (void)dealloc;
- (id)responseBasePhoneNumber;
- (void)setResponseBasePhoneNumber:(id)arg1;
- (id)responseRegionID;
- (BOOL)responseValidated;
- (void)setResponseValidated:(BOOL)arg1;
- (id)responseExtraInfo;
- (void)setResponseExtraInfo:(id)arg1;
- (void)setResponseRegionID:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)requiredKeys;
- (id)messageBody;

@end