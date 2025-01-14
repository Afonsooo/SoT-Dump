// Enum Repair.ERepairableState
enum class ERepairableState : uint8_t {
	None,
	None,
	None,
	None,
	None,
	None,
};

// ScriptStruct Repair.ShipPartDamagePersistenceModel
// Size: 0x20 (Inherited: 0x01)
struct FShipPartDamagePersistenceModel : FPersistenceModel {
	struct TArray<char> ComponentRepairableStates; // 0x00(0x10)
	struct FString Identifier; // 0x10(0x10)
};

// ScriptStruct Repair.RepairableComponentMaxDamageLevelOverride
// Size: 0x0c (Inherited: 0x00)
struct FRepairableComponentMaxDamageLevelOverride {
	struct FName FeatureName; // 0x00(0x08)
	int32_t MaxDamageLevel; // 0x08(0x04)
};

// ScriptStruct Repair.RepairableAuthoritiveRepairState
// Size: 0x18 (Inherited: 0x00)
struct FRepairableAuthoritiveRepairState {
	char RepairableState; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct AActor*> RepairingList; // 0x08(0x10)
};

// ScriptStruct Repair.DamageZoneRepairableStateChangedEvent
// Size: 0x10 (Inherited: 0x00)
struct FDamageZoneRepairableStateChangedEvent {
	struct AActor* DamageZoneActor; // 0x00(0x08)
	char RepairableState; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Repair.RepairableComponentRepairableStateChangedEvent
// Size: 0x10 (Inherited: 0x00)
struct FRepairableComponentRepairableStateChangedEvent {
	struct UActorComponent* RepairableComponent; // 0x00(0x08)
	char RepairableState; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Repair.EventRepairableObjectRepairEndedEvent
// Size: 0x28 (Inherited: 0x00)
struct FEventRepairableObjectRepairEndedEvent {
	struct UObject* Repairable; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct AActor* RepairerActor; // 0x18(0x08)
	float RepairPercentage; // 0x20(0x04)
	bool RepairCompleted; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Repair.EventRepairableObjectDestroyed
// Size: 0x01 (Inherited: 0x00)
struct FEventRepairableObjectDestroyed {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Repair.RepairObjectActionStateConstructionInfo
// Size: 0x60 (Inherited: 0x30)
struct FRepairObjectActionStateConstructionInfo : FActorActionStateConstructionInfo {
	struct FNetSubObjectPtr RepairableObject; // 0x30(0x14)
	struct FNetActorPtr WieldedItem; // 0x44(0x14)
	struct UClass* InputID; // 0x58(0x08)
};

