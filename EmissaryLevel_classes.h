// Class EmissaryLevel.EmissaryActionRewardBoostComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UEmissaryActionRewardBoostComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
};

// Class EmissaryLevel.EmissaryActiveTableVisualiserComponent
// Size: 0x158 (Inherited: 0xc8)
struct UEmissaryActiveTableVisualiserComponent : UActorComponent {
	struct UClass* TargetCompany; // 0xc8(0x08)
	struct TArray<struct FMaterialVisualisation> MaterialChanges; // 0xd0(0x10)
	char UnknownData_E0[0x10]; // 0xe0(0x10)
	struct TArray<struct FLightVisualisation> LightChanges; // 0xf0(0x10)
	char UnknownData_100[0x10]; // 0x100(0x10)
	struct TArray<struct FParticleVisualisation> ParticleChanges; // 0x110(0x10)
	char UnknownData_120[0x38]; // 0x120(0x38)

	void OnControllerEndPlay(char EndPlayReason); // Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay // Final|Native|Private // @ game+0x4b73290
};

// Class EmissaryLevel.EmissaryColourSwatchSettingsAsset
// Size: 0x38 (Inherited: 0x28)
struct UEmissaryColourSwatchSettingsAsset : UDataAsset {
	struct TArray<struct FEmissaryColourSwatchInformation> ColourSwatchInformation; // 0x28(0x10)
};

// Class EmissaryLevel.EmissaryLevelSettingsAsset
// Size: 0x68 (Inherited: 0x28)
struct UEmissaryLevelSettingsAsset : UDataAsset {
	struct TArray<struct FEmissaryLevelEntry> EmissaryLevelData; // 0x28(0x10)
	struct FEmissaryPointBoostMultipliers BoostMultiplers; // 0x38(0x08)
	struct FEmissaryFlagMeshReferences DefaultEmissaryFlagAssetReferences; // 0x40(0x20)
	uint32_t NumberOfCustomisedShipPartsToGainBoost; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class EmissaryLevel.EmissaryEntitlementCategory
// Size: 0x90 (Inherited: 0x90)
struct UEmissaryEntitlementCategory : UItemCategory {
};

// Class EmissaryLevel.EmissaryEntitlementDesc
// Size: 0xc8 (Inherited: 0xc8)
struct UEmissaryEntitlementDesc : UEntitlementDesc {
};

// Class EmissaryLevel.EmissaryFlotsamDuplicationInterface
// Size: 0x28 (Inherited: 0x28)
struct UEmissaryFlotsamDuplicationInterface : UInterface {
};

// Class EmissaryLevel.EmissaryFlotsamItemInfo
// Size: 0x798 (Inherited: 0x750)
struct AEmissaryFlotsamItemInfo : ABootyItemInfo {
	char UnknownData_750[0x8]; // 0x750(0x08)
	struct FCompanySpecificBootyReward HandInOwnFlotsamReward; // 0x758(0x18)
	struct FCompanySpecificBootyReward AlternateHandInOwnFlotsamReward; // 0x770(0x18)
	struct UClass* PermittedFlotsamPurchaseCompany; // 0x788(0x08)
	bool FlotsamCanBeDuplicated; // 0x790(0x01)
	char UnknownData_791[0x7]; // 0x791(0x07)
};

// Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent
// Size: 0x570 (Inherited: 0x480)
struct UEmissaryFlotsamItemSpawnComponent : UItemSpawnComponent {
	char UnknownData_480[0xa8]; // 0x480(0xa8)
	struct FVector GuildSessionEndedFlotsamOffset; // 0x528(0x0c)
	char UnknownData_534[0x3c]; // 0x534(0x3c)
};

// Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UEmissaryFlotsamTooltipCustomizerComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
	bool CheckForDelivery; // 0xd8(0x01)
	bool CheckForPickup; // 0xd9(0x01)
	bool WonInBattleFlag; // 0xda(0x01)
	char UnknownData_DB[0x15]; // 0xdb(0x15)
};

// Class EmissaryLevel.EmissaryLevelService
// Size: 0x720 (Inherited: 0x3c8)
struct AEmissaryLevelService : AActor {
	char UnknownData_3C8[0xb8]; // 0x3c8(0xb8)
	struct UEmissaryLevelSettingsAsset* Settings; // 0x480(0x08)
	struct UEmissaryRewardSettingsAsset* RewardSettings; // 0x488(0x08)
	struct UGuildSettings* GuildSettings; // 0x490(0x08)
	char UnknownData_498[0x288]; // 0x498(0x288)
};

