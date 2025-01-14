// Class PirateGenerator.AnimationSwitchDataAsset
// Size: 0x40 (Inherited: 0x28)
struct UAnimationSwitchDataAsset : UDataAsset {
	float Threshold; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FAnimationSwitchEntry> Entries; // 0x30(0x10)

	struct UClass* GetAnimSetIdForDesc(struct FPirateDescription* Desc); // Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x1bdc1b0
};

// Class PirateGenerator.CharacterMeshBakeFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCharacterMeshBakeFunctionLibrary : UBlueprintFunctionLibrary {

	void BakeCharacterMeshAsync(struct UCharacterMeshBakeSpecification* CharacterMeshSpecification, DelegateProperty AsyncResult); // Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bda570
	struct USkeletalMesh* BakeCharacterMesh(struct UCharacterMeshBakeSpecification* CharacterMeshSpecification); // Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bda4f0
	void AsyncBakeResultDynamic__DelegateSignature(struct USkeletalMesh* Mesh); // DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature // Public|Delegate // @ game+0x1e25660
	void AppendCharacterBlendShapes(struct UCharacterMeshBakeSpecification* CharacterMeshSpecification, struct TArray<struct FIPGBlendShape> BlendShapes); // Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bda350
};

// Class PirateGenerator.SkeletonsDataAsset
// Size: 0x78 (Inherited: 0x28)
struct USkeletonsDataAsset : UDataAsset {
	char UnknownData_28[0x50]; // 0x28(0x50)
};

// Class PirateGenerator.CharacterMeshBakeSpecification
// Size: 0x98 (Inherited: 0x28)
struct UCharacterMeshBakeSpecification : UObject {
	bool StripTopLOD; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct USkeletalMesh* CharacterMesh; // 0x30(0x08)
	struct USkeletalMesh* BaseMeshReferenceSkeleton; // 0x38(0x08)
	struct USkeletonsDataAsset* SourceSkeletons; // 0x40(0x08)
	struct TArray<struct FName> SourceSkeletonNames; // 0x48(0x10)
	struct TArray<float> SourceSkeletonWeights; // 0x58(0x10)
	struct TArray<struct FBlendedSubMeshSpecification> BlendedSubMeshes; // 0x68(0x10)
	struct TArray<struct USkeletalMesh*> UnblendedSubMeshes; // 0x78(0x10)
	struct TArray<struct FIPGBlendShape> BlendShapes; // 0x88(0x10)
};

// Class PirateGenerator.CharacterMeshBakeTestFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCharacterMeshBakeTestFunctionLibrary : UBlueprintFunctionLibrary {

	struct UCharacterMeshBakeSpecification* MakeCharacterMeshSpecification(); // Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bdd3c0
	void BlendMeshWithMeshPatchAssets(struct USkeletalMesh** BaseMesh, float* BaseMeshWeight, struct TArray<struct UMeshPatchAsset*>* MeshPatchAssets, struct TArray<float>* MeshPatchAssetWeights, struct USkeletalMesh** TargetMesh); // Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdae40
	struct USkeletalMesh* BakeCharacterMeshFromClassDefault(struct UClass** CharacterMeshBakeSpecificationClass); // Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bda660
	bool AreMeshesEquivalentByMeshPatchCriteria(struct USkeletalMesh** MeshA, struct USkeletalMesh** MeshB); // Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bda430
};

// Class PirateGenerator.ColorTexture
// Size: 0x150 (Inherited: 0x140)
struct UColorTexture : UTexture {
	struct FLinearColor Color; // 0x140(0x10)
};

// Class PirateGenerator.FileAccessFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFileAccessFunctionLibrary : UBlueprintFunctionLibrary {

	struct FString GetMeshPatchAssetPathFromMeshPathAndTypeName(struct FString* MeshPath, struct FString* TypeName); // Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bdc700
	struct UMeshPatchAsset* GetMeshPatchAssetForMeshFromTypeName(struct USkeletalMesh** Mesh, struct FString* TypeName); // Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bdc620
};

