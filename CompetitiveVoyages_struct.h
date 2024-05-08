// Enum CompetitiveVoyages.ECompetitiveVoyagesMainVoyageState
enum class ECompetitiveVoyagesMainVoyageState : uint8_t {
	None,
	None,
	None,
	None,
	None,
};

// Enum CompetitiveVoyages.ECompetitiveVoyagesOptInState
enum class ECompetitiveVoyagesOptInState : uint8_t {
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
};

// Enum CompetitiveVoyages.ECompetitiveVoyagesState
enum class ECompetitiveVoyagesState : uint8_t {
	None,
	None,
	None,
	None,
	None,
};

// ScriptStruct CompetitiveVoyages.OnCompetitiveVoyageCrewRespawned
// Size: 0x28 (Inherited: 0x00)
struct FOnCompetitiveVoyageCrewRespawned {
	struct FGuid CrewId; // 0x00(0x10)
	struct FVector SinkLocation; // 0x10(0x0c)
	struct FVector SpawnLocation; // 0x1c(0x0c)
};

// ScriptStruct CompetitiveVoyages.OnCompetitiveVoyageItemRemoved
// Size: 0x18 (Inherited: 0x00)
struct FOnCompetitiveVoyageItemRemoved {
	struct AActor* RemovedItem; // 0x00(0x08)
	struct FGuid CompetitiveVoyageEventId; // 0x08(0x10)
};

// ScriptStruct CompetitiveVoyages.OnCompetitiveVoyageItemAdded
// Size: 0x18 (Inherited: 0x00)
struct FOnCompetitiveVoyageItemAdded {
	struct AActor* AddedItem; // 0x00(0x08)
	struct FGuid CompetitiveVoyageEventId; // 0x08(0x10)
};

