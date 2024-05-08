// Class CompetitiveVoyages.CompetitiveVoyageItemRelocationVolume
// Size: 0x650 (Inherited: 0x3c8)
struct ACompetitiveVoyageItemRelocationVolume : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct USceneComponent* SceneComponentRoot; // 0x3d0(0x08)
	struct UBoxComponent* TriggerVolume; // 0x3d8(0x08)
	struct TArray<struct FVector> RelocationPositions; // 0x3e0(0x10)
	bool RelocatesIntoWater; // 0x3f0(0x01)
	char UnknownData_3F1[0x25f]; // 0x3f1(0x25f)

	void OnTriggerVolumeEndOverlap(struct AActor** OtherActor, struct UPrimitiveComponent** OtherComp, int32_t* OtherBodyIndex); // Function CompetitiveVoyages.CompetitiveVoyageItemRelocationVolume.OnTriggerVolumeEndOverlap // Final|Native|Protected // @ game+0x4cff070
	void OnTriggerVolumeBeginOverlap(struct AActor** OtherActor, struct UPrimitiveComponent** OtherComp, int32_t* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult); // Function CompetitiveVoyages.CompetitiveVoyageItemRelocationVolume.OnTriggerVolumeBeginOverlap // Final|Native|Protected|HasOutParms // @ game+0x4cfeeb0
};

// Class CompetitiveVoyages.CompetitiveVoyageLockComponent
// Size: 0x368 (Inherited: 0x368)
struct UCompetitiveVoyageLockComponent : ULockComponent {
};

// Class CompetitiveVoyages.CompetitiveVoyagesServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UCompetitiveVoyagesServiceInterface : UInterface {
};

// Class CompetitiveVoyages.CompetitiveVoyagesService
// Size: 0x8b0 (Inherited: 0x3c8)
struct ACompetitiveVoyagesService : AActor {
	char UnknownData_3C8[0x108]; // 0x3c8(0x108)
	struct TArray<struct FGuid> MainVoyageCrews; // 0x4d0(0x10)
	struct UCompetitiveVoyagesServiceParams* ServiceParams; // 0x4e0(0x08)
	char UnknownData_4E8[0x2a0]; // 0x4e8(0x2a0)
	struct TArray<struct FCompetitiveVoyageEventItem> VoyageEventItems; // 0x788(0x10)
	char UnknownData_798[0x118]; // 0x798(0x118)
};

// Class CompetitiveVoyages.CompetitiveVoyagesServiceParams
// Size: 0x160 (Inherited: 0x28)
struct UCompetitiveVoyagesServiceParams : UDataAsset {
	struct UVoyageDescDataAsset* OptInVoyageDesc; // 0x28(0x08)
	struct UVoyageDescDataAsset* MainVoyageDesc; // 0x30(0x08)
	struct UNPCOnShipDataAsset* OptOutNoteDataAsset; // 0x38(0x08)
	struct FCompetitiveVoyagesRespawnConfig RespawnConfig; // 0x40(0x108)
	struct FShipSpeedCurseModifyingValues ShipSpeedCurseModifyingValues; // 0x148(0x0c)
	float OptOutDelay; // 0x154(0x04)
	struct FPlayerStat SinkShipWithVoyageItemAchievementStat; // 0x158(0x04)
	char UnknownData_15C[0x4]; // 0x15c(0x04)
};

// Class CompetitiveVoyages.CompetitiveVoyageVoteConsumerBase
// Size: 0xc8 (Inherited: 0x30)
struct UCompetitiveVoyageVoteConsumerBase : UVoteConsumerInlineBase {
	char UnknownData_30[0x10]; // 0x30(0x10)
	struct UCompetitiveVoyageVoteValidatorBase* Validator; // 0x40(0x08)
	char UnknownData_48[0x48]; // 0x48(0x48)
	struct AActor* OwningActor; // 0x90(0x08)
	struct UActorComponent* OwningComponent; // 0x98(0x08)
	struct TArray<struct FCrewMemberVotes> Votes; // 0xa0(0x10)
	char UnknownData_B0[0x18]; // 0xb0(0x18)

	void OnRep_Votes(struct TArray<struct FCrewMemberVotes>* PreviousVotes); // Function CompetitiveVoyages.CompetitiveVoyageVoteConsumerBase.OnRep_Votes // Final|RequiredAPI|Native|Private|HasOutParms // @ game+0x4cfede0
};

// Class CompetitiveVoyages.StopCompetitiveVoyageVoteConsumer
// Size: 0x1a8 (Inherited: 0xc8)
struct UStopCompetitiveVoyageVoteConsumer : UCompetitiveVoyageVoteConsumerBase {
	struct FText CompetitiveVoyageCastOptOutVoteText; // 0xc8(0x38)
	struct FText CompetitiveVoyageCantCastOptOutVoteText; // 0x100(0x38)
	struct FText CompetitiveVoyageRemoveOptOutVoteText; // 0x138(0x38)
	struct FText CompetitiveVoyageCantRemoveOptOutVoteText; // 0x170(0x38)
};

// Class CompetitiveVoyages.CompetitiveVoyageVoteValidatorBase
// Size: 0xb8 (Inherited: 0x30)
struct UCompetitiveVoyageVoteValidatorBase : UVoteValidatorInlineBase {
	struct TArray<struct UClass*> TargetCompanies; // 0x30(0x10)
	float EdgeOfWorldWarningWeightForFactionLock; // 0x40(0x04)
	char UnknownData_44[0x5c]; // 0x44(0x5c)
	struct UCompetitiveVoyageVoteConsumerBase* Consumer; // 0xa0(0x08)
	int32_t CurrentCompany; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
	struct AActor* OwningActor; // 0xb0(0x08)
};