// Class PirateGenerator.MaterialReferencesDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UMaterialReferencesDataAsset : UDataAsset {
	struct TArray<struct FMaterialReferencesEntry> MaterialReferences; // 0x28(0x10)
};

// Class PirateGenerator.PirateBodyShapeFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPirateBodyShapeFunctionLibrary : UBlueprintFunctionLibrary {

	struct FString GetHighestWeighted(float* BaseMeshBlendWeight, struct TArray<struct FString>* BodyShapeBlendNames, struct TArray<float>* BodyShapeBlendWeights, float* Threshold); // Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdc410
	bool FindBodyBlendsFromBodyShapeWheelRadialCoordinate(char* Gender, struct FRadialCoordinate* BodyShapeWheelRadialCoordinate, float* BaseMeshBlendWeight, struct TArray<struct FString>* BodyShapeBlendNames, struct TArray<float>* BodyShapeBlendWeights); // Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdb2d0
	struct FRadialCoordinate ConvertToRadialCoordinate(struct FVector2D* UV); // Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x1bdb250
	struct FVector2D ConvertFromRadialCoordinate(struct FRadialCoordinate* Coord); // Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x1bdb1c0
};

// Class PirateGenerator.PirateGeneratorMaterials
// Size: 0x38 (Inherited: 0x28)
struct UPirateGeneratorMaterials : UObject {
	struct TArray<struct UMaterialInterface*> Materials; // 0x28(0x10)
};

// Class PirateGenerator.PirateGeneratorFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPirateGeneratorFunctionLibrary : UBlueprintFunctionLibrary {

	bool SavePirateDescription(struct FString RelativePath, struct FPirateDescription InDesc); // Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdde50
	struct FRadialCoordinate RandomBodyShape(int32_t Seed); // Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x1bddd30
	struct UWardrobeDataAsset* LoadWardrobeDataAsset(); // Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadWardrobeDataAsset // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bdd390
	bool LoadPirateDescription(struct FString RelativePath, struct FPirateDescription OutDesc); // Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdd1c0
	void K2_BakeFromDescriptionGameThread(struct FPirateDescription Desc, char Flags, struct USkeletalMesh* OutMesh, struct FPirateGeneratorAdditionalBakeInfo OutAdditionalBakeInfo, struct FPirateDescription OutDesc); // Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdcdd0
	int32_t IPGLatestVersion(); // Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x1bdcda0
	int32_t GetSeedFromString(struct FString RefName, struct FString str); // Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x1bdcca0
	void GetAllTextureReferences(struct USkeletalMesh** Mesh, struct TArray<struct FPirateGeneratorTextureReference>* OutReferences); // Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdbdc0
	struct TArray<struct FString> GetAllDescriptions(); // Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bdbcc0
	struct FPirateDescription GenerateRandomPirateWithVersion(int32_t* Seed, int32_t* Version, bool* bOverrideBodyShape, struct FRadialCoordinate* BodyShapeOverride, char* SpecificGender, char* SpecificEthnicity, struct TArray<struct FIPGDynamicSlider>* DynamicSliders, struct TArray<struct FName>* TextureReferences, struct TArray<struct FIPGScalarParameter>* ScalarParameters); // Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bdb8b0
	struct FPirateDescription GenerateRandomPirate(int32_t* Seed, bool* bOverrideBodyShape, struct FRadialCoordinate* BodyShapeOverride, char* SpecificGender, char* SpecificEthnicity, struct TArray<struct FIPGDynamicSlider>* DynamicSliders, struct TArray<struct FName>* TextureReferences, struct TArray<struct FIPGScalarParameter>* ScalarParameters); // Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bdb4f0
	void BakeMeshWithNewMaterial(struct FName* InMaterialName, struct FPirateDescription* InPirateDesc, struct TArray<struct FName>* ClothingWardrobeKeys, bool* InFirstPerson, DelegateProperty* Result); // Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeMeshWithNewMaterial // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bda900
	void BakeFromDescriptionAsync(struct FPirateDescription* Desc, char* Flags, DelegateProperty* AsyncResult); // Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bda6e0
};

