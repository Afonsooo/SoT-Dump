// Class SaferSeasFramework.SaferSeasDataAssetProviderServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct USaferSeasDataAssetProviderServiceInterface : UInterface {
};

// Class SaferSeasFramework.SaferSeasDataAssetProviderService
// Size: 0x3f0 (Inherited: 0x3c8)
struct ASaferSeasDataAssetProviderService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct USaferSeasEntitlementBlacklistDataAsset* SaferSeasEntitlementBlacklistDataAsset; // 0x3d0(0x08)
	char UnknownData_3D8[0x18]; // 0x3d8(0x18)
};

// Class SaferSeasFramework.SaferSeasEntitlementBlacklistDataAsset
// Size: 0x38 (Inherited: 0x28)
struct USaferSeasEntitlementBlacklistDataAsset : UDataAsset {
	struct TArray<struct UClass*> BlacklistedEntitlements; // 0x28(0x10)
};

// Class SaferSeasFramework.SaferSeasSettings
// Size: 0x48 (Inherited: 0x38)
struct USaferSeasSettings : UDeveloperSettings {
	struct FStringAssetReference SaferSeasBlacklistAsset; // 0x38(0x10)
};

