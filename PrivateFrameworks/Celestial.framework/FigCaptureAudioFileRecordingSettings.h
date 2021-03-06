/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary;

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings <NSCoding> {
    NSDictionary *_audioSettings;
    NSDictionary *_metadata;
}

@property(copy) NSDictionary * audioSettings;
@property(copy) NSDictionary * metadata;

- (id)audioSettings;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (void)setAudioSettings:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
