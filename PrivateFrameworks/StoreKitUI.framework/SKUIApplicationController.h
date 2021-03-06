/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIApplicationDelegate>, IKAppContext, IKAppDataStorage, NSArray, NSDictionary, NSMutableArray, NSOperationQueue, NSString, NSURL, SKUIAppDeviceConfig, SKUIClientContext, SKUIMetricsController, SKUIModalDocumentController, SKUINavigationDocumentController, SKUIPreviewDocumentController, SKUIPreviewOverlayViewController, SKUISimpleContainerViewController, SKUITabBarController, SKUIURL, SKUIURLResolver, UITabBarController, UIViewController, _SKUIApplicationShutdownHelper;

@interface SKUIApplicationController : NSObject <IKAppContextDelegate, IKApplication, SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, SKUINavigationDocumentDelegate, SKUIURLResolverDelegate, UINavigationControllerDelegate, UITabBarControllerDelegate> {
    NSURL *_applicationScriptURL;
    SKUIClientContext *_clientContext;
    Class _clientContextClass;
    <SKUIApplicationDelegate> *_delegate;
    SKUIAppDeviceConfig *_deviceConfig;
    BOOL _didDisplayFirstPage;
    BOOL _hidesTabBar;
    int _lastNavigationControllerOperation;
    UIViewController *_lastPoppedViewController;
    NSDictionary *_launchOptions;
    SKUIURL *_legacyLaunchURL;
    IKAppDataStorage *_localStorage;
    SKUIMetricsController *_metricsController;
    SKUIModalDocumentController *_modalDocumentController;
    SKUISimpleContainerViewController *_navigationContainerViewController;
    NSMutableArray *_navigationDocumentControllers;
    NSOperationQueue *_operationQueue;
    SKUIPreviewDocumentController *_previewDocumentController;
    SKUIPreviewOverlayViewController *_previewOverlayViewController;
    UIViewController *_rootViewController;
    IKAppContext *_scriptContext;
    int _scriptLoadState;
    _SKUIApplicationShutdownHelper *_shutdownHelper;
    SKUITabBarController *_tabBarController;
    NSArray *_tabBarItems;
    SKUINavigationDocumentController *_transientNavigationDocument;
    SKUIURLResolver *_urlResolver;
    IKAppDataStorage *_vendorStorage;
    NSMutableArray *_whenLoadedBlocks;
}

@property(readonly) int _applicationMode;
@property(setter=_setHidesTabBar:) BOOL _hidesTabBar;
@property(readonly) NSArray * _navigationControllers;
@property(readonly) SKUIPreviewDocumentController * _previewOverlayDocumentController;
@property(setter=_setSelectedTabBarIndex:) int _selectedTabBarIndex;
@property(readonly) SKUINavigationDocumentController * _transientNavigationController;
@property(readonly) SKUIClientContext * clientContext;
@property(copy,readonly) NSString * debugDescription;
@property <SKUIApplicationDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) UIViewController * rootViewController;
@property(readonly) Class superclass;
@property(readonly) UITabBarController * tabBarController;
@property(copy) NSArray * tabBarItems;

+ (id)applicationOptionsWithLaunchOptions:(id)arg1;

