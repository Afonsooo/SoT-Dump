// ScriptStruct MostMemoryIntensiveObjectsFramework.MMICategoryData
// Size: 0x18 (Inherited: 0x00)
struct FMMICategoryData {
	struct FName CategoryName; // 0x00(0x08)
	struct TArray<struct FMMIItemData> CategoryItemDataArray; // 0x08(0x10)
};

// ScriptStruct MostMemoryIntensiveObjectsFramework.MMIItemData
// Size: 0x18 (Inherited: 0x00)
struct FMMIItemData {
	int32_t ExclusiveMemorySize; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FString ItemData; // 0x08(0x10)
};

// ScriptStruct MostMemoryIntensiveObjectsFramework.MMIDebugCommandInfo
// Size: 0x30 (Inherited: 0x00)
struct FMMIDebugCommandInfo {
	struct FString CommandMenuPath; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString Command; // 0x20(0x10)
};