// ScriptStruct CompetitiveVoyages.OnCompetitiveVoyageMainVoyageStopped
// Size: 0x01 (Inherited: 0x00)
struct FOnCompetitiveVoyageMainVoyageStopped {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CompetitiveVoyages.OnCompetitiveVoyageMainVoyageStarted
// Size: 0x01 (Inherited: 0x00)
struct FOnCompetitiveVoyageMainVoyageStarted {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CompetitiveVoyages.OnCompetitiveVoyageOptOutVotePassed
// Size: 0x10 (Inherited: 0x00)
struct FOnCompetitiveVoyageOptOutVotePassed {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct CompetitiveVoyages.OnCompetitiveVoyageCrewOptInEvent
// Size: 0x10 (Inherited: 0x00)
struct FOnCompetitiveVoyageCrewOptInEvent {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyageItemData
// Size: 0x48 (Inherited: 0x00)
struct FCompetitiveVoyageItemData {
	struct AActor* ItemInfo; // 0x00(0x08)
	struct FGuid FirstHoldingCrewId; // 0x08(0x10)
	struct FGuid PreviousHoldingCrewId; // 0x18(0x10)
	struct FGuid CurrentHoldingCrewId; // 0x28(0x10)
	int32_t NumTimesSwappedHands; // 0x38(0x04)
	char UnknownData_3C[0xc]; // 0x3c(0x0c)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyageEventItem
// Size: 0x18 (Inherited: 0x00)
struct FCompetitiveVoyageEventItem {
	struct AActor* VoyageItem; // 0x00(0x08)
	struct FGuid EventID; // 0x08(0x10)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesRespawnParams
// Size: 0x50 (Inherited: 0x00)
struct FCompetitiveVoyagesRespawnParams {
	float ScorePenaltyForEachMeterAwayFromShipwreck; // 0x00(0x04)
	float MinRespawnLocDistanceFromSunkShip; // 0x04(0x04)
	float MinScorePenaltyForEnemyShipProximity; // 0x08(0x04)
	float MaxScorePenaltyForEnemyShipProximity; // 0x0c(0x04)
	float MinDistanceFromEnemyShipToApplyPenalty; // 0x10(0x04)
	float MaxDistanceFromEnemyShipToApplyPenalty; // 0x14(0x04)
	struct FCompetitiveVoyagesRespawnPOIData TreasureHuntPOIData; // 0x18(0x1c)
	struct FCompetitiveVoyagesRespawnPOIData HandInPOIData; // 0x34(0x1c)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesRespawnPOIData
// Size: 0x1c (Inherited: 0x00)
struct FCompetitiveVoyagesRespawnPOIData {
	float MinPreferredDistanceFromPOI; // 0x00(0x04)
	float MaxPreferredDistanceFromPOI; // 0x04(0x04)
	float MinBonusForPreferredDistance; // 0x08(0x04)
	float MaxBonusForPreferredDistance; // 0x0c(0x04)
	float ScorePenaltyForEachMeterAwayFromVoyageItem; // 0x10(0x04)
	float ResourceOrFeatureMultiplier; // 0x14(0x04)
	float OutpostMultiplier; // 0x18(0x04)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesRespawnConfig
// Size: 0x108 (Inherited: 0x00)
struct FCompetitiveVoyagesRespawnConfig {
	struct FCompetitiveVoyagesRespawnParams ScuttleRespawnParams; // 0x00(0x50)
	struct FCompetitiveVoyagesRespawnParams NormalRespawnParams; // 0x50(0x50)
	bool GenerateRespawnVisualizationImages; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	int32_t NumDebugGenerations; // 0xa4(0x04)
	struct FVector2D MapMin; // 0xa8(0x08)
	struct FVector2D MapMax; // 0xb0(0x08)
	struct FCompetitiveVoyagesRespawnParams RespawnParamsToUse; // 0xb8(0x50)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesRespawnDebugMapData
// Size: 0x88 (Inherited: 0x00)
struct FCompetitiveVoyagesRespawnDebugMapData {
	char UnknownData_0[0x88]; // 0x00(0x88)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesRespawnSpawnScoreData
// Size: 0x14 (Inherited: 0x00)
struct FCompetitiveVoyagesRespawnSpawnScoreData {
	char UnknownData_0[0x14]; // 0x00(0x14)
};

// ScriptStruct CompetitiveVoyages.ShipSpeedCurseModifyingValues
// Size: 0x0c (Inherited: 0x00)
struct FShipSpeedCurseModifyingValues {
	float SloopSpeedCurseModifier; // 0x00(0x04)
	float BrigantineSpeedCurseModifier; // 0x04(0x04)
	float GalleonSpeedCurseModifier; // 0x08(0x04)
};

// ScriptStruct CompetitiveVoyages.PhasedMarkerItem
// Size: 0x18 (Inherited: 0x00)
struct FPhasedMarkerItem {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesCrewShipRespawnTelemetryEvent
// Size: 0x38 (Inherited: 0x00)
struct FCompetitiveVoyagesCrewShipRespawnTelemetryEvent {
	struct FGuid EventID; // 0x00(0x10)
	struct FGuid CrewId; // 0x10(0x10)
	struct FVector SinkLocation; // 0x20(0x0c)
	struct FVector SpawnLocation; // 0x2c(0x0c)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesItemUsageTelemetryEvent
// Size: 0x1c (Inherited: 0x00)
struct FCompetitiveVoyagesItemUsageTelemetryEvent {
	struct FGuid EventID; // 0x00(0x10)
	struct FName ClassName; // 0x10(0x08)
	int32_t NumTimesSwappedHands; // 0x18(0x04)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesMigrationTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FCompetitiveVoyagesMigrationTelemetryEvent {
	struct TArray<struct FMigratingEventTelemetryData> MigrationEvents; // 0x00(0x10)
	int32_t NumOptInCrews; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CompetitiveVoyages.MigratingEventTelemetryData
// Size: 0x14 (Inherited: 0x00)
struct FMigratingEventTelemetryData {
	struct FGuid EventID; // 0x00(0x10)
	int32_t NumMigratingCrews; // 0x10(0x04)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesEventCompletedTelemetryEvent
// Size: 0x20 (Inherited: 0x00)
struct FCompetitiveVoyagesEventCompletedTelemetryEvent {
	struct FGuid EventID; // 0x00(0x10)
	int32_t NumParticipatingCrews; // 0x10(0x04)
	int32_t NumMainVoyageCrews; // 0x14(0x04)
	int32_t NumScuttledCrews; // 0x18(0x04)
	int32_t NumOptedOutCrews; // 0x1c(0x04)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesEventCreatedTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FCompetitiveVoyagesEventCreatedTelemetryEvent {
	struct FGuid EventID; // 0x00(0x10)
};