- (void).cxx_destruct;
- (void)URLResolver:(id)arg1 didFinishWithResult:(BOOL)arg2;
- (BOOL)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2;
- (void)URLResolver:(id)arg1 showTransientViewController:(id)arg2;
- (void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3;
- (id)_activeNavigationController;
- (int)_applicationMode;
- (void)_dispatchTabBarOnSelect;
- (id)_documentControllerForNavigationController:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_fireBlocksAfterLoad;
- (void)_handleScriptUnavailable;
- (BOOL)_hidesTabBar;
- (void)_invalidateApplication;
- (BOOL)_isDisplayingAccountViewController;
- (BOOL)_isStoreFront:(id)arg1 equalToStoreFront:(id)arg2;
- (id)_launchOptionsWithURL:(id)arg1;
- (void)_legacyResolveExternalURL:(id)arg1;
- (void)_loadApplicationScript;
- (id)_navigationContainerViewController;
- (id)_navigationControllers;
- (id)_newNavigationControllerWithTabBarItem:(id)arg1;
- (id)_operationQueue;
- (void)_pageDidDisplayNotification:(id)arg1;
- (BOOL)_playPreviewForPreviewTemplate:(id)arg1;
- (void)_previewDocumentIsActiveChangeNotification:(id)arg1;
- (id)_previewOverlayDocumentController;
- (void)_recordTabBarMetricsEventToSelectViewController:(id)arg1;
- (void)_reloadAfterNetworkChange:(id)arg1;
- (void)_reloadApplication;
- (void)_reloadApplicationOnForegroundNotification:(id)arg1;
- (void)_reloadRootViewControllers;
- (void)_removeObserversForReloadNotifications;
- (void)_resetDocumentControllers;
- (void)_resetUserInteraceForAccountViewDisappear:(id)arg1;
- (void)_resetUserInterfaceAfterStoreFrontChange;
- (void)_retryAfterFailure;
- (int)_selectedTabBarIndex;
- (void)_sendClientContextDidChange;
- (void)_sendDidDisplayFirstPageIfNecessary;
- (void)_setClientContextWithDictionary:(id)arg1;
- (void)_setHidesTabBar:(BOOL)arg1;
- (void)_setSelectedTabBarIndex:(int)arg1;
- (BOOL)_shouldUseLegacyURLHandlingForExternalURL:(id)arg1;
- (void)_showFloatingPreviewOverlayAnimated:(BOOL)arg1;
- (void)_showPreviewOverlayForNavigationController:(id)arg1 viewController:(id)arg2 animated:(BOOL)arg3;
- (void)_startScriptContextWithURL:(id)arg1;
- (void)_stopApplication;
- (void)_stopApplicationOnBackgroundNotification:(id)arg1;
- (void)_stopScriptContextForReload;
- (void)_storeFrontChangeNotification:(id)arg1;
- (id)_tabBarController;
- (void)_tintTabBarWithViewController:(id)arg1;
- (id)_transientNavigationController;
- (id)_transientNavigationDocument;
- (BOOL)_usesFloatingPreviewOverlayForWidth:(float)arg1;
- (id)activeDocument;
- (void)appContext:(id)arg1 didCompletePurchase:(id)arg2;
- (void)appContext:(id)arg1 didExitWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned int)arg2;
- (void)appContext:(id)arg1 setPreviewOverlayDocument:(id)arg2 withOptions:(id)arg3;
- (id)appIdentifier;
- (BOOL)appIsTrusted;
- (id)appJSURL;
- (BOOL)appJSURLTrusted;
- (id)appLaunchParams;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)deviceConfigForContext:(id)arg1;
- (void)evaluateBlockWhenLoaded:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id)arg2;
- (id)initWithClientContextClass:(Class)arg1;
- (void)loadApplication;
- (void)loadApplicationWithOptions:(id)arg1;
- (id)localStorage;
- (int)modalDocumentController:(id)arg1 barStyleForStackItem:(id)arg2;
- (void)modalDocumentControllerDidFinish:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)navigationControllerForContext:(id)arg1;
- (unsigned int)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (id)presentationViewControllerForAppContext:(id)arg1;
- (id)presentationViewControllerForURLResolver:(id)arg1;
- (void)recordMetricsEvent:(id)arg1 flushImmediately:(BOOL)arg2;
- (void)resumeApplicationWithOptions:(id)arg1;
- (id)rootViewController;
- (id)selectTabWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTabBarItems:(id)arg1;
- (BOOL)shouldIgnoreJSValidation;
- (void)showErrorViewWithTitle:(id)arg1 message:(id)arg2;
- (void)showExternalURL:(id)arg1;
- (void)showTransientViewController:(id)arg1;
- (void)suspendApplicationWithOptions:(id)arg1;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willTransitionToSize:(struct CGSize { float x1; float x2; })arg2 withTransitionCoordinator:(id)arg3;
- (id)tabBarController;
- (unsigned int)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (id)tabBarItems;
- (void)updateTabBarWithItems:(id)arg1 animated:(BOOL)arg2;
- (id)vendorIdentifier;
- (id)vendorStorage;

@end
