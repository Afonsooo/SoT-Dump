// Class AdventureOnDemand.AdventureOnDemandService
// Size: 0x6d8 (Inherited: 0x3c8)
struct AAdventureOnDemandService : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct UAdventureOnDemandServiceParams* Params; // 0x3d8(0x08)
	struct UAdventureOnDemandVoyageSelectionDataAsset* VoyageSelectionDataAsset; // 0x3e0(0x08)
	struct UQuestTableAdventureOnDemandParams* QuestTableAdventureOnDemandParams; // 0x3e8(0x08)
	struct UTradingCompanyPopUpBackgroundCollectionDataAsset* TradingCompanyPopUpBackgroundCollection; // 0x3f0(0x08)
	char UnknownData_3F8[0xa0]; // 0x3f8(0xa0)
	struct TArray<struct FAdventureOnDemandServiceCrewEntry> DiveToTunnelEntries; // 0x498(0x10)
	struct TArray<struct FAdventureOnDemandServiceCrewEntry> LeaveTunnelEntries; // 0x4a8(0x10)
	struct TArray<struct FGuid> CrewsDivingToTunnel; // 0x4b8(0x10)
	struct TArray<struct FGuid> CrewsInArrivalTunnel; // 0x4c8(0x10)
	struct TArray<struct FGuid> CrewsOnCooldown; // 0x4d8(0x10)
	char UnknownData_4E8[0x1f0]; // 0x4e8(0x1f0)
};

// Class AdventureOnDemand.GameEventOnDemandArrivalTunnelWorkerBase
// Size: 0x158 (Inherited: 0x30)
struct UGameEventOnDemandArrivalTunnelWorkerBase : UAdventureOnDemandArrivalTunnelWorkerBase {
	float TriggerTunnelFailureTimeout; // 0x30(0x04)
	float MinRangeFromTarget; // 0x34(0x04)
	float MaxRangeFromTarget; // 0x38(0x04)
	float SubsequentCrewJoinRadiusModifier; // 0x3c(0x04)
	struct UClass* GameEventType; // 0x40(0x08)
	char UnknownData_48[0xe0]; // 0x48(0xe0)
	struct UVoyageDescDataAsset* LeaveTunnelVoyageDesc; // 0x128(0x08)
	char UnknownData_130[0x14]; // 0x130(0x14)
	float RetryRequestEventFrequency; // 0x144(0x04)
	char UnknownData_148[0x10]; // 0x148(0x10)
};

// Class AdventureOnDemand.AIShipBattleGameEventOnDemandArrivalTunnelWorker
// Size: 0x168 (Inherited: 0x158)
struct UAIShipBattleGameEventOnDemandArrivalTunnelWorker : UGameEventOnDemandArrivalTunnelWorkerBase {
	char UnknownData_158[0x10]; // 0x158(0x10)
};

// Class AdventureOnDemand.IslandBasedGameEventOnDemandArrivalTunnelWorker
// Size: 0x188 (Inherited: 0x158)
struct UIslandBasedGameEventOnDemandArrivalTunnelWorker : UGameEventOnDemandArrivalTunnelWorkerBase {
	bool UseSpawnDistanceFromIslandForResurfaceRadius; // 0x158(0x01)
	char UnknownData_159[0x17]; // 0x159(0x17)
	float ResurfaceMaxRadiusModifier; // 0x170(0x04)
	char UnknownData_174[0x14]; // 0x174(0x14)
};

// Class AdventureOnDemand.AggressiveGhostShipsEncounterOnDemandArrivalTunnelWorker
// Size: 0x198 (Inherited: 0x188)
struct UAggressiveGhostShipsEncounterOnDemandArrivalTunnelWorker : UIslandBasedGameEventOnDemandArrivalTunnelWorker {
	char UnknownData_188[0x10]; // 0x188(0x10)
};

// Class AdventureOnDemand.AshenLordEventOnDemandArrivalTunnelWorker
// Size: 0x198 (Inherited: 0x188)
struct UAshenLordEventOnDemandArrivalTunnelWorker : UIslandBasedGameEventOnDemandArrivalTunnelWorker {
	char UnknownData_188[0x10]; // 0x188(0x10)
};

// Class AdventureOnDemand.ContendedResourceGameEventOnDemandArrivalTunnelWorker
// Size: 0x1a0 (Inherited: 0x188)
struct UContendedResourceGameEventOnDemandArrivalTunnelWorker : UIslandBasedGameEventOnDemandArrivalTunnelWorker {
	char UnknownData_188[0x18]; // 0x188(0x18)
};

// Class AdventureOnDemand.SeaFortGameEventOnDemandArrivalTunnelWorker
// Size: 0x1a0 (Inherited: 0x1a0)
struct USeaFortGameEventOnDemandArrivalTunnelWorker : UContendedResourceGameEventOnDemandArrivalTunnelWorker {
};

// Class AdventureOnDemand.SunkenKingdomShrineGameEventOnDemandArrivalTunnelWorker
// Size: 0x1a0 (Inherited: 0x1a0)
struct USunkenKingdomShrineGameEventOnDemandArrivalTunnelWorker : UContendedResourceGameEventOnDemandArrivalTunnelWorker {
};

// Class AdventureOnDemand.SunkenKingdomTreasuryGameEventOnDemandArrivalTunnelWorker
// Size: 0x1a0 (Inherited: 0x1a0)
struct USunkenKingdomTreasuryGameEventOnDemandArrivalTunnelWorker : UContendedResourceGameEventOnDemandArrivalTunnelWorker {
};

// Class AdventureOnDemand.SkellyFortEventOnDemandArrivalTunnelWorker
// Size: 0x198 (Inherited: 0x188)
struct USkellyFortEventOnDemandArrivalTunnelWorker : UIslandBasedGameEventOnDemandArrivalTunnelWorker {
	char UnknownData_188[0x10]; // 0x188(0x10)
};

