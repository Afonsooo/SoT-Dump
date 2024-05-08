// Class MostMemoryIntensiveObjectsFramework.MMICategoryDebugCommandSource
// Size: 0x28 (Inherited: 0x28)
struct UMMICategoryDebugCommandSource : UObject {
};

// Class MostMemoryIntensiveObjectsFramework.MostMemoryIntensiveObjectsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UMostMemoryIntensiveObjectsDataAsset : UDataAsset {
	struct TArray<struct FMMICategoryData> MostMemoryIntensiveObjects; // 0x28(0x10)
};

// Class MostMemoryIntensiveObjectsFramework.MostMemoryIntensiveObjectsRuntimeSettings
// Size: 0x68 (Inherited: 0x38)
struct UMostMemoryIntensiveObjectsRuntimeSettings : UDeveloperSettings {
	struct FString MostMemoryIntensiveObjectsDataAssetPath; // 0x38(0x10)
	struct FString MostMemoryIntensiveObjectsDataAssetName; // 0x48(0x10)
	struct TArray<struct UClass*> MostMemoryIntensiveDebugCommandSources; // 0x58(0x10)
};

