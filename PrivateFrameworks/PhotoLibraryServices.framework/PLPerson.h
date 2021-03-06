/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPerson : PLManagedObject <PLSyncablePerson> {
    BOOL  _needsPersistenceUpdate;
}

@property (nonatomic, retain) PLDetectedFaceGroup *associatedFaceGroup;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) NSDictionary *contactMatchingDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *detectedFaces;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) int faceCount;
@property (nonatomic, retain) NSSet *faceCrops;
@property (nonatomic, retain) NSString *fullName;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL inPersonNamingModel;
@property (nonatomic, retain) PLDetectedFace *keyFace;
@property (nonatomic) int manualOrder;
@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic, retain) NSSet *personReferences;
@property (nonatomic, retain) NSString *personUUID;
@property (nonatomic, retain) NSString *personUri;
@property (nonatomic, retain) NSSet *rejectedFaces;
@property (nonatomic, retain) NSSet *rejectedFacesNeedingFaceCrops;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic) BOOL verified;

+ (id)_persistenceUpdateQueue;
+ (id)_personsMatchingPredicate:(id)arg1 fetchLimit:(unsigned int)arg2 inManagedObjectContext:(id)arg3;
+ (id)_stringFromContact:(id)arg1 preferGivenName:(BOOL)arg2;
+ (id)allPersonsInManagedObjectContext:(id)arg1;
+ (void)batchFetchPersonUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;
+ (void)batchFetchPersonsByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1;
+ (void)createAssociatedPersonForFaceGroup:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)deleteAllPersonsInManagedObjectContext:(id)arg1;
+ (id)displayNameFromContact:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)enumerateAssetUUIDsForSearchIndexingWithPersonUUID:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(id /* block */)arg3;
+ (id)fetchPersonCountByAssetUUIDForAssetUUIDs:(id)arg1 predicate:(id)arg2 error:(id*)arg3;
+ (id)fullNameFromContact:(id)arg1;
+ (id)insertIntoManagedObjectContext:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verified:(BOOL)arg4;
+ (id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 verified:(BOOL)arg4;
+ (id)listOfSyncedProperties;
+ (id)peopleToUploadInPhotoLibrary:(id)arg1 limit:(int)arg2;
+ (id)peopleWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)personsWithPersonUri:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1;

- (id)_metadataKeys;
- (id)_optimalMetadataForMergingPersons:(id)arg1;
- (id)cplPersonChange;
- (id)debugLogDescription;
- (void)didSave;
- (BOOL)isSyncableChange;
- (BOOL)isValidForPersistence;
- (void)mergePersons:(id)arg1 nominalTarget:(id)arg2;
- (id)mutableFaceCrops;
- (id)mutableFaces;
- (id)mutableRejectedFaces;
- (id)mutableRejectedFacesNeedingFaceCrops;
- (BOOL)needsPersistenceUpdate;
- (void)persistMetadataToFileSystem;
- (void)prepareForDeletion;
- (void)refreshFaceCrops;
- (void)refreshFaces;
- (void)refreshRejectedFaces;
- (void)removePersistedFileSystemData;
- (void)setNeedsPersistenceUpdate:(BOOL)arg1;
- (BOOL)shouldIndexForSearch;
- (BOOL)supportsCloudUpload;
- (void)willSave;

@end
