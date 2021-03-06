/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class MKMapView, NSArray, NSMutableArray, NSObject<PLDiagnosticsProvider>, NSString, PHFetchResult, PUMapAnnotationManager, PUMapViewControllerSpec;

@interface PUMapViewController : UIViewController <PUPhotoLibraryUIChangeObserver, MKMapViewDelegate, PUMapAnnotationManagerDataSource, PUPhotoBrowserZoomTransitionDelegate, PUStackedAlbumTransitionDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    PUMapAnnotationManager *_annotationManager;
    } _annotationSize;
    float _annotationWidth;
    PHFetchResult *_assetsFetchResult;
    float _borderAnnotationPadding;
    NSObject<PLDiagnosticsProvider> *_diagnosticsProvider;
    NSMutableArray *_mapAnnotations;
    NSArray *_mapItems;
    MKMapView *_mapView;
    unsigned int _maxItemsInitialZoom;
    BOOL _shouldShowTabBar;
    BOOL _shouldShowToolbar;
    PUMapViewControllerSpec *_spec;
    BOOL _updatedInitialAnnotations;
    BOOL _useCurrentUserLocation;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSObject<PLDiagnosticsProvider> * diagnosticsProvider;
@property(readonly) unsigned int hash;
@property unsigned int maxItemsInitialZoom;
@property BOOL shouldShowTabBar;
@property BOOL shouldShowToolbar;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addLocationsToArray:(id)arg1 forInitialZoomWithMapItems:(id)arg2;
- (id)_annotationViewForPhotoToken:(id)arg1;
- (void)_createAnnotationManager;
- (void)_displayDetailsForAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)_handleReportButton:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithDefaultZoomCenteredAtCoordinate:(struct { double x1; double x2; })arg1;
- (id)_puAnnotationViewForAnnotation:(id)arg1;
- (void)_showLocations:(id)arg1 animated:(BOOL)arg2;
- (void)_updateAnnotationsForMapItems:(id)arg1 shouldScroll:(BOOL)arg2;
- (void)_updateAnnotationsForMapItems:(id)arg1;
- (void)_updateMapAssets;
- (void)_updateNavItem;
- (void)dealloc;
- (id)diagnosticsProvider;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initWithSpec:(id)arg1 assetsFetchResult:(id)arg2;
- (id)mapAnnotationManager:(id)arg1 aggregateAnnotationForAnnotations:(id)arg2 averageCoordinate:(struct { double x1; double x2; })arg3;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (unsigned int)maxItemsInitialZoom;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prepareForPhotoLibraryChange:(id)arg1;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)setDiagnosticsProvider:(id)arg1;
- (void)setMaxItemsInitialZoom:(unsigned int)arg1;
- (void)setShouldShowTabBar:(BOOL)arg1;
- (void)setShouldShowToolbar:(BOOL)arg1;
- (BOOL)shouldShowTabBar;
- (BOOL)shouldShowToolbar;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forCollection:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })zoomTransition:(id)arg1 frameForPhotoToken:(id)arg2 operation:(int)arg3;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 contentMode:(int*)arg3 forPhotoToken:(id)arg4 operation:(int)arg5;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)zoomTransition:(id)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3;

@end
