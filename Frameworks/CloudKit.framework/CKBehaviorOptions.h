/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CKBehaviorOptions : NSObject {
    NSMutableDictionary *_cachedPrefs;
    NSObject<OS_dispatch_queue> *_cachedPrefsQueue;
}

@property(retain) NSMutableDictionary * cachedPrefs;
@property(retain) NSObject<OS_dispatch_queue> * cachedPrefsQueue;

+ (id)sharedOptions;

- (void).cxx_destruct;
- (BOOL)CFNetworkLogging;
- (const char *)CKCtlPrompt;
- (unsigned int)PCSCacheSize;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (id)_behaviorOptionForKey:(id)arg1;
- (BOOL)_buildIsOverridden;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (BOOL)_getBoolOptionForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (void)_startListeningForNotifications;
- (id)_urlForKey:(id)arg1 defaultURLString:(id)arg2;
- (unsigned int)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned int)arg1;
- (unsigned int)assetEvictionGracePeriodWithDefaultValue:(unsigned int)arg1;
- (id)buildVersion;
- (id)cachedPrefs;
- (id)cachedPrefsQueue;
- (int)cachedRecordExpiryTime;
- (int)clientThrottleQueueWidth;
- (BOOL)compressRequests;
- (id)configBaseURL;
- (id)contextLoggingBlacklist;
- (id)contextLoggingWhitelist;
- (id)customCloudDBBaseURL;
- (id)customDeviceServiceBaseURL;
- (id)customShareServiceBaseURL;
- (int)defaultOperationQualityOfService;
- (double)defaultRequestTimeout;
- (int)defaultRetryAfter;
- (BOOL)disableCaching;
- (BOOL)enableMescal;
- (BOOL)evictRecentAssets;
- (int)flowControlBudget;
- (int)flowControlBudgetOverride;
- (double)flowControlRegeneration;
- (double)flowControlRegenerationOverride;
- (id)init;
- (BOOL)isAppleInternalInstall;
- (unsigned int)maxBatchSize;
- (double)maximumThrottleSeconds;
- (double)operationTimeout;
- (BOOL)optimisticPCS;
- (id)primaryAccountEmailOverride;
- (id)primaryAccountPasswordOverride;
- (id)productName;
- (id)productVersion;
- (BOOL)sandboxCloudD;
- (id)secondaryAccountEmailOverride;
- (id)secondaryAccountPasswordOverride;
- (int)serverIDExpiryTime;
- (void)setBuildVersion:(id)arg1;
- (void)setCFNetworkLogging:(BOOL)arg1;
- (void)setCKCtlPrompt:(char *)arg1;
- (void)setCachedPrefs:(id)arg1;
- (void)setCachedPrefsQueue:(id)arg1;
- (void)setCachedRecordExpiryTime:(int)arg1;
- (void)setCompressRequests:(BOOL)arg1;
- (void)setConfigBaseURL:(id)arg1;
- (void)setCustomCloudDBBaseURL:(id)arg1;
- (void)setCustomDeviceServiceBaseURL:(id)arg1;
- (void)setCustomShareServiceBaseURL:(id)arg1;
- (void)setDefaultRequestTimeout:(double)arg1;
- (void)setDisableCaching:(BOOL)arg1;
- (void)setEnableMescal:(BOOL)arg1;
- (void)setOperationTimeout:(double)arg1;
- (void)setOptimisticPCS:(BOOL)arg1;
- (void)setPrimaryAccountEmailOverride:(id)arg1;
- (void)setPrimaryAccountPasswordOverride:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setSecondaryAccountEmailOverride:(id)arg1;
- (void)setSecondaryAccountPasswordOverride:(id)arg1;
- (void)setServerIDExpiryTime:(int)arg1;
- (void)setSetupBaseURL:(id)arg1;
- (void)setShouldProfileSQL:(BOOL)arg1;
- (void)setTrafficLogMaximumDataSize:(int)arg1;
- (void)setUseBackgroundSessions:(BOOL)arg1;
- (void)setUseEncryption:(BOOL)arg1;
- (void)setUseStingray:(BOOL)arg1;
- (id)setupBaseURL;
- (BOOL)shouldDecryptRecordsBeforeSave;
- (BOOL)shouldLogProtobufBinary;
- (BOOL)shouldProfileSQL;
- (int)trafficLogMaximumDataSize;
- (BOOL)useBackgroundSessions;
- (BOOL)useEncryption;
- (BOOL)useStingray;
- (BOOL)validateMescalResponses;

@end