// Class PirateGenerator.WardrobeExcludeDataAsset
// Size: 0x28 (Inherited: 0x28)
struct UWardrobeExcludeDataAsset : UDataAsset {
};

// Class PirateGenerator.WardrobeDataAsset
// Size: 0xd8 (Inherited: 0x28)
struct UWardrobeDataAsset : UDataAsset {
	char UnknownData_28[0xa0]; // 0x28(0xa0)
	struct TArray<struct FMeshPatchEntry> AssetMap; // 0xc8(0x10)

	bool Rebuild(bool LoadAllAssets); // Function PirateGenerator.WardrobeDataAsset.Rebuild // Final|Native|Public|BlueprintCallable // @ game+0x1bdddc0
	int32_t GetNumNewAssets(); // Function PirateGenerator.WardrobeDataAsset.GetNumNewAssets // Final|Native|Public|BlueprintCallable // @ game+0x1bdc850
};

// Class PirateGenerator.PirateGeneratorSettings
// Size: 0x138 (Inherited: 0x38)
struct UPirateGeneratorSettings : UDeveloperSettings {
	struct FStringAssetReference WardrobeDataAsset; // 0x38(0x10)
	struct UWardrobeDataAsset* EditorWardrobeDataAsset; // 0x48(0x08)
	struct FString ConfigJson; // 0x50(0x10)
	struct FString PiratesFolder; // 0x60(0x10)
	struct FString WardrobeFolder; // 0x70(0x10)
	struct TArray<struct FName> DefaultWardrobeItems; // 0x80(0x10)
	struct FStringAssetReference MaterialReferencesDataAsset; // 0x90(0x10)
	struct FStringAssetReference SkeletonsDataAsset; // 0xa0(0x10)
	struct TArray<struct FStringAssetReference> BaseSkeletonMeshes; // 0xb0(0x10)
	struct TArray<struct FStringAssetReference> Characterization; // 0xc0(0x10)
	struct TArray<struct FString> SkeletonMeshFormats; // 0xd0(0x10)
	struct FStringAssetReference FirstPersonAnimations; // 0xe0(0x10)
	struct FStringAssetReference ThirdPersonAnimations; // 0xf0(0x10)
	struct TArray<float> LODScreenSizes; // 0x100(0x10)
	struct TArray<float> LODHysteresis; // 0x110(0x10)
	struct TArray<struct FStringAssetReference> ExcludeDataAssets; // 0x120(0x10)
	int32_t DefaultPirateGenerationSeed; // 0x130(0x04)
	char UnknownData_134[0x4]; // 0x134(0x04)
};

// Class PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPreparePirateMeshBakeTestFunctionLibrary : UBlueprintFunctionLibrary {

	void PopulateSkeletonBlendsInCharacterMeshBakeSpecification(struct UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, struct USkeletalMesh* MeshWithBaseSkeleton, struct USkeletonsDataAsset* SkeletonsDataAsset, struct FString MeshTypeSkeletonFileFormat, float BaseMeshBlendWeight, struct TArray<struct FString> BodyShapeBlendNames, struct TArray<float> BodyShapeBlendWeights); // Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bddaa0
	void PopulateBlendedSubMeshesInCharacterMeshBakeSpecification(struct UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, struct TArray<struct USkeletalMesh*> SubMeshes, float BaseMeshBlendWeight, struct TArray<struct FString> BodyShapeBlendNames, struct TArray<float> BodyShapeBlendWeights); // Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdd880
};

// Class PirateGenerator.TextureSwitch
// Size: 0x228 (Inherited: 0x148)
struct UTextureSwitch : UTextureProxy {
	char UnknownData_148[0x80]; // 0x148(0x80)
	bool bDuplicated; // 0x1c8(0x01)
	char UnknownData_1C9[0x7]; // 0x1c9(0x07)
	struct FTextureSwitchParameters DefaultParameters; // 0x1d0(0x58)
};

