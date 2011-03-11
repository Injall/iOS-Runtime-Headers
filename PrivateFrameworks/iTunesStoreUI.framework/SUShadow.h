/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIColor;

@interface SUShadow : NSObject <NSCoding, NSCopying> {
    UIColor *_color;
    struct CGSize { 
        float width; 
        float height; 
    } _offset;
    float _opacity;
    float _radius;
}

@property float radius;
@property float opacity;
@property struct CGSize { float width; float height; } offset;
@property(retain) UIColor * color;


- (void)setOffset:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })offset;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setOpacity:(float)arg1;
- (float)opacity;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (float)radius;
- (void)setRadius:(float)arg1;
- (void)applyToLayer:(id)arg1;

@end