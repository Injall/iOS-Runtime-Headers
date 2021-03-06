/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, NSURL, PLCropOverlay, PLImageCache, PLImageLoadingQueue, PLImageSource, PLManagedAsset, PLPhotoTileViewController, PLVideoRemaker, PLVideoView, UIImage;

@interface PLUIImageViewController : UIViewController <PLVideoViewDelegate, PLImageLoadingQueueDelegate, PLPhotoTileViewControllerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _allowEditing : 1;
    unsigned int _statusBarWasHidden : 1;
    unsigned int _isVideo : 1;
    unsigned int _isDisappearing : 1;
    unsigned int _remaking : 1;
    PLCropOverlay *_cropOverlay;
    } _cropRect;
    UIImage *_image;
    PLImageCache *_imageCache;
    PLImageLoadingQueue *_imageLoadingQueue;
    struct CGImage { } *_imageRef;
    PLImageSource *_imageSource;
    PLPhotoTileViewController *_imageTile;
    int _newStatusBarStyle;
    PLManagedAsset *_photo;
    int _previousStatusBarStyle;
    PLVideoRemaker *_remaker;
    NSURL *_videoURL;
    PLVideoView *_videoView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (unsigned int)_contentAutoresizingMask;
- (BOOL)_displaysFullScreen;
- (void)_editabilityChanged:(id)arg1;
- (void)_enableCropOverlayIfNecessary;
- (int)_imagePickerStatusBarStyle;
- (void)_removedAsTopViewController;
- (unsigned int)_tileAutoresizingMask;
- (id)_trimMessage;
- (void)_updateGestureSettings;
- (Class)_viewClass;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_viewFrame;
- (void)attachScrubberPalette;
- (BOOL)clientIsWallpaper;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (id)cropOverlay;
- (int)cropOverlayMode;
- (void)cropOverlayPause:(id)arg1;
- (void)cropOverlayPlay:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)dealloc;
- (int)desiredStatusBarAnimation;
- (void)didChooseVideoAtURL:(id)arg1 options:(id)arg2;
- (int)imageFormat;
- (void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forAsset:(id)arg3 fromSource:(id)arg4;
- (id)initWithImage:(struct CGImage { }*)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)initWithImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)initWithPhoto:(id)arg1;
- (id)initWithUIImage:(id)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)initWithVideoURL:(id)arg1;
- (void)loadView;
- (void)photoTileViewController:(id)arg1 didAppear:(BOOL)arg2;
- (void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2;
- (void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2;
- (BOOL)photoTileViewControllerAllowsEditing:(id)arg1;
- (void)photoTileViewControllerCancelImageRequests:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)photoTileViewControllerDoubleTap:(id)arg1;
- (BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
- (void)photoTileViewControllerSingleTap:(id)arg1;
- (void)photoTileViewControllerWillBeginGesture:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewFrame;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setCropOverlayDone;
- (void)setupNavigationItem;
- (id)useButtonTitle;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoView:(id)arg1 scrubberWasCreated:(id)arg2 slalomRegionEditor:(id)arg3;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (BOOL)videoViewCanCreateMetadata:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewDidPausePlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (float)videoViewScrubberYOrigin:(id)arg1 forOrientation:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsStatusBarVisible;

@end
