/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADLogMetaData, NSMutableArray;

@interface ADLogImpressionRequest : PBRequest  {
    ADLogMetaData *_metaData;
    NSMutableArray *_metrics;
}

@property(readonly) BOOL hasMetaData;
@property(readonly) int metricsCount;
@property(retain) NSMutableArray * metrics;
@property(retain) ADLogMetaData * metaData;

+ (void)initialize;

- (unsigned int)requestTypeCode;
- (int)metricsCount;
- (void)setMetric:(id)arg1 atIndex:(unsigned int)arg2;
- (id)metricAtIndex:(unsigned int)arg1;
- (void)addMetric:(id)arg1;
- (BOOL)hasMetaData;
- (Class)responseClass;
- (id)metaData;
- (void)setMetrics:(id)arg1;
- (void)setMetaData:(id)arg1;
- (id)metrics;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end