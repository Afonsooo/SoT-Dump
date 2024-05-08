// Class GameEventsOnDemandFramework.GameEventAvailabilityParamsDataAsset
// Size: 0x90 (Inherited: 0x28)
struct UGameEventAvailabilityParamsDataAsset : UDataAsset {
	struct FWeightedProbabilityRangeOfRanges MatchmakingCooldownRanges; // 0x28(0x30)
	struct FWeightedProbabilityRange CrewsJoinedOnDemandLimitRange; // 0x58(0x20)
	float InitialCooldown; // 0x78(0x04)
	int32_t ProgressStateLimit; // 0x7c(0x04)
	bool ShouldApplyShipTypeLimit; // 0x80(0x01)
	bool ShouldManageEmergentCrewsOnDeactivate; // 0x81(0x01)
	char UnknownData_82[0x2]; // 0x82(0x02)
	float EmergentCrewLeftRegionCooldown; // 0x84(0x04)
	bool SendCrewToLoserTunnelOnShipSinking; // 0x88(0x01)
	bool ShouldCompletedBannersPlayAudio; // 0x89(0x01)
	char UnknownData_8A[0x2]; // 0x8a(0x02)
	float ActiveEventExclusionRadiusFromIslandDistanceRadiusModifier; // 0x8c(0x04)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandAvailabilityHandler
// Size: 0x178 (Inherited: 0x28)
struct UGameEventOnDemandAvailabilityHandler : UObject {
	struct UGameEventAvailabilityParamsDataAsset* AvailabilityParamsAsset; // 0x28(0x08)
	struct UGameEventOnDemandAvailabilityStateTracker* AvailabilityStateTracker; // 0x30(0x08)
	struct UClass* GameEventType; // 0x38(0x08)
	char UnknownData_40[0x60]; // 0x40(0x60)
	char CompletedState; // 0xa0(0x01)
	char UnknownData_A1[0xd7]; // 0xa1(0xd7)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandAvailabilityStateTracker
// Size: 0x160 (Inherited: 0x28)
struct UGameEventOnDemandAvailabilityStateTracker : UObject {
	char UnknownData_28[0x88]; // 0x28(0x88)
	struct UClass* ShipTypeLimit; // 0xb0(0x08)
	struct TArray<struct FGuid> OnDemandParticipatingCrewIds; // 0xb8(0x10)
	struct TArray<struct FGuid> EmergentlyParticipatingCrewIds; // 0xc8(0x10)
	char UnknownData_D8[0x88]; // 0xd8(0x88)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandVoyageProposalDesc
// Size: 0x138 (Inherited: 0x138)
struct UGameEventOnDemandVoyageProposalDesc : UVoyageProposalDesc {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandAvailabilityServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandAvailabilityServiceInterface : UInterface {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandInstanceInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandInstanceInterface : UInterface {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandInterface : UInterface {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandLoserTunnelServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandLoserTunnelServiceInterface : UInterface {
};

// Class GameEventsOnDemandFramework.WaitForGameEventOnDemandToCompleteStep
// Size: 0x128 (Inherited: 0x98)
struct UWaitForGameEventOnDemandToCompleteStep : UTaleQuestStep {
	char UnknownData_98[0x90]; // 0x98(0x90)
};

// Class GameEventsOnDemandFramework.WaitForGameEventOnDemandToCompleteStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UWaitForGameEventOnDemandToCompleteStepDesc : UTaleQuestStepDesc {
};

