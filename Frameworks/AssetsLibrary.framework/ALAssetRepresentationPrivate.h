/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsLibrary, NSString, PLManagedAsset, PLPhotoLibrary, PLSidecarFile;

@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset> {
    NSString *_extension;
    BOOL _isValid;
    ALAssetsLibrary *_library;
    PLManagedAsset *_photo;
    PLPhotoLibrary *_photoLibrary;
    PLSidecarFile *_sidecar;
}

@property(retain) PLPhotoLibrary * _photoLibrary;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * extension;
@property(readonly) unsigned int hash;
@property BOOL isValid;
@property ALAssetsLibrary * library;
@property(retain) PLManagedAsset * photo;
@property(retain) PLSidecarFile * sidecar;
@property(readonly) Class superclass;

+ (void)_clearFileDescriptorQueue;
+ (int)_fileDescriptorForPersistentURL:(id)arg1;
+ (void)_setupFileDescriptorQueue;
+ (int)_updateFileDescriptor:(int)arg1 forPersistentURL:(id)arg2;

- (BOOL)_isImage;
- (BOOL)_isVideo;
- (void)_performBlockAndWait:(id)arg1;
- (id)_photoLibrary;
- (void)dealloc;
- (id)extension;
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;
- (BOOL)isValid;
- (id)library;
- (void)libraryDidChange;
- (id)photo;
- (void)setExtension:(id)arg1;
- (void)setIsValid:(BOOL)arg1;
- (void)setLibrary:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setSidecar:(id)arg1;
- (void)set_photoLibrary:(id)arg1;
- (id)sidecar;

@end
