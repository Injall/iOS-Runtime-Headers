/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSCoreManagedObjectID : NSManagedObjectID {
}

+ (void)_release_1;
+ (id)_retain_1;
+ (void)_setStoreInfo1:(id)arg1;
+ (void)_storeDeallocated;
+ (id)_storeInfo1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (NSUInteger)allocateBatch:(id*)arg1 count:(NSUInteger)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (char *)generatedNameSuffix;
+ (void)initialize;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (void)release;
+ (id)retain;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (NSInteger)version;

- (id)URIRepresentation;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (id)entity;
- (void)finalize;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTemporaryID;
- (id)persistentStore;
- (void)release;
- (id)retain;
- (NSUInteger)retainCount;

@end