// Class PirateGenerator.TextureSwitchBySeed
// Size: 0x260 (Inherited: 0x228)
struct UTextureSwitchBySeed : UTextureSwitch {
	struct FName HashSource; // 0x228(0x08)
	float FallbackProbability; // 0x230(0x04)
	struct FName FallbackReferenceName; // 0x234(0x08)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
	struct FStringAssetReference FallbackTexture; // 0x240(0x10)
	struct TArray<struct FTextureSwitchSeedEntry> Entries; // 0x250(0x10)
};

// Class PirateGenerator.TextureSwitchByGender
// Size: 0x238 (Inherited: 0x228)
struct UTextureSwitchByGender : UTextureSwitch {
	struct TArray<struct FTextureSwitchGenderEntry> Entries; // 0x228(0x10)
};

// Class PirateGenerator.TextureSwitchByEthnicity
// Size: 0x238 (Inherited: 0x228)
struct UTextureSwitchByEthnicity : UTextureSwitch {
	struct TArray<struct FTextureSwitchEthnicityEntry> Entries; // 0x228(0x10)
};

// Class PirateGenerator.TextureSwitchByBodyShape
// Size: 0x238 (Inherited: 0x228)
struct UTextureSwitchByBodyShape : UTextureSwitch {
	struct TArray<struct FTextureSwitchBodyShapeEntry> Entries; // 0x228(0x10)
};

// Class PirateGenerator.TextureSwitchByItem
// Size: 0x248 (Inherited: 0x228)
struct UTextureSwitchByItem : UTextureSwitch {
	struct FStringAssetReference FallbackTexture; // 0x228(0x10)
	struct TArray<struct FTextureSwitchItemEntry> Entries; // 0x238(0x10)
};

// Class PirateGenerator.ColorTextureSwitchBySeed
// Size: 0x240 (Inherited: 0x228)
struct UColorTextureSwitchBySeed : UTextureSwitch {
	struct FName HashSource; // 0x228(0x08)
	struct TArray<struct FColorTextureSwitchSeedEntry> Entries; // 0x230(0x10)
};

// Class PirateGenerator.WardrobeOutfitDataAsset
// Size: 0x58 (Inherited: 0x28)
struct UWardrobeOutfitDataAsset : UDataAsset {
	struct TArray<struct FName> FemaleWardrobeItems; // 0x28(0x10)
	struct TArray<struct FName> MaleWardrobeItems; // 0x38(0x10)
	struct TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory; // 0x48(0x10)

	float GetBiasForCategory(struct FName Name); // Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x1bdc330
};

// Class PirateGenerator.WardrobeFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWardrobeFunctionLibrary : UBlueprintFunctionLibrary {

	void PickOutfitAsync(struct TArray<struct FName> ClothingItemNames, struct TArray<struct FName> Tags, char PirateType, char Gender, DelegateProperty AsyncResult); // Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdd680
	bool PickOutfit(struct TArray<struct FName> ClothingItemNames, struct TArray<struct FName> Tags, char PirateType, char Gender, struct FWardrobeOutfitResult Result); // Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdd3f0
	struct TArray<struct FName> GetRandomWardrobeItemsWithBias(int32_t Seed, struct TArray<struct FName> InputItems, struct TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory); // Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdcaf0
	struct TArray<struct FName> GetRandomWardrobeItems(int32_t Seed, struct TArray<struct FName> InputItems); // Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x1bdc9c0
	struct TArray<struct FName> GetRandomOutfit(struct UWardrobeOutfitDataAsset* Outfit, int32_t Seed, char Gender); // Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bdc880
	struct TArray<struct FName> GetAllWardrobeTypes(); // Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bdc120
	struct TArray<struct FName> GetAllWardrobeItemsForType(struct FString TypeName, char PirateType, bool bWithExclusions); // Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bdbfb0
	struct TArray<struct FName> GetAllWardrobeItems(char PirateType); // Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems // Final|Native|Static|Public|BlueprintCallable // @ game+0x1bdbee0
	bool CanLoadOutfit(struct TArray<struct FName> ClothingItemNames, struct TArray<struct FName> Tags, char PirateType, char Gender); // Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x1bdb020
	void AsyncOutfitResultDynamic__DelegateSignature(bool Success, struct TArray<struct USkeletalMesh*> Meshes); // DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x1e25660
};

