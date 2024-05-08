// Enum NetworkRegions.ENetworkRegion
enum class ENetworkRegion : uint8_t {
	None,
	None,
	None,
	None,
};

// ScriptStruct NetworkRegions.RegionAssetsList
// Size: 0x18 (Inherited: 0x00)
struct FRegionAssetsList {
	char Region; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FStringAssetReference> CachedAssetsForRegion; // 0x08(0x10)
};