// Class EmissaryLevel.EmissaryMaxRankQuestProvider
// Size: 0x170 (Inherited: 0xc8)
struct UEmissaryMaxRankQuestProvider : UActorComponent {
	struct UClass* MaxRankQuestNotificationID; // 0xc8(0x08)
	char MaxRankQuestToolTipPriority; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
	struct FText StartMaxRankQuestToolTipText; // 0xd8(0x38)
	struct FText CannotStartMaxRankQuestToolTipText; // 0x110(0x38)
	struct FStringAssetReference QuestDesc; // 0x148(0x10)
	struct TArray<struct FEmissaryMaxRankQuestProviderQuestOverrides> QuestDescOverrides; // 0x158(0x10)
	struct UClass* Company; // 0x168(0x08)
};

// Class EmissaryLevel.EmissaryParticipantComponent
// Size: 0x118 (Inherited: 0xc8)
struct UEmissaryParticipantComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
	struct TArray<struct FMysteriousNotesCompletionEventsModelEntry> NoteCompletionIdents; // 0xd8(0x10)
	char UnknownData_E8[0x10]; // 0xe8(0x10)
	int32_t EmissaryLevel; // 0xf8(0x04)
	float EmissaryLevelProgress; // 0xfc(0x04)
	struct FName AffiliatedCompany; // 0x100(0x08)
	bool IsEmissaryMaxRankQuestBeenActivatedThisSession; // 0x108(0x01)
	char UnknownData_109[0x3]; // 0x109(0x03)
	struct FName VotedCompany; // 0x10c(0x08)
	char UnknownData_114[0x4]; // 0x114(0x04)

	void OnRep_EmissaryLevel(); // Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel // Final|Native|Private // @ game+0x4b733c0
	void OnRep_AffiliatedCompany(struct FName* PreviousId); // Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany // Final|Native|Private|HasOutParms // @ game+0x4b73310
};

// Class EmissaryLevel.EmissaryRepresentationMeshComponent
// Size: 0x630 (Inherited: 0x630)
struct UEmissaryRepresentationMeshComponent : UStaticMeshComponent {
};

// Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent
// Size: 0x350 (Inherited: 0x2e0)
struct UEmissaryShipAffiliationTrackerComponent : USceneComponent {
	struct UClass* TrackedCompany; // 0x2e0(0x08)
	struct UClass* EmissaryRepresentationMesh; // 0x2e8(0x20)
	struct TArray<struct FTransform> EmissaryRepresentationTransforms; // 0x308(0x10)
	struct TArray<struct UStaticMeshComponent*> EmissaryRepresentationMeshes; // 0x318(0x10)
	struct UClass* LoadedEmissaryRepresentationMesh; // 0x328(0x08)
	int32_t EmissaryCount; // 0x330(0x04)
	char UnknownData_334[0x1c]; // 0x334(0x1c)

	void OnRep_EmissaryCount(); // Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount // Final|Native|Private // @ game+0x4b733a0
};

// Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase
// Size: 0x120 (Inherited: 0x30)
struct UEmissaryVoyageInlineVoteConsumerBase : UVoteConsumerInlineBase {
	struct UEmissaryVoyageVoteValidatorBase* Validator; // 0x30(0x08)
	char UnknownData_38[0x48]; // 0x38(0x48)
	struct FText VoyageCinematicHeader; // 0x80(0x38)
	struct FName VoyageCinematicTag; // 0xb8(0x08)
	char UnknownData_C0[0x20]; // 0xc0(0x20)
	struct TArray<struct FCrewMemberVotes> Votes; // 0xe0(0x10)
	char UnknownData_F0[0x20]; // 0xf0(0x20)
	struct AActor* OwningActor; // 0x110(0x08)
	char UnknownData_118[0x8]; // 0x118(0x08)

	void OnRep_Votes(); // Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes // Final|Native|Private // @ game+0x4b733e0
};

// Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer
// Size: 0x330 (Inherited: 0x120)
struct UStartEmissaryVoyageInlineVoteConsumer : UEmissaryVoyageInlineVoteConsumerBase {
	struct FText EmissaryVotingCastVote; // 0x120(0x38)
	struct FText EmissaryVotingCantVote; // 0x158(0x38)
	struct FText EmissaryVotingCantVoteReasonCrewShipOutsideRange; // 0x190(0x38)
	struct FText EmissaryVotingCantVoteReasonNoEmissaryEntitlement; // 0x1c8(0x38)
	struct FText EmissaryVotingCantVoteReasonHasActiveVoteForDifferentCompany; // 0x200(0x38)
	struct FText EmissaryVotingCantVoteReasonOnOpposingFaction; // 0x238(0x38)
	struct FText EmissaryVotingCantVoteReasonSaferSeas; // 0x270(0x38)
	struct FText EmissaryVotingRemoveVote; // 0x2a8(0x38)
	struct FText EmissaryVotingCantRemoveVote; // 0x2e0(0x38)
	char UnknownData_318[0x18]; // 0x318(0x18)
};

