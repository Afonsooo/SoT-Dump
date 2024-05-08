// Enum AdventureOnDemandFramework.EAdventureOnDemandVoyageCategoryType
enum class EAdventureOnDemandVoyageCategoryType : uint8_t {
	None,
	None,
	None,
};

// Enum AdventureOnDemandFramework.EAdventureOnDemandDiveToQuestAvailability
enum class EAdventureOnDemandDiveToQuestAvailability : uint8_t {
	None,
	None,
	None,
	None,
};

// Enum AdventureOnDemandFramework.EAdventureOnDemandSailToQuestAvailability
enum class EAdventureOnDemandSailToQuestAvailability : uint8_t {
	None,
	None,
	None,
};

// Enum AdventureOnDemandFramework.EOnDemandQuestResumeConditionMetReason
enum class EOnDemandQuestResumeConditionMetReason : uint8_t {
	None,
	None,
	None,
	None,
	None,
	None,
};

// ScriptStruct AdventureOnDemandFramework.TradingCompanyPopUpBackgroundEntry
// Size: 0x18 (Inherited: 0x00)
struct FTradingCompanyPopUpBackgroundEntry {
	struct UClass* TradingCompany; // 0x00(0x08)
	struct TArray<struct FStringAssetReference> BackgroundImages; // 0x08(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageDiscoveryPageMysteryProposal
// Size: 0x28 (Inherited: 0x00)
struct FAdventureOnDemandVoyageDiscoveryPageMysteryProposal {
	struct FName MysteryName; // 0x00(0x08)
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x08(0x10)
	struct UClass* MysteryProposalTemplate; // 0x18(0x08)
	bool SelectTallTales; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandTallTaleProposalGroup
// Size: 0x70 (Inherited: 0x00)
struct FAdventureOnDemandTallTaleProposalGroup {
	struct FStringAssetReference BackgroundImageUrl; // 0x00(0x10)
	struct FStringAssetReference SmallBackgroundImageUrl; // 0x10(0x10)
	struct TArray<struct FQuestTableTallTaleReward> Rewards; // 0x20(0x10)
	struct TArray<struct FText> LockedDescriptions; // 0x30(0x10)
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x40(0x10)
	struct FPlayerStat StatForNewTag; // 0x50(0x04)
	char SailToQuestAvailability; // 0x54(0x01)
	char DiveToQuestAvailability; // 0x55(0x01)
	char UnknownData_56[0x2]; // 0x56(0x02)
	struct UClass* InitialProposal; // 0x58(0x08)
	struct TArray<struct FAdventureOnDemandTallTaleCheckpoint> Checkpoints; // 0x60(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandTallTaleCheckpoint
// Size: 0x10 (Inherited: 0x00)
struct FAdventureOnDemandTallTaleCheckpoint {
	struct TArray<struct FAdventureOnDemandTallTaleCheckpointProposal> Proposals; // 0x00(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandTallTaleCheckpointProposal
// Size: 0x18 (Inherited: 0x00)
struct FAdventureOnDemandTallTaleCheckpointProposal {
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x00(0x10)
	struct UClass* Proposal; // 0x10(0x08)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionVoyageProposalGroup
// Size: 0x48 (Inherited: 0x00)
struct FAdventureOnDemandVoyageSelectionVoyageProposalGroup {
	struct FName GroupName; // 0x00(0x08)
	struct UClass* CategoryId; // 0x08(0x08)
	struct UClass* Company; // 0x10(0x08)
	struct FFeatureFlag Feature; // 0x18(0x0c)
	char CategoryType; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x28(0x10)
	struct TArray<struct FAdventureOnDemandVoyageSelectionVoyageProposal> Proposals; // 0x38(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionVoyageProposal
// Size: 0x30 (Inherited: 0x00)
struct FAdventureOnDemandVoyageSelectionVoyageProposal {
	struct FFeatureFlag Feature; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x10(0x10)
	struct FPlayerStat StatForNewTag; // 0x20(0x04)
	char SailToQuestAvailability; // 0x24(0x01)
	char DiveToQuestAvailability; // 0x25(0x01)
	char VoyageType; // 0x26(0x01)
	char UnknownData_27[0x1]; // 0x27(0x01)
	struct UClass* Proposal; // 0x28(0x08)
};

// ScriptStruct AdventureOnDemandFramework.VoyageHintPopupDescEntry
// Size: 0x10 (Inherited: 0x00)
struct FVoyageHintPopupDescEntry {
	char QuestType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UPopUpMessageDesc* HintPopUpMessageDesc; // 0x08(0x08)
};

// ScriptStruct AdventureOnDemandFramework.ExtraSpawnDistanceFromIsland
// Size: 0x18 (Inherited: 0x00)
struct FExtraSpawnDistanceFromIsland {
	struct UClass* ShipSize; // 0x00(0x08)
	struct TArray<struct FExtraSpawnDistanceByIslandType> DistanceByIslandType; // 0x08(0x10)
};

// ScriptStruct AdventureOnDemandFramework.ExtraSpawnDistanceByIslandType
// Size: 0x08 (Inherited: 0x00)
struct FExtraSpawnDistanceByIslandType {
	char IslandType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float ExtraSpawnDistance; // 0x04(0x04)
};

// ScriptStruct AdventureOnDemandFramework.OnDemandQuestResumeConditionMetReasonQuestVariable
// Size: 0x30 (Inherited: 0x30)
struct FOnDemandQuestResumeConditionMetReasonQuestVariable : FQuestVariable {
};

// ScriptStruct AdventureOnDemandFramework.GameEventOnDemandBannerTextData
// Size: 0xf0 (Inherited: 0x00)
struct FGameEventOnDemandBannerTextData {
	struct TArray<struct UClass*> GameEventTypes; // 0x00(0x10)
	struct FText OnShipSunkBannerText; // 0x10(0x38)
	struct FText OnVoyageCancelledBannerText; // 0x48(0x38)
	struct FText OnGameEventCompletedBannerHeaderText; // 0x80(0x38)
	struct FText OnGameEventCompletedBannerMessageText; // 0xb8(0x38)
};

// ScriptStruct AdventureOnDemandFramework.GameEventOnDemandCompanyStatData
// Size: 0x10 (Inherited: 0x00)
struct FGameEventOnDemandCompanyStatData {
	struct UClass* Company; // 0x00(0x08)
	struct FPlayerStat Stat; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AdventureOnDemandFramework.QuestTableCompanyTutorialPrerequisites
// Size: 0x18 (Inherited: 0x00)
struct FQuestTableCompanyTutorialPrerequisites {
	struct UClass* Company; // 0x00(0x08)
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x08(0x10)
};

// ScriptStruct AdventureOnDemandFramework.QuestTableBakedInfoDiscoverTile
// Size: 0x148 (Inherited: 0x138)
struct FQuestTableBakedInfoDiscoverTile : FQuestTableBakedDiscoverTile {
	struct FString InfoTipIdClientConfigName; // 0x138(0x10)
};

// ScriptStruct AdventureOnDemandFramework.QuestTableBakedDiscoverTile
// Size: 0x138 (Inherited: 0x00)
struct FQuestTableBakedDiscoverTile {
	struct FGuid TileId; // 0x00(0x10)
	struct FText CondensedTitle; // 0x10(0x38)
	struct FText Title; // 0x48(0x38)
	struct FText Subtitle; // 0x80(0x38)
	struct FText Description; // 0xb8(0x38)
	bool HighSeasOnly; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
	struct FStringAssetReference BackgroundImageUrl; // 0xf8(0x10)
	struct FStringAssetReference PreviewTileIconImageUrl; // 0x108(0x10)
	struct FStringAssetReference BladeFrameImageURL; // 0x118(0x10)
	struct FStringAssetReference WatermarkImageUrl; // 0x128(0x10)
};

// ScriptStruct AdventureOnDemandFramework.QuestTableBakedQuestDiscoverTile
// Size: 0x140 (Inherited: 0x138)
struct FQuestTableBakedQuestDiscoverTile : FQuestTableBakedDiscoverTile {
	struct UClass* Proposal; // 0x138(0x08)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandCrewReachedSurfaceEvent
// Size: 0x10 (Inherited: 0x00)
struct FAdventureOnDemandCrewReachedSurfaceEvent {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandCrewReadyToResurfaceEvent
// Size: 0x10 (Inherited: 0x00)
struct FAdventureOnDemandCrewReadyToResurfaceEvent {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandDiveCrewAlreadyAtDestinationEvent
// Size: 0x10 (Inherited: 0x00)
struct FAdventureOnDemandDiveCrewAlreadyAtDestinationEvent {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSurfaceTaleFinished
// Size: 0x01 (Inherited: 0x00)
struct FAdventureOnDemandVoyageSurfaceTaleFinished {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AdventureOnDemandFramework.ContendedResourceGameEventOnDemandArrivalTunnelWorkerFailedTelemetryEvent
// Size: 0x38 (Inherited: 0x00)
struct FContendedResourceGameEventOnDemandArrivalTunnelWorkerFailedTelemetryEvent {
	struct FGuid TunnelInstanceId; // 0x00(0x10)
	struct FString GameEventType; // 0x10(0x10)
	struct TArray<struct FString> InvalidReasons; // 0x20(0x10)
	int32_t NumLockedEvents; // 0x30(0x04)
	int32_t NumAvailableEvents; // 0x34(0x04)
};

// ScriptStruct AdventureOnDemandFramework.GameEventOnDemandArrivalTunnelWorkerCompletedTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FGameEventOnDemandArrivalTunnelWorkerCompletedTelemetryEvent {
	struct FGuid TunnelInstanceId; // 0x00(0x10)
	double ArrivalTunnelWorkerLifetimeSeconds; // 0x10(0x08)
};

