// ScriptStruct BoneCaller.EventOnBoneCallerDidKillEvent
// Size: 0x38 (Inherited: 0x00)
struct FEventOnBoneCallerDidKillEvent {
	struct AActor* KilledCharacter; // 0x00(0x08)
	struct FDamageInstance DamageInstance; // 0x08(0x30)
};

// ScriptStruct BoneCaller.EventOnBoneCallerExploded
// Size: 0x28 (Inherited: 0x00)
struct FEventOnBoneCallerExploded {
	struct AActor* RootInstigator; // 0x00(0x08)
	struct AActor* HitActor; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
	struct UObject* ImpactProjectileId; // 0x20(0x08)
};

// ScriptStruct BoneCaller.PlayerBoneCallerData
// Size: 0x10 (Inherited: 0x00)
struct FPlayerBoneCallerData {
	struct UAIFixedWavesSpawner* Spawner; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct BoneCaller.BoneCallerImpactIdToSpawner
// Size: 0x18 (Inherited: 0x00)
struct FBoneCallerImpactIdToSpawner {
	struct UClass* ImpactProjectileId; // 0x00(0x08)
	struct UAIFixedWavesSpawner* ShipSpawner; // 0x08(0x08)
	struct UAIFixedWavesSpawner* LandSpawner; // 0x10(0x08)
};

// ScriptStruct BoneCaller.BoneCallerPawnKillTelemetry
// Size: 0x18 (Inherited: 0x00)
struct FBoneCallerPawnKillTelemetry {
	struct FString KilledPawnName; // 0x00(0x10)
	bool WasSpawnedByBoneCaller; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BoneCaller.BoneCallerUsageTelemetry
// Size: 0x20 (Inherited: 0x00)
struct FBoneCallerUsageTelemetry {
	struct FVector Location; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString Region; // 0x10(0x10)
};

