// Enum ShipDamage.EHullDamageDeck
enum class EHullDamageDeck : uint8_t {
	None,
	None,
	None,
};

// ScriptStruct ShipDamage.HullDamagePersistenceModel
// Size: 0x10 (Inherited: 0x01)
struct FHullDamagePersistenceModel : FPersistenceModel {
	struct TArray<struct FHullDamageZoneInfo> DamageZones; // 0x00(0x10)
};

// ScriptStruct ShipDamage.HullDamageZoneInfo
// Size: 0x30 (Inherited: 0x00)
struct FHullDamageZoneInfo {
	struct FString DamageZoneId; // 0x00(0x10)
	int32_t DamageLevel; // 0x10(0x04)
	int32_t RepairedDamageLevel; // 0x14(0x04)
	char RepairableState; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct TArray<struct FHullDamageHit> ExternalHitList; // 0x20(0x10)
};

// ScriptStruct ShipDamage.HullDamageHit
// Size: 0x1c (Inherited: 0x00)
struct FHullDamageHit {
	struct FVector HitPosition; // 0x00(0x0c)
	struct FVector HitNormal; // 0x0c(0x0c)
	bool HasDecal; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct ShipDamage.LevelOfDamageProperties
// Size: 0x90 (Inherited: 0x00)
struct FLevelOfDamageProperties {
	float LeakAmount; // 0x00(0x04)
	float RepairTime; // 0x04(0x04)
	float UndoRepairTime; // 0x08(0x04)
	float NonOwningCrewUndoRepairTime; // 0x0c(0x04)
	struct UMaterialInterface* HoleDecalMaterial; // 0x10(0x08)
	char UnknownData_18[0x8]; // 0x18(0x08)
	struct FTransform HoleDecalComponentTransform; // 0x20(0x30)
	struct FVector ParticleSystemComponentLocation; // 0x50(0x0c)
	float InternalWaterSamplePositionTopOffset; // 0x5c(0x04)
	float InternalWaterSamplePositionBottomOffset; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct UParticleSystem* ParticleSystem_WaterLeakAboveWater; // 0x68(0x08)
	struct UParticleSystem* ParticleSystem_WaterLeakBelowWater; // 0x70(0x08)
	struct UParticleSystem* ParticleSystem_RepairLeakAboveWater; // 0x78(0x08)
	struct UParticleSystem* ParticleSystem_RepairLeakBelowWater; // 0x80(0x08)
	struct UParticleSystem* ParticleSystem_SplashOnInternalWaterSurface; // 0x88(0x08)
};

// ScriptStruct ShipDamage.EventShipDamageApplied
// Size: 0x70 (Inherited: 0x00)
struct FEventShipDamageApplied {
	struct AActor* Ship; // 0x00(0x08)
	struct FName DamagedShipPartIdentifier; // 0x08(0x08)
	int32_t NewDamageLevel; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FImpactDamageEvent ImpactDamageEvent; // 0x18(0x58)
};

// ScriptStruct ShipDamage.EventShipDamaged
// Size: 0x60 (Inherited: 0x00)
struct FEventShipDamaged {
	struct AActor* Ship; // 0x00(0x08)
	struct FImpactDamageEvent ImpactDamageEvent; // 0x08(0x58)
};

// ScriptStruct ShipDamage.DamageZoneDamageLevelChanged
// Size: 0x10 (Inherited: 0x00)
struct FDamageZoneDamageLevelChanged {
	struct AActor* DamageZone; // 0x00(0x08)
	int32_t DamageLevel; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShipDamage.AppliedDamageToShipEvent
// Size: 0x10 (Inherited: 0x00)
struct FAppliedDamageToShipEvent {
	struct UClass* ShipType; // 0x00(0x08)
	struct AActor* Ship; // 0x08(0x08)
};

// ScriptStruct ShipDamage.ShipRestoredNetworkEvent
// Size: 0x10 (Inherited: 0x10)
struct FShipRestoredNetworkEvent : FNetworkEventStruct {
};

// ScriptStruct ShipDamage.SendShipRestoredRpc
// Size: 0x20 (Inherited: 0x10)
struct FSendShipRestoredRpc : FBoxedRpc {
	struct FGuid CrewId; // 0x10(0x10)
};

// ScriptStruct ShipDamage.EventRestoreShip
// Size: 0x01 (Inherited: 0x00)
struct FEventRestoreShip {
	bool OnlyRepaired; // 0x00(0x01)
};

// ScriptStruct ShipDamage.ShipDamageParams
// Size: 0x10 (Inherited: 0x00)
struct FShipDamageParams {
	struct TArray<struct FShipPartLevelsOfDamage> DamageParams; // 0x00(0x10)
};

// ScriptStruct ShipDamage.ShipPartLevelsOfDamage
// Size: 0x40 (Inherited: 0x00)
struct FShipPartLevelsOfDamage {
	struct UClass* ActorClass; // 0x00(0x20)
	struct TArray<struct FDistanceAndLevelOfDamage> DamagePerDistance; // 0x20(0x10)
	struct FFeatureFlag FeatureName; // 0x30(0x0c)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ShipDamage.DistanceAndLevelOfDamage
// Size: 0x14 (Inherited: 0x00)
struct FDistanceAndLevelOfDamage {
	float DistanceLimit; // 0x00(0x04)
	int32_t LevelOfDamage; // 0x04(0x04)
	bool CannotDamageAboveLimit; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t DamageLimit; // 0x0c(0x04)
	bool ShouldOnlyDamageOneHullDeckLevel; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

