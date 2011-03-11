/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, UIImage;

@interface GKCollapsableImageView : UIView  {
    int _layoutStyle;
    UIImage *_image;
    BOOL _highlighted;
    NSArray *_pieces;
}

@property(retain) NSArray * pieces;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) UIImage * image;
@property int layoutStyle;


- (void)setupOnePiece;
- (void)updateOnePieceWithImage:(id)arg1;
- (void)layoutOnePiece;
- (void)layoutTwoPieceHorizontal:(BOOL)arg1;
- (void)layoutFourPiece;
- (void)setupTwoPieceHorizontal:(BOOL)arg1;
- (void)updateTwoPieceHorizontal:(BOOL)arg1 withImage:(id)arg2;
- (void)setupFourPiece;
- (void)updateFourPieceWithImage:(id)arg1;
- (void)updatePiecesWithImage:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (id)pieces;
- (void)setPieces:(id)arg1;
- (int)layoutStyle;
- (void)setHighlighted:(BOOL)arg1;
- (id)image;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1;
- (void)dealloc;
- (void)setImage:(id)arg1;

@end