// Class EmissaryLevel.StartGuildEmissaryVoyageInlineVoteConsumer
// Size: 0x3d0 (Inherited: 0x330)
struct UStartGuildEmissaryVoyageInlineVoteConsumer : UStartEmissaryVoyageInlineVoteConsumer {
	struct FText GuildEmissaryVotingCantVoteReasonGuildEmissaryNotUnlocked; // 0x330(0x38)
	struct FText GuildEmissaryVotingCantVoteReasonNoGuildShip; // 0x368(0x38)
	char UnknownData_3A0[0x30]; // 0x3a0(0x30)
};

// Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer
// Size: 0x2f8 (Inherited: 0x120)
struct UStopEmissaryVoyageInlineVoteConsumer : UEmissaryVoyageInlineVoteConsumerBase {
	struct FText EmissaryVotingCastVote; // 0x120(0x38)
	struct FText EmissaryVotingCastVoteWithVoyageRemovalWarning; // 0x158(0x38)
	struct FText VoyageRemovalWarning; // 0x190(0x38)
	struct FText EmissaryVotingCantVote; // 0x1c8(0x38)
	struct FText EmissaryVotingCantVoteReasonCrewShipOutsideRange; // 0x200(0x38)
	struct FText EmissaryVotingCantVoteReasonActiveForDifferentCompany; // 0x238(0x38)
	struct FText EmissaryVotingRemoveVote; // 0x270(0x38)
	struct FText EmissaryVotingCantRemoveVote; // 0x2a8(0x38)
	char UnknownData_2E0[0x18]; // 0x2e0(0x18)
};

// Class EmissaryLevel.StopGuildEmissaryVoyageInlineVoteConsumer
// Size: 0x328 (Inherited: 0x2f8)
struct UStopGuildEmissaryVoyageInlineVoteConsumer : UStopEmissaryVoyageInlineVoteConsumer {
	char UnknownData_2F8[0x30]; // 0x2f8(0x30)
};

// Class EmissaryLevel.EmissaryVoyageVoteValidatorBase
// Size: 0xf0 (Inherited: 0x30)
struct UEmissaryVoyageVoteValidatorBase : UVoteValidatorInlineBase {
	char ValidatorType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct UClass* RequiredEntitlement; // 0x38(0x08)
	bool BlockDuringSaferSeas; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	char IsValidatorTypeEntitlement : 1; // 0x44(0x01)
	char UnknownData_44_1 : 7; // 0x44(0x01)
	char UnknownData_45[0x93]; // 0x45(0x93)
	struct UClass* TargetCompany; // 0xd8(0x08)
	struct UEmissaryVoyageInlineVoteConsumerBase* Consumer; // 0xe0(0x08)
	struct UGuildSettings* GuildSettings; // 0xe8(0x08)
};

// Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator
// Size: 0xf0 (Inherited: 0xf0)
struct UStartEmissaryVoyageInlineVoteValidator : UEmissaryVoyageVoteValidatorBase {
};

// Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator
// Size: 0xf0 (Inherited: 0xf0)
struct UStopEmissaryVoyageInlineVoteValidator : UEmissaryVoyageVoteValidatorBase {
};

// Class EmissaryLevel.IncreasingAGradeWithAnEmissaryConditionalStatTrigger
// Size: 0x30 (Inherited: 0x30)
struct UIncreasingAGradeWithAnEmissaryConditionalStatTrigger : UConditionalStatsTriggerType {
};

// Class EmissaryLevel.IsAnEmissaryStatCondition
// Size: 0x30 (Inherited: 0x30)
struct UIsAnEmissaryStatCondition : UTargetedStatCondition {
};

// Class EmissaryLevel.IsEmissaryStatCondition
// Size: 0x38 (Inherited: 0x28)
struct UIsEmissaryStatCondition : UStatCondition {
	struct UClass* RequiredEmissaryCompany; // 0x28(0x08)
	bool RequiresMaxEmissaryLevel; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class EmissaryLevel.EmissaryLevelServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UEmissaryLevelServiceInterface : UInterface {
};

// Class EmissaryLevel.EmissaryParticipantInterface
// Size: 0x28 (Inherited: 0x28)
struct UEmissaryParticipantInterface : UInterface {
};

// Class EmissaryLevel.EmissaryRewardCampaignSettingsAsset
// Size: 0x38 (Inherited: 0x28)
struct UEmissaryRewardCampaignSettingsAsset : UDataAsset {
	struct TArray<struct FEmissaryCompanyCampaignSettings> Companies; // 0x28(0x10)
};

// Class EmissaryLevel.EmissaryRewardSettingsAsset
// Size: 0x48 (Inherited: 0x28)
struct UEmissaryRewardSettingsAsset : UDataAsset {
	struct TArray<struct FEmissaryRewardEntry> EmissaryRewardData; // 0x28(0x10)
	float PlayerKilledExpiryTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct UEmissaryRewardCampaignSettingsAsset* CampaignSettings; // 0x40(0x08)
};

