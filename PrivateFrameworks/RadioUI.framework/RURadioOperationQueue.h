/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSObject<OS_dispatch_queue>, NSOperationQueue, RadioRequestContext;

@interface RURadioOperationQueue : NSObject {
    NSOperationQueue *_operationQueue;
    RadioRequestContext *_requestContext;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedQueue;

- (void).cxx_destruct;
- (void)_addOperation:(id)arg1;
- (void)_cancelPlaybackPreparation;
- (void)addGetTracksOperation:(id)arg1;
- (void)addStationWithRequest:(id)arg1 completionBlock:(id)arg2;
- (void)cancelPlaybackPreparation;
- (void)getHistoryWithRequest:(id)arg1 completionHandler:(id)arg2;
- (id)init;
- (void)loadRadioConfigurationWithCompletionBlock:(id)arg1;
- (void)preparePlaybackForStation:(id)arg1 withCompletionBlock:(id)arg2;
- (void)sendPlayEventCollection:(id)arg1 withCompletionBlock:(id)arg2;
- (void)warmOperationQueue;

@end