// Class CompetitiveVoyages.StopCompetitiveVoyageVoteValidator
// Size: 0xc0 (Inherited: 0xb8)
struct UStopCompetitiveVoyageVoteValidator : UCompetitiveVoyageVoteValidatorBase {
	bool IsOptInNote; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
};

// Class CompetitiveVoyages.DiscombobulatedStatus
// Size: 0x30 (Inherited: 0x30)
struct UDiscombobulatedStatus : UStatusBase {
};

// Class CompetitiveVoyages.MigrationDuplicatedActor
// Size: 0x3c8 (Inherited: 0x3c8)
struct AMigrationDuplicatedActor : AActor {
};

// Class CompetitiveVoyages.SetCrewOptInNPCDataStep
// Size: 0x98 (Inherited: 0x98)
struct USetCrewOptInNPCDataStep : UTaleQuestStep {
};

// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesService
// Size: 0x258 (Inherited: 0x60)
struct UTaleQuestCompetitiveVoyagesService : UTaleQuestService {
	char UnknownData_60[0x88]; // 0x60(0x88)
	struct TArray<struct FPhasedMarkerItem> PhasedMarkerItems; // 0xe8(0x10)
	char UnknownData_F8[0x160]; // 0xf8(0x160)
};

// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestCompetitiveVoyagesServiceDesc : UTaleQuestServiceDesc {
};

// Class CompetitiveVoyages.SetCrewOptInNPCDataStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct USetCrewOptInNPCDataStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor Actor; // 0x80(0x30)
};

// Class CompetitiveVoyages.SkullOfSirenSongDamagerType
// Size: 0x28 (Inherited: 0x28)
struct USkullOfSirenSongDamagerType : UDamagerType {
};

// Class CompetitiveVoyages.SonicStatus
// Size: 0x30 (Inherited: 0x30)
struct USonicStatus : UStatusBase {
};

// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestCompetitiveVoyagesFunctionStepLibrary : UTaleQuestFunctionStepLibrary {

	bool ShowIntroToastForCrew(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.ShowIntroToastForCrew // Final|Native|Public|Const // @ game+0x4cff600
	void SetTreasureHuntItemFound(struct AActor* FindingActor); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetTreasureHuntItemFound // Final|Native|Public|Const // @ game+0x4cff580
	void SetPhasedMarkerManager(struct AActor* InMarkerManager); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetPhasedMarkerManager // Final|Native|Public // @ game+0x4cff500
	void SetMainVoyageState(char InState); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetMainVoyageState // Final|Native|Public|Const // @ game+0x4cff480
	void SetHandInNPC(struct AActor* InNPC); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetHandInNPC // Final|Native|Public // @ game+0x4cff400
	void SetCompetitiveVoyageState(char InState); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetCompetitiveVoyageState // Final|Native|Public|Const // @ game+0x4cff380
	void RemoveVoyageItem(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemoveVoyageItem // Final|Native|Public // @ game+0x4cff300
	void RemoveVoyageIsland(struct FName InIslandName); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemoveVoyageIsland // Final|Native|Public|HasOutParms // @ game+0x4cff270
	void RemovePhasedMarkerItem(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemovePhasedMarkerItem // Final|Native|Public // @ game+0x4cff1f0
	void RemovePhasedMapMarker(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemovePhasedMapMarker // Final|Native|Public // @ game+0x4cff170
	int32_t GetNumTreasureHuntItemsFound(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetNumTreasureHuntItemsFound // Final|Native|Public|Const // @ game+0x4cfed10
	char GetMainVoyageState(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetMainVoyageState // Final|Native|Public|Const // @ game+0x4cfece0
	struct FGuid GetEventId(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetEventId // Final|Native|Public|HasDefaults|Const // @ game+0x4cfeca0
	struct TArray<struct FName> GetCompetitiveVoyageIslandsToIgnore(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetCompetitiveVoyageIslandsToIgnore // Final|Native|Public|Const // @ game+0x4cfec00
	struct FVector GetAverageShipLocationForVoyage(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetAverageShipLocationForVoyage // Final|Native|Public|HasDefaults|Const // @ game+0x4cfebc0
	void CreatePhasedMapMarkerService(struct UClass** InClass); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.CreatePhasedMapMarkerService // Final|Native|Public // @ game+0x4cfeb40
	void AddVoyageItem(struct AActor** InItemInfo, bool* WantsBeacon, bool* WantsMapMarker); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddVoyageItem // Final|Native|Public // @ game+0x4cfea30
	void AddVoyageIsland(struct FName* InIslandName); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddVoyageIsland // Final|Native|Public|HasOutParms // @ game+0x4cfe9a0
	void AddPhasedMarkerItem(struct AActor** InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddPhasedMarkerItem // Final|Native|Public // @ game+0x4cfe920
	void AddPhasedMapMarker(struct AActor** InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddPhasedMapMarker // Final|Native|Public // @ game+0x4cfe8a0
};

// Class CompetitiveVoyages.WaitForCompVoyageOptInStep
// Size: 0xf0 (Inherited: 0x98)
struct UWaitForCompVoyageOptInStep : UTaleQuestStep {
	char UnknownData_98[0x58]; // 0x98(0x58)

	void OnOptIn(struct FGuid InCrewId); // Function CompetitiveVoyages.WaitForCompVoyageOptInStep.OnOptIn // Final|Native|Private|HasOutParms|HasDefaults // @ game+0x4cfed40
};

// Class CompetitiveVoyages.WaitForCompVoyageOptInStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UWaitForCompVoyageOptInStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableGuid NPCOnShipManager; // 0x80(0x30)
	struct FQuestVariableActor NPCActor; // 0xb0(0x30)
};

