// Class Tales.TaleQuestStep
// Size: 0x98 (Inherited: 0x28)
struct UTaleQuestStep : UObject {
	char UnknownData_28[0x60]; // 0x28(0x60)
	struct UTaleQuestStepDesc* TaleStepDesc; // 0x88(0x08)
	char UnknownData_90[0x8]; // 0x90(0x08)
};

// Class Tales.TaleQuestService
// Size: 0x60 (Inherited: 0x28)
struct UTaleQuestService : UObject {
	char UnknownData_28[0x38]; // 0x28(0x38)
};

// Class Tales.TaleQuestServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestServiceDesc : UObject {
};

// Class Tales.TaleQuestStepDesc
// Size: 0x80 (Inherited: 0x28)
struct UTaleQuestStepDesc : UObject {
	bool Fork; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct TMap<struct FName, struct FQuestVariableAny> PromotedPropertyVariables; // 0x30(0x50)
};

// Class Tales.TaleQuestRunnableStepDesc
// Size: 0xe8 (Inherited: 0x80)
struct UTaleQuestRunnableStepDesc : UTaleQuestStepDesc {
	char UnknownData_80[0x68]; // 0x80(0x68)
};

// Class Tales.TaleQuestFunctionStepLibrary
// Size: 0x180 (Inherited: 0xe8)
struct UTaleQuestFunctionStepLibrary : UTaleQuestRunnableStepDesc {
	char UnknownData_E8[0x8]; // 0xe8(0x08)
	struct UFunction* Function; // 0xf0(0x08)
	struct TMap<struct FName, struct FQuestVariable> ParameterMappings; // 0xf8(0x50)
	char UnknownData_148[0x30]; // 0x148(0x30)
	char FunctionStepFlags; // 0x178(0x01)
	char UnknownData_179[0x7]; // 0x179(0x07)
};

// Class Tales.TaleMigrationAction
// Size: 0x28 (Inherited: 0x28)
struct UTaleMigrationAction : UObject {
};

// Class Tales.TaleQuestFramedStep
// Size: 0xf8 (Inherited: 0x98)
struct UTaleQuestFramedStep : UTaleQuestStep {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct TArray<struct UTaleQuestService*> Services; // 0xa0(0x10)
	struct UTaleQuestFramedStepDesc* FrameDesc; // 0xb0(0x08)
	struct FUserDefinedStructWithSerialisableValue Variables; // 0xb8(0x20)
	struct FUserDefinedStructWithSerialisableValue LocalVariables; // 0xd8(0x20)
};

// Class Tales.TaleQuestFramedStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct UTaleQuestFramedStepDesc : UTaleQuestStepDesc {
	struct TArray<struct UTaleQuestServiceDesc*> Services; // 0x80(0x10)
	struct FUserDefinedStructWithSerialisableValue VariablesWithDefaults; // 0x90(0x20)
	struct FInlineUserDefinedStructDetails GeneratedVariables; // 0xb0(0x08)
};

// Class Tales.ContendedResourceComponent
// Size: 0x108 (Inherited: 0xc8)
struct UContendedResourceComponent : UActorComponent {
	char UnknownData_C8[0x40]; // 0xc8(0x40)
};

// Class Tales.EnvQueryContext_TaleContextBase
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_TaleContextBase : UEnvQueryContext {
};

// Class Tales.IslandTypeWeightsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UIslandTypeWeightsDataAsset : UDataAsset {
	struct TArray<struct FIslandTypeWeights> IslandTypeWeightsForDifficultyRanks; // 0x28(0x10)
};

// Class Tales.TaleQuestExpressionInterface
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestExpressionInterface : UInterface {
};

// Class Tales.TaleQuestStepInterface
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestStepInterface : UInterface {

	void Signal(); // Function Tales.TaleQuestStepInterface.Signal // Native|Public // @ game+0x47b9e50
};

// Class Tales.ShroudBreakerServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UShroudBreakerServiceInterface : UInterface {
};

// Class Tales.SplineFootprintPathComponent
// Size: 0x670 (Inherited: 0x650)
struct USplineFootprintPathComponent : USplineComponent {
	float DistanceBetweenDecals; // 0x648(0x04)
	struct UMaterialInterface* DecalMaterial; // 0x650(0x08)
	struct FSplineFootprintPathTool PathTool; // 0x658(0x01)
	float DecalYaw; // 0x65c(0x04)
	struct FVector DecalUniformScale; // 0x660(0x0c)
	char UnknownData_66D[0x3]; // 0x66d(0x03)
};

// Class Tales.StartTallTaleConditionalStatTrigger
// Size: 0x30 (Inherited: 0x30)
struct UStartTallTaleConditionalStatTrigger : UConditionalStatsTriggerType {
};

// Class Tales.TaleQuestArrayEntrySelectionStrategy
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestArrayEntrySelectionStrategy : UObject {
};

// Class Tales.FixedArrayEntrySelectionStrategy
// Size: 0x30 (Inherited: 0x28)
struct UFixedArrayEntrySelectionStrategy : UTaleQuestArrayEntrySelectionStrategy {
	int32_t IndexToSelect; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Tales.RandomArrayEntrySelectionStrategy
// Size: 0x28 (Inherited: 0x28)
struct URandomArrayEntrySelectionStrategy : UTaleQuestArrayEntrySelectionStrategy {
};

// Class Tales.SequentialArrayEntrySelectionStrategy
// Size: 0x30 (Inherited: 0x28)
struct USequentialArrayEntrySelectionStrategy : UTaleQuestArrayEntrySelectionStrategy {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class Tales.TaleQuestCargoRunContract
// Size: 0xe8 (Inherited: 0x28)
struct UTaleQuestCargoRunContract : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct FMulticastDelegate OnCompleted; // 0x38(0x10)
	struct FMulticastDelegate OnDelivered; // 0x48(0x10)
	struct FMulticastDelegate OnCollected; // 0x58(0x10)
	struct TArray<struct FTaleQuestCargoRunContractItem> ItemsToCollect; // 0x68(0x10)
	char UnknownData_78[0x10]; // 0x78(0x10)
	struct AActor* DeliverToNPC; // 0x88(0x08)
	struct AActor* CollectFromNPC; // 0x90(0x08)
	char UnknownData_98[0x50]; // 0x98(0x50)
};

// Class Tales.TaleQuestCargoRunContractsService
// Size: 0xa8 (Inherited: 0x60)
struct UTaleQuestCargoRunContractsService : UTaleQuestService {
	struct TArray<struct UTaleQuestCargoRunContract*> Contracts; // 0x60(0x10)
	char UnknownData_70[0x38]; // 0x70(0x38)

	struct UTaleQuestCargoRunContract* GetContract(struct FGuid Guid); // Function Tales.TaleQuestCargoRunContractsService.GetContract // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x47b53e0
	struct FGuid AddContract(struct TArray<struct UClass*> InItems, struct AActor* InCollectFromNPC, struct AActor* InDeliverToNPC, int32_t InTimeLimitInMinutes, struct FText InDeliveryHintLocationText); // Function Tales.TaleQuestCargoRunContractsService.AddContract // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x47b2bc0
};

// Class Tales.TaleQuestCompoundStepInterface
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestCompoundStepInterface : UInterface {
};

// Class Tales.TaleQuestIndexedFrame
// Size: 0x88 (Inherited: 0x28)
struct UTaleQuestIndexedFrame : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UTaleQuestForEachStepDescBase* Desc; // 0x30(0x08)
	int32_t Index; // 0x38(0x04)
	char UnknownData_3C[0x4c]; // 0x3c(0x4c)
};

// Class Tales.TaleQuestMerchantContract
// Size: 0x88 (Inherited: 0x28)
struct UTaleQuestMerchantContract : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct FMulticastDelegate OnCompleted; // 0x38(0x10)
	struct FMulticastDelegate OnExpired; // 0x48(0x10)
	struct FMulticastDelegate OnDelivered; // 0x58(0x10)
	struct FMulticastDelegate OnCollected; // 0x68(0x10)
	struct FMulticastDelegate OnAllocated; // 0x78(0x10)
};

// Class Tales.TaleQuestMerchantContractsService
// Size: 0x70 (Inherited: 0x60)
struct UTaleQuestMerchantContractsService : UTaleQuestService {
	struct TArray<struct UTaleQuestMerchantContract*> Contracts; // 0x60(0x10)

	struct UTaleQuestMerchantContract* GetContract(struct FGuid Guid); // Function Tales.TaleQuestMerchantContractsService.GetContract // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x47b5480
	struct FGuid AddContract(struct TArray<struct FTaleQuestDeliveryRequest> Requests, struct FName InDeliveryDestination, float InTimeLimit); // Function Tales.TaleQuestMerchantContractsService.AddContract // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x47b2de0
};

// Class Tales.TaleQuestPhaseBranchSelectorPredicateBase
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestPhaseBranchSelectorPredicateBase : UObject {
};

// Class Tales.NumPlayerStatsFromListPhaseBranchSelector
// Size: 0x50 (Inherited: 0x28)
struct UNumPlayerStatsFromListPhaseBranchSelector : UTaleQuestPhaseBranchSelectorPredicateBase {
	struct TArray<struct FPlayerStat> UniqueStats; // 0x28(0x10)
	char UnknownData_38[0x18]; // 0x38(0x18)
};

// Class Tales.PlayerHasStatsPhaseBranchSelector
// Size: 0x50 (Inherited: 0x50)
struct UPlayerHasStatsPhaseBranchSelector : UNumPlayerStatsFromListPhaseBranchSelector {
};

// Class Tales.TaleQuestQueryableStateDataID
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestQueryableStateDataID : UObject {
};

// Class Tales.TaleQuestQueryableStateCanAllDataBeReadNPCDialogConditional
// Size: 0x48 (Inherited: 0x30)
struct UTaleQuestQueryableStateCanAllDataBeReadNPCDialogConditional : UNPCDialogConditional {
	struct TArray<struct UClass*> AllDataToCheck; // 0x30(0x10)
	bool ExpectedValue; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class Tales.TaleQuestQueryableStateCanAnyDataBeReadNPCDialogConditional
// Size: 0x48 (Inherited: 0x30)
struct UTaleQuestQueryableStateCanAnyDataBeReadNPCDialogConditional : UNPCDialogConditional {
	struct TArray<struct UClass*> AllDataToCheck; // 0x30(0x10)
	bool ExpectedValue; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class Tales.TaleQuestQueryableStateReadAllValueBoolNPCDialogConditional
// Size: 0x48 (Inherited: 0x30)
struct UTaleQuestQueryableStateReadAllValueBoolNPCDialogConditional : UNPCDialogConditional {
	struct TArray<struct UClass*> AllDataToCheck; // 0x30(0x10)
	bool ExpectedValue; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class Tales.TaleQuestQueryableStateReadAnyValueBoolNPCDialogConditional
// Size: 0x48 (Inherited: 0x30)
struct UTaleQuestQueryableStateReadAnyValueBoolNPCDialogConditional : UNPCDialogConditional {
	struct TArray<struct UClass*> AllDataToCheck; // 0x30(0x10)
	bool ExpectedValue; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class Tales.TaleQuestQueryableStateReadValueIntNPCDialogConditional
// Size: 0x40 (Inherited: 0x30)
struct UTaleQuestQueryableStateReadValueIntNPCDialogConditional : UNPCDialogConditional {
	struct UClass* DataID; // 0x30(0x08)
	int32_t ExpectedValue; // 0x38(0x04)
	char ComparisonToExpectedValue; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
};

// Class Tales.TaleQuestQueryableStatesReadInterface
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestQueryableStatesReadInterface : UInterface {

	bool ReadDataInt(struct UClass* DataID, int32_t OutDataContent); // Function Tales.TaleQuestQueryableStatesReadInterface.ReadDataInt // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x47b8da0
	bool ReadDataBool(struct UClass* DataID, bool OutDataContent); // Function Tales.TaleQuestQueryableStatesReadInterface.ReadDataBool // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x47b8cb0
	bool CanDataBeRead(struct UClass* DataID); // Function Tales.TaleQuestQueryableStatesReadInterface.CanDataBeRead // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x47b3b30
};

// Class Tales.TaleQuestQueryableStatesWriteInterface
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestQueryableStatesWriteInterface : UInterface {
};

// Class Tales.TaleQuestQueryableStatesAccessComponent
// Size: 0xe8 (Inherited: 0xc8)
struct UTaleQuestQueryableStatesAccessComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
	struct TArray<struct FTaleQuestQueryableStateDataInfo> TalesData; // 0xd8(0x10)
};

// Class Tales.TaleQuestQueryableStatesQuantityReaderInterface
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestQueryableStatesQuantityReaderInterface : UInterface {
};

// Class Tales.TaleQuestQueryableStatesQuantityContainerComponent
// Size: 0xe8 (Inherited: 0xc8)
struct UTaleQuestQueryableStatesQuantityContainerComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UClass* QuantityDataID; // 0xd0(0x08)
	struct UClass* OptionalCapacityOverrideDataID; // 0xd8(0x08)
	int32_t Capacity; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
};

// Class Tales.TaleQuestImportFrame
// Size: 0xc0 (Inherited: 0x38)
struct UTaleQuestImportFrame : UTaleQuestRootFrame {
	char UnknownData_38[0x88]; // 0x38(0x88)
};

// Class Tales.TaleQuestSeasonNotificationDataAsset
// Size: 0xc8 (Inherited: 0x28)
struct UTaleQuestSeasonNotificationDataAsset : UDataAsset {
	struct FSeasonTextPopupAsset SeasonTextPopupAsset; // 0x28(0xa0)
};

// Class Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestSelectorServiceBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void SetDebugVoyageSeed(int32_t Seed); // Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed // Final|Native|Static|Public|BlueprintCallable // @ game+0x47b92f0
	void ResetVoyageDebugSeed(); // Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed // Final|Native|Static|Public|BlueprintCallable // @ game+0x47b9140
};

// Class Tales.CutsceneResponsesTaleService
// Size: 0x90 (Inherited: 0x60)
struct UCutsceneResponsesTaleService : UTaleQuestService {
	struct TArray<struct UCutsceneResponseCoordinator*> TrackedResponseCoordinators; // 0x60(0x10)
	struct TArray<struct UCutsceneResponseComponent*> TrackedResponseComponents; // 0x70(0x10)
	struct TArray<struct AActor*> ResponseRelevantActors; // 0x80(0x10)

	void TrackResponseCoordinator(struct UCutsceneResponseCoordinator* Coordinator); // Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x47bb360
	struct UCutsceneResponseSheet* StartCutsceneResponseSheet(struct AActor* TargetActor, TScriptInterface<struct UCutsceneResponsePlayerInterface> CutsceneResponsePlayer, struct UClass* ResponseSheetClass); // Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x47ba4e0
	void ClearAllActiveResponseSheets(); // Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x47b3cf0
	void AddResponseSheetRelevantActor(struct AActor* Actor); // Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x47b3200
};

// Class Tales.GameEventBlockingTaleService
// Size: 0x98 (Inherited: 0x60)
struct UGameEventBlockingTaleService : UTaleQuestService {
	char UnknownData_60[0x38]; // 0x60(0x38)
};

// Class Tales.GameEventExclusionZoneTaleService
// Size: 0x88 (Inherited: 0x60)
struct UGameEventExclusionZoneTaleService : UTaleQuestService {
	struct TArray<struct FGameEventExclusionZone> EventExclusionZones; // 0x60(0x10)
	char UnknownData_70[0x18]; // 0x70(0x18)
};

// Class Tales.RewardGenTaleQuestService
// Size: 0x90 (Inherited: 0x60)
struct URewardGenTaleQuestService : UTaleQuestService {
	struct UTaleQuestWeightedItemDescSpawnDataAsset* GlobalSpawnData; // 0x60(0x08)
	struct TArray<int32_t> ValidSpawnData; // 0x68(0x10)
	struct TArray<struct UItemSpawnData*> ItemsToSpawn; // 0x78(0x10)
	char UnknownData_88[0x8]; // 0x88(0x08)
};

// Class Tales.TaleQuestActorOfInterestService
// Size: 0x98 (Inherited: 0x60)
struct UTaleQuestActorOfInterestService : UTaleQuestService {
	struct UTaleQuestActorOfInterestServiceDesc* Desc; // 0x60(0x08)
	char UnknownData_68[0x30]; // 0x68(0x30)
};

// Class Tales.TaleQuestActorService
// Size: 0x3d0 (Inherited: 0x60)
struct UTaleQuestActorService : UTaleQuestService {
	struct TArray<struct FTrackedActorData> TrackedActors; // 0x60(0x10)
	struct TArray<struct FCriticalActorDelegateData> CriticalActors; // 0x70(0x10)
	struct TArray<struct FSnapshottedActorData> SnapshottedActors; // 0x80(0x10)
	struct UTaleQuestActorServiceDesc* Desc; // 0x90(0x08)
	struct APhasedClusterRoot* PhasedClusterRoot; // 0x98(0x08)
	struct TArray<struct FPhasedActor> PhasedActors; // 0xa0(0x10)
	struct TArray<struct FPhasedItem> PhasedItems; // 0xb0(0x10)
	struct FText CriticalActorHandedInByAnotherCrewFailureMessage; // 0xc0(0x38)
	char UnknownData_F8[0x2d8]; // 0xf8(0x2d8)
};

// Class Tales.TaleQuestCheckpointService
// Size: 0xa8 (Inherited: 0x60)
struct UTaleQuestCheckpointService : UTaleQuestService {
	struct UTaleQuestCheckpointServiceDesc* Desc; // 0x60(0x08)
	char UnknownData_68[0x40]; // 0x68(0x40)
};

// Class Tales.TaleQuestCrewGameEventBlockingTaleService
// Size: 0xa0 (Inherited: 0x60)
struct UTaleQuestCrewGameEventBlockingTaleService : UTaleQuestService {
	char UnknownData_60[0x38]; // 0x60(0x38)
	struct UTaleQuestCrewGameEventBlockingTaleServiceDesc* ServiceDesc; // 0x98(0x08)
};

// Class Tales.TaleQuestEQSService
// Size: 0x138 (Inherited: 0x60)
struct UTaleQuestEQSService : UTaleQuestService {
	char UnknownData_60[0xd8]; // 0x60(0xd8)

	void AddVectorParam(struct FName ParamName, struct FVector VectorParam); // Function Tales.TaleQuestEQSService.AddVectorParam // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x47b3340
	void AddFloatParam(struct FName ParamName, float FloatParam); // Function Tales.TaleQuestEQSService.AddFloatParam // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x47b3050
	void AddActorParam(struct FName ParamName, struct AActor* ActorParam); // Function Tales.TaleQuestEQSService.AddActorParam // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x47b2af0
};

// Class Tales.TaleQuestInteractionPreventionService
// Size: 0x78 (Inherited: 0x60)
struct UTaleQuestInteractionPreventionService : UTaleQuestService {
	struct TArray<struct AActor*> TrackedInteractionActors; // 0x60(0x10)
	struct UTaleQuestInteractionPreventionServiceDesc* Desc; // 0x70(0x08)

	void PreventInteractionWithTargetActor(struct AActor* Actor); // Function Tales.TaleQuestInteractionPreventionService.PreventInteractionWithTargetActor // Final|Native|Public // @ game+0x47b8370
	void EnableInteractionWithTargetActor(struct AActor* Actor); // Function Tales.TaleQuestInteractionPreventionService.EnableInteractionWithTargetActor // Final|Native|Public // @ game+0x47b43b0
};

// Class Tales.TaleQuestLockGhostShipDoorService
// Size: 0x68 (Inherited: 0x60)
struct UTaleQuestLockGhostShipDoorService : UTaleQuestService {
	struct UTaleQuestLockGhostShipDoorServiceDesc* Desc; // 0x60(0x08)
};

// Class Tales.TaleQuestParticipantDeathService
// Size: 0x80 (Inherited: 0x60)
struct UTaleQuestParticipantDeathService : UTaleQuestService {
	char UnknownData_60[0x20]; // 0x60(0x20)
};

// Class Tales.TaleQuestPlayerItemsCleaupService
// Size: 0x70 (Inherited: 0x60)
struct UTaleQuestPlayerItemsCleaupService : UTaleQuestService {
	struct UTaleQuestPlayerItemsCleaupServiceDesc* ServiceDesc; // 0x60(0x08)
	char UnknownData_68[0x8]; // 0x68(0x08)
};

// Class Tales.TaleQuestPredicatedBranchPhasingService
// Size: 0xe0 (Inherited: 0x60)
struct UTaleQuestPredicatedBranchPhasingService : UTaleQuestService {
	struct TArray<struct APhasedClusterRoot*> SpawnedPhaseClustersRoots; // 0x60(0x10)
	struct UTaleQuestPredicatedBranchPhasingServiceDesc* ServiceDesc; // 0x70(0x08)
	char UnknownData_78[0x68]; // 0x78(0x68)
};

// Class Tales.TaleQuestQueryableStatesService
// Size: 0xb0 (Inherited: 0x60)
struct UTaleQuestQueryableStatesService : UTaleQuestService {
	struct TArray<struct FTaleQuestQueryableStateDataInfo> AllData; // 0x60(0x10)
	char UnknownData_70[0x40]; // 0x70(0x40)
};

// Class Tales.TaleQuestScopeService
// Size: 0xb0 (Inherited: 0x60)
struct UTaleQuestScopeService : UTaleQuestService {
	char UnknownData_60[0x50]; // 0x60(0x50)
};

// Class Tales.TaleQuestSelectorService
// Size: 0x88 (Inherited: 0x60)
struct UTaleQuestSelectorService : UTaleQuestService {
	struct UTaleQuestSelectorServiceDesc* Desc; // 0x60(0x08)
	char UnknownData_68[0x20]; // 0x68(0x20)

	int32_t GetRandomIntegerInRange(int32_t Minimum, int32_t Maximum); // Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x47b5f50
	float GetRandomFloatInRange(float Minimum, float Maximum); // Function Tales.TaleQuestSelectorService.GetRandomFloatInRange // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x47b5e80
};

// Class Tales.TaleQuestShipSetSinkingParamsService
// Size: 0xb0 (Inherited: 0x60)
struct UTaleQuestShipSetSinkingParamsService : UTaleQuestService {
	struct UTaleQuestShipSetSinkingParamsServiceDesc* Desc; // 0x60(0x08)
	char UnknownData_68[0x48]; // 0x68(0x48)
};

// Class Tales.TaleQuestSuppressIslandBannersService
// Size: 0x80 (Inherited: 0x60)
struct UTaleQuestSuppressIslandBannersService : UTaleQuestService {
	struct UTaleQuestSuppressIslandBannersServiceDesc* Desc; // 0x60(0x08)
	char UnknownData_68[0x18]; // 0x68(0x18)
};

// Class Tales.TaleQuestToggleInteractionDescriptionService
// Size: 0xb8 (Inherited: 0x60)
struct UTaleQuestToggleInteractionDescriptionService : UTaleQuestService {
	struct TMap<struct AActor*, char> TrackedInteractionActors; // 0x60(0x50)
	struct UTaleQuestToggleInteractionDescriptionServiceDesc* Desc; // 0xb0(0x08)

	void TargetActorInteractionToEnable(struct AActor* Actor); // Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToEnable // Final|Native|Public // @ game+0x47bacc0
	void TargetActorInteractionToDisable(struct AActor* Actor); // Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToDisable // Final|Native|Public // @ game+0x47bac40
};

// Class Tales.TaleResourceBrokerService
// Size: 0xa8 (Inherited: 0x60)
struct UTaleResourceBrokerService : UTaleQuestService {
	TScriptInterface<struct UContendedResourceServiceInterface> ContendedResourceService; // 0x60(0x10)
	TScriptInterface<struct UWorldResourceRegistryInterface> ResourceRegistry; // 0x70(0x10)
	struct TArray<struct FMigrationActionPair> MigrationActions; // 0x80(0x10)
	char UnknownData_90[0x18]; // 0x90(0x18)
};

// Class Tales.TaleShroudBreakerService
// Size: 0x78 (Inherited: 0x60)
struct UTaleShroudBreakerService : UTaleQuestService {
	char UnknownData_60[0x18]; // 0x60(0x18)
};

// Class Tales.TaleShroudBreakerServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleShroudBreakerServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.CutsceneResponsesTaleServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UCutsceneResponsesTaleServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.GameEventBlockingTaleServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UGameEventBlockingTaleServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.GameEventExclusionZoneTaleServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UGameEventExclusionZoneTaleServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.RewardGenTaleQuestServiceDesc
// Size: 0x30 (Inherited: 0x28)
struct URewardGenTaleQuestServiceDesc : UTaleQuestServiceDesc {
	struct UTaleQuestWeightedItemDescSpawnDataAsset* SpawnData; // 0x28(0x08)
};

// Class Tales.TaleQuestActorOfInterestServiceDesc
// Size: 0x70 (Inherited: 0x28)
struct UTaleQuestActorOfInterestServiceDesc : UTaleQuestServiceDesc {
	struct TArray<struct UClass*> AllNeededActorsOfInterest; // 0x28(0x10)
	struct FText ActorOfInterestUnregisteredFailureMessage; // 0x38(0x38)
};

// Class Tales.TaleQuestActorServiceDesc
// Size: 0x30 (Inherited: 0x28)
struct UTaleQuestActorServiceDesc : UTaleQuestServiceDesc {
	struct UClass* ItemLostFailureRunnable; // 0x28(0x08)
};

// Class Tales.TaleQuestCargoRunContractsServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestCargoRunContractsServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.TaleQuestCrewGameEventBlockingTaleServiceDesc
// Size: 0x30 (Inherited: 0x28)
struct UTaleQuestCrewGameEventBlockingTaleServiceDesc : UTaleQuestServiceDesc {
	float GracePeriodAfterServiceStops; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Tales.TaleQuestEQSServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestEQSServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.TaleQuestInteractionPreventionServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestInteractionPreventionServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.TaleQuestLockGhostShipDoorServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestLockGhostShipDoorServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.TaleQuestMerchantContractsServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestMerchantContractsServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.TaleQuestParticipantDeathServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestParticipantDeathServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.TaleQuestPlayerItemsCleaupServiceDesc
// Size: 0x38 (Inherited: 0x28)
struct UTaleQuestPlayerItemsCleaupServiceDesc : UTaleQuestServiceDesc {
	struct TArray<struct UClass*> ItemDescsToRemove; // 0x28(0x10)
};

// Class Tales.TaleQuestPredicatedBranchPhasingServiceDesc
// Size: 0x38 (Inherited: 0x28)
struct UTaleQuestPredicatedBranchPhasingServiceDesc : UTaleQuestServiceDesc {
	bool ClampAssignments; // 0x28(0x01)
	bool TreatOutOfBoundsAssignmentsAsErrors; // 0x29(0x01)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	int32_t NumberOfClusters; // 0x2c(0x04)
	struct UTaleQuestPhaseBranchSelectorPredicateBase* PlayerAssignmentFunction; // 0x30(0x08)
};

// Class Tales.TaleQuestQueryableStatesServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestQueryableStatesServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.TaleQuestScopeServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestScopeServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.TaleQuestSelectorServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestSelectorServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.TaleQuestShipSetSinkingParamsServiceDesc
// Size: 0x70 (Inherited: 0x28)
struct UTaleQuestShipSetSinkingParamsServiceDesc : UTaleQuestServiceDesc {
	struct FQuestVariableGuid CrewId; // 0x28(0x30)
	struct UShipSinkingParametersDataAsset* SmallShipSinkingData; // 0x58(0x08)
	struct UShipSinkingParametersDataAsset* MediumShipSinkingData; // 0x60(0x08)
	struct UShipSinkingParametersDataAsset* LargeShipSinkingData; // 0x68(0x08)
};

// Class Tales.TaleQuestSuppressIslandBannersServiceDesc
// Size: 0x30 (Inherited: 0x28)
struct UTaleQuestSuppressIslandBannersServiceDesc : UTaleQuestServiceDesc {
	bool DoNotSuppressDiveTargetIsland; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// Class Tales.TaleQuestToggleInteractionDescriptionServiceDesc
// Size: 0x30 (Inherited: 0x28)
struct UTaleQuestToggleInteractionDescriptionServiceDesc : UTaleQuestServiceDesc {
	bool ResetDisabledInteractsOnEnd; // 0x28(0x01)
	bool ResetEnabledInteractsOnEnd; // 0x29(0x01)
	char UnknownData_2A[0x6]; // 0x2a(0x06)
};

// Class Tales.ActorRadiusTrackerStep
// Size: 0xd0 (Inherited: 0x98)
struct UActorRadiusTrackerStep : UTaleQuestStep {
	struct UActorRadiusTrackerStepDesc* Desc; // 0x98(0x08)
	struct AActor* TargetActor; // 0xa0(0x08)
	char UnknownData_A8[0x28]; // 0xa8(0x28)
};

// Class Tales.AddGameEventExclusionZoneStep
// Size: 0x98 (Inherited: 0x98)
struct UAddGameEventExclusionZoneStep : UTaleQuestStep {
};

// Class Tales.CallObjectFunctionStep
// Size: 0x98 (Inherited: 0x98)
struct UCallObjectFunctionStep : UTaleQuestStep {
};

// Class Tales.DebugTaleAddInstancedLevelStep
// Size: 0xd8 (Inherited: 0x98)
struct UDebugTaleAddInstancedLevelStep : UTaleQuestStep {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct UDebugTaleAddInstancedLevelStepDesc* StepDesc; // 0xa0(0x08)
	struct FString InstancedLevelPath; // 0xa8(0x10)
	char UnknownData_B8[0x20]; // 0xb8(0x20)
};

// Class Tales.DebugTaleAddInstancedLevelStepDesc
// Size: 0xc0 (Inherited: 0x80)
struct UDebugTaleAddInstancedLevelStepDesc : UTaleQuestStepDesc {
	struct FText InstancedLevelKeyword; // 0x80(0x38)
	uint32_t InstancedLevelIndex; // 0xb8(0x04)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
};

// Class Tales.DestroySpawnedActorStep
// Size: 0x98 (Inherited: 0x98)
struct UDestroySpawnedActorStep : UTaleQuestStep {
};

// Class Tales.DoEQSQueryStep
// Size: 0xa8 (Inherited: 0x98)
struct UDoEQSQueryStep : UTaleQuestStep {
	struct UDoEQSQueryStepDesc* Desc; // 0x98(0x08)
	struct UTaleQuestEQSService* CachedTaleEQSService; // 0xa0(0x08)
};

// Class Tales.EnableInteractionWithActorStep
// Size: 0x98 (Inherited: 0x98)
struct UEnableInteractionWithActorStep : UTaleQuestStep {
};

// Class Tales.FindItemInCollectorsChestStep
// Size: 0x98 (Inherited: 0x98)
struct UFindItemInCollectorsChestStep : UTaleQuestStep {
};

// Class Tales.FindNamedPointStep
// Size: 0x98 (Inherited: 0x98)
struct UFindNamedPointStep : UTaleQuestStep {
};

// Class Tales.FindNamedPointAsVectorStep
// Size: 0x98 (Inherited: 0x98)
struct UFindNamedPointAsVectorStep : UTaleQuestStep {
};

// Class Tales.FindNamedPointAsTransformStep
// Size: 0x98 (Inherited: 0x98)
struct UFindNamedPointAsTransformStep : UTaleQuestStep {
};

// Class Tales.ForceCannonLoadStep
// Size: 0xf8 (Inherited: 0x98)
struct UForceCannonLoadStep : UTaleQuestStep {
	char UnknownData_98[0x60]; // 0x98(0x60)
};

// Class Tales.GenerateDigLocationInRadiusStep
// Size: 0x148 (Inherited: 0x98)
struct UGenerateDigLocationInRadiusStep : UTaleQuestStep {
	char UnknownData_98[0xb0]; // 0x98(0xb0)
};

// Class Tales.GetActorOfInterestStep
// Size: 0x98 (Inherited: 0x98)
struct UGetActorOfInterestStep : UTaleQuestStep {
};

// Class Tales.GetVoyageDifficultyFromRankStep
// Size: 0xd0 (Inherited: 0x98)
struct UGetVoyageDifficultyFromRankStep : UTaleQuestStep {
	char UnknownData_98[0x38]; // 0x98(0x38)
};

// Class Tales.InvokeDamageStep
// Size: 0x98 (Inherited: 0x98)
struct UInvokeDamageStep : UTaleQuestStep {
};

// Class Tales.LinkEQSContextWithVariableStep
// Size: 0xa0 (Inherited: 0x98)
struct ULinkEQSContextWithVariableStep : UTaleQuestStep {
	struct ULinkEQSContextWithVariableStepDesc* Desc; // 0x98(0x08)
};

// Class Tales.LoadSequencerAnimationStep
// Size: 0xb0 (Inherited: 0x98)
struct ULoadSequencerAnimationStep : UTaleQuestStep {
	struct ULoadSequencerAnimationStepDesc* StepDesc; // 0x98(0x08)
	struct ASequencerCutSceneActor* SequencerCutSceneActor; // 0xa0(0x08)
	struct AActor* TargetToSpawnActor; // 0xa8(0x08)
};

// Class Tales.OverrideManagedActorStateStep
// Size: 0x98 (Inherited: 0x98)
struct UOverrideManagedActorStateStep : UTaleQuestStep {
};

// Class Tales.ParticipantRadiusArrayTrackerStep
// Size: 0xb8 (Inherited: 0x98)
struct UParticipantRadiusArrayTrackerStep : UTaleQuestStep {
	struct UParticipantRadiusArrayTrackerStepDesc* Desc; // 0x98(0x08)
	char UnknownData_A0[0x18]; // 0xa0(0x18)
};

// Class Tales.ParticipantRadiusTrackerStep
// Size: 0xb8 (Inherited: 0x98)
struct UParticipantRadiusTrackerStep : UTaleQuestStep {
	struct UParticipantRadiusTrackerStepDesc* Desc; // 0x98(0x08)
	char UnknownData_A0[0x18]; // 0xa0(0x18)
};

// Class Tales.PlaySequencerAnimationOnCutsceneActorStep
// Size: 0xc8 (Inherited: 0x98)
struct UPlaySequencerAnimationOnCutsceneActorStep : UTaleQuestStep {
	struct UPlaySequencerAnimationOnCutsceneActorStepDesc* StepDesc; // 0x98(0x08)
	struct ASequencerCutSceneActor* SequencerCutSceneActor; // 0xa0(0x08)
	struct TArray<struct FPossessableSequence> PossessableSequences; // 0xa8(0x10)
	char UnknownData_B8[0x10]; // 0xb8(0x10)
};

// Class Tales.PlaySequencerAnimationStep
// Size: 0xd0 (Inherited: 0x98)
struct UPlaySequencerAnimationStep : UTaleQuestStep {
	struct UPlaySequencerAnimationStepDesc* StepDesc; // 0x98(0x08)
	struct ASequencerCutSceneActor* SequencerCutSceneActor; // 0xa0(0x08)
	char UnknownData_A8[0x28]; // 0xa8(0x28)
};

// Class Tales.PreventInteractionWithActorStep
// Size: 0x98 (Inherited: 0x98)
struct UPreventInteractionWithActorStep : UTaleQuestStep {
};

// Class Tales.ProvokeHitReactionStep
// Size: 0x98 (Inherited: 0x98)
struct UProvokeHitReactionStep : UTaleQuestStep {
};

// Class Tales.ReleaseGameEventBlockStep
// Size: 0x98 (Inherited: 0x98)
struct UReleaseGameEventBlockStep : UTaleQuestStep {
};

// Class Tales.RemoveGameEventExclusionZoneStep
// Size: 0x98 (Inherited: 0x98)
struct URemoveGameEventExclusionZoneStep : UTaleQuestStep {
};

// Class Tales.RequestGameEventBlockStep
// Size: 0x98 (Inherited: 0x98)
struct URequestGameEventBlockStep : UTaleQuestStep {
};

// Class Tales.SelectNamedPointStep
// Size: 0x98 (Inherited: 0x98)
struct USelectNamedPointStep : UTaleQuestStep {
};

// Class Tales.SetEQSNamedContextStep
// Size: 0xa0 (Inherited: 0x98)
struct USetEQSNamedContextStep : UTaleQuestStep {
	struct USetEQSNamedContextStepDesc* Desc; // 0x98(0x08)
};

// Class Tales.SetReplenishableContentSelectorStep
// Size: 0x98 (Inherited: 0x98)
struct USetReplenishableContentSelectorStep : UTaleQuestStep {
};

// Class Tales.SpawnLayerStep
// Size: 0xb0 (Inherited: 0x98)
struct USpawnLayerStep : UTaleQuestStep {
	char UnknownData_98[0x18]; // 0x98(0x18)
};

// Class Tales.SpawnPhasedActorWithTransformStep
// Size: 0x100 (Inherited: 0x98)
struct USpawnPhasedActorWithTransformStep : UTaleQuestStep {
	char UnknownData_98[0x68]; // 0x98(0x68)
};

// Class Tales.SpawnPhasedItemStep
// Size: 0x98 (Inherited: 0x98)
struct USpawnPhasedItemStep : UTaleQuestStep {
};

// Class Tales.SplinePathingActorActivationStep
// Size: 0x98 (Inherited: 0x98)
struct USplinePathingActorActivationStep : UTaleQuestStep {
};

// Class Tales.SplinePathingActorAddPrimitiveStep
// Size: 0x98 (Inherited: 0x98)
struct USplinePathingActorAddPrimitiveStep : UTaleQuestStep {
};

// Class Tales.StartSuppressingCutsceneResponsesStep
// Size: 0x98 (Inherited: 0x98)
struct UStartSuppressingCutsceneResponsesStep : UTaleQuestStep {
};

// Class Tales.StopSuppressingCutsceneResponsesStep
// Size: 0x98 (Inherited: 0x98)
struct UStopSuppressingCutsceneResponsesStep : UTaleQuestStep {
};

// Class Tales.TaleMigrationVolatileTaskStep
// Size: 0xa8 (Inherited: 0x98)
struct UTaleMigrationVolatileTaskStep : UTaleQuestStep {
	TScriptInterface<struct UTaleQuestStepInterface> Task; // 0x98(0x10)
};

// Class Tales.TaleQuestAddCommonToolsStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestAddCommonToolsStep : UTaleQuestStep {
};

// Class Tales.TaleQuestAddQuestBookStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestAddQuestBookStep : UTaleQuestStep {
};

// Class Tales.TaleQuestAddToArrayStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestAddToArrayStep : UTaleQuestStep {
};

// Class Tales.TaleQuestArrayAppendStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestArrayAppendStep : UTaleQuestStep {
};

// Class Tales.TaleQuestArrayContainsStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestArrayContainsStep : UTaleQuestStep {
};

// Class Tales.TaleQuestArrayUnionStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestArrayUnionStep : UTaleQuestStep {
};

// Class Tales.TaleQuestAwaitCrewShipSinkStep
// Size: 0x158 (Inherited: 0x98)
struct UTaleQuestAwaitCrewShipSinkStep : UTaleQuestStep {
	char UnknownData_98[0xc0]; // 0x98(0xc0)
};

// Class Tales.TaleQuestAwaitEventStep
// Size: 0xf0 (Inherited: 0x98)
struct UTaleQuestAwaitEventStep : UTaleQuestStep {
	char UnknownData_98[0x58]; // 0x98(0x58)
};

// Class Tales.TaleQuestChooseIslandFromWeightsStep
// Size: 0x130 (Inherited: 0x98)
struct UTaleQuestChooseIslandFromWeightsStep : UTaleQuestStep {
	char UnknownData_98[0x90]; // 0x98(0x90)
	struct UIslandTypeWeightsDataAsset* IslandTypeWeights; // 0x128(0x08)
};

// Class Tales.TaleQuestClearTaleProposalsStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestClearTaleProposalsStep : UTaleQuestStep {
};

// Class Tales.TaleQuestCrewTaskStep
// Size: 0xd0 (Inherited: 0x98)
struct UTaleQuestCrewTaskStep : UTaleQuestStep {
	TScriptInterface<struct UTaleQuestStepInterface> Task; // 0x98(0x10)
	char UnknownData_A8[0x28]; // 0xa8(0x28)
};

// Class Tales.TaleQuestDisableInteractionStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestDisableInteractionStep : UTaleQuestStep {
};

// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep
// Size: 0xa0 (Inherited: 0x98)
struct UTaleQuestEmissaryCompanyActionRewardBoostStep : UTaleQuestStep {
	struct UTaleQuestEmissaryCompanyActionRewardBoostStepDesc* Desc; // 0x98(0x08)
};

// Class Tales.TaleQuestEnableInteractionStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestEnableInteractionStep : UTaleQuestStep {
};

// Class Tales.TaleQuestEnumSwitchStep
// Size: 0xb0 (Inherited: 0x98)
struct UTaleQuestEnumSwitchStep : UTaleQuestStep {
	TScriptInterface<struct UTaleQuestStepInterface> Branch; // 0x98(0x10)
	char UnknownData_A8[0x8]; // 0xa8(0x08)
};

// Class Tales.TaleQuestFireEventStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestFireEventStep : UTaleQuestStep {
};

// Class Tales.TaleQuestForEachStepBase
// Size: 0xa8 (Inherited: 0x98)
struct UTaleQuestForEachStepBase : UTaleQuestStep {
	struct TArray<struct FBodyFramePair> Bodies; // 0x98(0x10)
};

// Class Tales.TaleQuestForEachAnyStep
// Size: 0xa8 (Inherited: 0xa8)
struct UTaleQuestForEachAnyStep : UTaleQuestForEachStepBase {
};

// Class Tales.TaleQuestForEachSequential
// Size: 0xe8 (Inherited: 0xa8)
struct UTaleQuestForEachSequential : UTaleQuestForEachStepBase {
	struct UTaleQuestIndexedFrame* Frame; // 0xa8(0x08)
	char UnknownData_B0[0x38]; // 0xb0(0x38)
};

// Class Tales.TaleQuestForEachUnionStep
// Size: 0xa8 (Inherited: 0xa8)
struct UTaleQuestForEachUnionStep : UTaleQuestForEachStepBase {
};

// Class Tales.TaleQuestGetArrayElementStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestGetArrayElementStep : UTaleQuestStep {
};

// Class Tales.TaleQuestGetCollectionItemCountStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestGetCollectionItemCountStep : UTaleQuestStep {
};

// Class Tales.TaleQuestGetGlobalDigSpotDataStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestGetGlobalDigSpotDataStep : UTaleQuestStep {
};

// Class Tales.TaleQuestGetParticipatingCrewsInRadiusStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestGetParticipatingCrewsInRadiusStep : UTaleQuestStep {
};

// Class Tales.TaleQuestGetParticipatingCrewsStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestGetParticipatingCrewsStep : UTaleQuestStep {
};

// Class Tales.TaleQuestGetVoyageGeneratorIslandStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestGetVoyageGeneratorIslandStep : UTaleQuestStep {
};

// Class Tales.TaleQuestGrantRewardStep
// Size: 0xd8 (Inherited: 0x98)
struct UTaleQuestGrantRewardStep : UTaleQuestStep {
	char UnknownData_98[0x40]; // 0x98(0x40)
};

// Class Tales.TaleQuestNotificationQuestsBegunStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestNotificationQuestsBegunStep : UTaleQuestStep {
};

// Class Tales.TaleQuestObstacleCourseSetupAndWaitForCompletionStep
// Size: 0xa0 (Inherited: 0x98)
struct UTaleQuestObstacleCourseSetupAndWaitForCompletionStep : UTaleQuestStep {
	char UnknownData_98[0x8]; // 0x98(0x08)
};

// Class Tales.TaleQuestPermanentPromptStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestPermanentPromptStep : UTaleQuestStep {
};

// Class Tales.TaleQuestPersistentForEachCrewTaskStep
// Size: 0xf0 (Inherited: 0x98)
struct UTaleQuestPersistentForEachCrewTaskStep : UTaleQuestStep {
	struct UTaleQuestPersistentForEachCrewTaskStepDesc* StepDesc; // 0x98(0x08)
	char UnknownData_A0[0x50]; // 0xa0(0x50)
};

// Class Tales.TaleQuestPredicateBranchTaskStep
// Size: 0x118 (Inherited: 0x98)
struct UTaleQuestPredicateBranchTaskStep : UTaleQuestStep {
	struct TMap<int32_t, struct FPredicatedBranchedTask> BranchedTasks; // 0x98(0x50)
	struct UTaleQuestPredicateBranchStepDesc* StepDesc; // 0xe8(0x08)
	struct TArray<int32_t> BranchesCompleted; // 0xf0(0x10)
	char UnknownData_100[0x18]; // 0x100(0x18)
};

// Class Tales.TaleQuestRemoveCommonToolsStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestRemoveCommonToolsStep : UTaleQuestStep {
};

// Class Tales.TaleQuestRemoveQuestBookStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestRemoveQuestBookStep : UTaleQuestStep {
};

// Class Tales.TaleQuestSelectEntryFromArrayStep
// Size: 0x128 (Inherited: 0x98)
struct UTaleQuestSelectEntryFromArrayStep : UTaleQuestStep {
	struct FQuestVariableArray InputArray; // 0x98(0x30)
	struct FQuestVariable OutputEntry; // 0xc8(0x30)
	struct FQuestVariableInt OutputEntryIndex; // 0xf8(0x30)
};

// Class Tales.TaleQuestSetDigSpotVoyageStatusStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestSetDigSpotVoyageStatusStep : UTaleQuestStep {
};

// Class Tales.TaleQuestShipDiveStep
// Size: 0xb0 (Inherited: 0x98)
struct UTaleQuestShipDiveStep : UTaleQuestStep {
	struct UTaleQuestShipDiveStepDesc* StepDesc; // 0x98(0x08)
	char UnknownData_A0[0x10]; // 0xa0(0x10)
};

// Class Tales.TaleQuestShipSurfaceStep
// Size: 0xb0 (Inherited: 0x98)
struct UTaleQuestShipSurfaceStep : UTaleQuestStep {
	struct UTaleQuestShipSurfaceStepDesc* StepDesc; // 0x98(0x08)
	char UnknownData_A0[0x10]; // 0xa0(0x10)
};

// Class Tales.TaleQuestStarFieldPuzzleDimStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestStarFieldPuzzleDimStep : UTaleQuestStep {
};

// Class Tales.TaleQuestStarFieldPuzzleEndStep
// Size: 0xa8 (Inherited: 0x98)
struct UTaleQuestStarFieldPuzzleEndStep : UTaleQuestStep {
	char UnknownData_98[0x10]; // 0x98(0x10)
};

// Class Tales.TaleQuestStarFieldPuzzleSetupAndWaitForCompletionStep
// Size: 0xb0 (Inherited: 0x98)
struct UTaleQuestStarFieldPuzzleSetupAndWaitForCompletionStep : UTaleQuestStep {
	char UnknownData_98[0x18]; // 0x98(0x18)
};

// Class Tales.TaleQuestStartCameraFadeStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestStartCameraFadeStep : UTaleQuestStep {
};

// Class Tales.TaleQuestStartPermanentPromptAndWaitForEndEventStep
// Size: 0xc0 (Inherited: 0x98)
struct UTaleQuestStartPermanentPromptAndWaitForEndEventStep : UTaleQuestStep {
	char UnknownData_98[0x28]; // 0x98(0x28)
};

// Class Tales.TaleQuestStructStepBase
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestStructStepBase : UTaleQuestStep {
};

// Class Tales.TaleQuestBreakStructStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestBreakStructStep : UTaleQuestStructStepBase {
};

// Class Tales.TaleQuestMakeStructStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestMakeStructStep : UTaleQuestStructStepBase {
};

// Class Tales.TaleQuestToggleAmbientMigrationForServerStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestToggleAmbientMigrationForServerStep : UTaleQuestStep {
};

// Class Tales.TaleQuestUpdateCheckpointStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestUpdateCheckpointStep : UTaleQuestStep {
};

// Class Tales.TaleQuestWaitForHandInStep
// Size: 0xa8 (Inherited: 0x98)
struct UTaleQuestWaitForHandInStep : UTaleQuestStep {
	struct UTaleQuestWaitForHandInStepDesc* Desc; // 0x98(0x08)
	char UnknownData_A0[0x8]; // 0xa0(0x08)
};

// Class Tales.TrackResponseCoordinatorStep
// Size: 0xa0 (Inherited: 0x98)
struct UTrackResponseCoordinatorStep : UTaleQuestStep {
	struct UTrackResponseCoordinatorStepDesc* StepDesc; // 0x98(0x08)
};

// Class Tales.VisualiseLoggerEQSResultsTaleStep
// Size: 0x98 (Inherited: 0x98)
struct UVisualiseLoggerEQSResultsTaleStep : UTaleQuestStep {
};

// Class Tales.WaitForActorOfInterestToUnregisterStep
// Size: 0x120 (Inherited: 0x98)
struct UWaitForActorOfInterestToUnregisterStep : UTaleQuestStep {
	struct UWaitForActorOfInterestToUnregisterStepDesc* Desc; // 0x98(0x08)
	char UnknownData_A0[0x80]; // 0xa0(0x80)
};

// Class Tales.WaitForActorToFullyDockStep
// Size: 0xf0 (Inherited: 0x98)
struct UWaitForActorToFullyDockStep : UTaleQuestStep {
	char UnknownData_98[0x58]; // 0x98(0x58)
};

// Class Tales.WaitForGameEventToCompleteStep
// Size: 0xa8 (Inherited: 0x98)
struct UWaitForGameEventToCompleteStep : UTaleQuestStep {
	struct AGameEvent* GameEvent; // 0x98(0x08)
	char UnknownData_A0[0x8]; // 0xa0(0x08)
};

// Class Tales.WaitForHealthToReachFractionStep
// Size: 0x118 (Inherited: 0x98)
struct UWaitForHealthToReachFractionStep : UTaleQuestStep {
	char UnknownData_98[0x80]; // 0x98(0x80)
};

// Class Tales.WaitForItemPickupStep
// Size: 0x228 (Inherited: 0x98)
struct UWaitForItemPickupStep : UTaleQuestStep {
	char UnknownData_98[0x190]; // 0x98(0x190)
};

// Class Tales.WaitForQueryableStateValueStep
// Size: 0x128 (Inherited: 0x98)
struct UWaitForQueryableStateValueStep : UTaleQuestStep {
	char UnknownData_98[0x90]; // 0x98(0x90)
};

// Class Tales.WaitForSpawnedPawnBaseStep
// Size: 0xb0 (Inherited: 0x98)
struct UWaitForSpawnedPawnBaseStep : UTaleQuestStep {
	struct UAISpawner* AISpawner; // 0x98(0x08)
	char UnknownData_A0[0x10]; // 0xa0(0x10)
};

// Class Tales.ActorRadiusTrackerStepDesc
// Size: 0x120 (Inherited: 0x80)
struct UActorRadiusTrackerStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor TargetActor; // 0x80(0x30)
	float DurationBetweenChecks; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
	struct FQuestVariableVector Location; // 0xb8(0x30)
	float Radius; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)
	struct FQuestVariableBool ActorInsideRadius; // 0xf0(0x30)
};

// Class Tales.AddGameEventExclusionZoneStepDesc
// Size: 0xc0 (Inherited: 0x80)
struct UAddGameEventExclusionZoneStepDesc : UTaleQuestStepDesc {
	float Radius; // 0x80(0x04)
	bool ShouldGetRadiusFromRemoteConfig; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	struct FName RemoteConfigKeyRadius; // 0x88(0x08)
	struct FQuestVariableVector Location; // 0x90(0x30)
};

// Class Tales.CallObjectFunctionStepDesc
// Size: 0xe8 (Inherited: 0x80)
struct UCallObjectFunctionStepDesc : UTaleQuestStepDesc {
	struct UObject* Target; // 0x80(0x08)
	struct FClassFunctionSelectionType Function; // 0x88(0x10)
	struct TMap<struct FName, struct FQuestVariable> ParameterQuestMappings; // 0x98(0x50)
};

// Class Tales.DestroySpawnedActorStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UDestroySpawnedActorStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor ActorVar; // 0x80(0x30)
};

// Class Tales.DoEQSQueryStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct UDoEQSQueryStepDesc : UTaleQuestStepDesc {
	struct UEnvQuery* EQSQuery; // 0x80(0x08)
	struct FQuestVariableArray OutPoints; // 0x88(0x30)
};

// Class Tales.EnableInteractionWithActorStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UEnableInteractionWithActorStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor TargetActor; // 0x80(0x30)
};

// Class Tales.FindItemInCollectorsChestStepDesc
// Size: 0xf0 (Inherited: 0x80)
struct UFindItemInCollectorsChestStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor CollectorsChest; // 0x80(0x30)
	struct FQuestVariableActor ItemInChest; // 0xb0(0x30)
	struct UClass* ItemToFind; // 0xe0(0x08)
	bool AllowChildClasses; // 0xe8(0x01)
	char UnknownData_E9[0x7]; // 0xe9(0x07)
};

// Class Tales.FindNamedPointStepDescBase
// Size: 0x110 (Inherited: 0x80)
struct UFindNamedPointStepDescBase : UTaleQuestStepDesc {
	char UnknownData_80[0x20]; // 0x80(0x20)
	struct FQuestVariableActor ActorToSearch; // 0xa0(0x30)
	struct FQuestVariableName GroupNamePin; // 0xd0(0x30)
	struct FName PointGroupName; // 0x100(0x08)
	char SearchMethod; // 0x108(0x01)
	char ReturnInSpace; // 0x109(0x01)
	char UnknownData_10A[0x6]; // 0x10a(0x06)
};

// Class Tales.FindNamedPointStepDesc
// Size: 0x140 (Inherited: 0x110)
struct UFindNamedPointStepDesc : UFindNamedPointStepDescBase {
	struct FQuestVariableOrientedPoint OutputOrientedPoint; // 0x110(0x30)
};

// Class Tales.FindNamedPointAsVectorStepDesc
// Size: 0x140 (Inherited: 0x110)
struct UFindNamedPointAsVectorStepDesc : UFindNamedPointStepDescBase {
	struct FQuestVariableVector OutputVectorLocation; // 0x110(0x30)
};

// Class Tales.FindNamedPointAsTransformStepDesc
// Size: 0x148 (Inherited: 0x110)
struct UFindNamedPointAsTransformStepDesc : UFindNamedPointStepDescBase {
	struct FQuestVariableTransform OutputTransform; // 0x110(0x38)
};

// Class Tales.ForceCannonLoadStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UForceCannonLoadStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor Cannon; // 0x80(0x30)
	struct FQuestVariableActor Projectile; // 0xb0(0x30)
};

// Class Tales.GenerateDigLocationInRadiusStepDesc
// Size: 0x118 (Inherited: 0x80)
struct UGenerateDigLocationInRadiusStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableName IslandName; // 0x80(0x30)
	struct FQuestVariableVector Center; // 0xb0(0x30)
	float RadiusInCm; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct FQuestVariableVector DigLocation; // 0xe8(0x30)
};

// Class Tales.GetActorOfInterestStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct UGetActorOfInterestStepDesc : UTaleQuestStepDesc {
	struct UClass* ActorOfInterestId; // 0x80(0x08)
	struct FQuestVariableActor ActorOfInterest; // 0x88(0x30)
};

// Class Tales.InvokeDamageDesc
// Size: 0xc0 (Inherited: 0x80)
struct UInvokeDamageDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor ActorToDamage; // 0x80(0x30)
	struct UClass* DamageType; // 0xb0(0x08)
	float DamageAmount; // 0xb8(0x04)
	char DamageReason; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
};

// Class Tales.LinkEQSContextWithVariableStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct ULinkEQSContextWithVariableStepDesc : UTaleQuestStepDesc {
	struct UClass* Context; // 0x80(0x08)
	struct FQuestVariableSetEQSTaleContextValue Variable; // 0x88(0x30)
};

// Class Tales.LoadSequencerAnimationStepDesc
// Size: 0x160 (Inherited: 0x80)
struct ULoadSequencerAnimationStepDesc : UTaleQuestStepDesc {
	struct TArray<struct ULevelSequence*> LevelSequencesToLoad; // 0x80(0x10)
	struct FQuestVariableActor TargetActorToSpawn; // 0x90(0x30)
	struct FQuestVariableActor LevelSequenceActorSpawnLocation; // 0xc0(0x30)
	struct FQuestVariableActor SequencerCutSceneActor; // 0xf0(0x30)
	struct FTaleQuestPhaseClusterRootActor OptionalPhaseCluster; // 0x120(0x30)
	bool AttachToTargetActor; // 0x150(0x01)
	char UnknownData_151[0x3]; // 0x151(0x03)
	struct FName AttachSocketName; // 0x154(0x08)
	bool PlayGlobally; // 0x15c(0x01)
	char UnknownData_15D[0x3]; // 0x15d(0x03)
};

// Class Tales.OverrideManagedActorStateStepDesc
// Size: 0xf0 (Inherited: 0x80)
struct UOverrideManagedActorStateStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor ActorVar; // 0x80(0x30)
	bool TrackActor; // 0xb0(0x01)
	bool MarkAsCritical; // 0xb1(0x01)
	char UnknownData_B2[0x6]; // 0xb2(0x06)
	struct FText CriticalActorLostMessage; // 0xb8(0x38)
};

// Class Tales.ParticipantRadiusArrayTrackerStepDesc
// Size: 0x148 (Inherited: 0x80)
struct UParticipantRadiusArrayTrackerStepDesc : UTaleQuestStepDesc {
	float DurationBetweenChecks; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FQuestVariableActorArray Actors; // 0x88(0x30)
	struct FQuestVariableVectorArray Locations; // 0xb8(0x30)
	struct FQuestVariableFloat Radius; // 0xe8(0x30)
	struct FQuestVariableVector OutLocation; // 0x118(0x30)
};

// Class Tales.WaitUntilAnyParticipantEntersAnyRadiusStep
// Size: 0x148 (Inherited: 0x148)
struct UWaitUntilAnyParticipantEntersAnyRadiusStep : UParticipantRadiusArrayTrackerStepDesc {
};

// Class Tales.ParticipantRadiusTrackerStepDesc
// Size: 0x148 (Inherited: 0x80)
struct UParticipantRadiusTrackerStepDesc : UTaleQuestStepDesc {
	float DurationBetweenChecks; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FQuestVariableVector Location; // 0x88(0x30)
	struct FQuestVariableFloat Radius; // 0xb8(0x30)
	struct FQuestVariableActorArray PlayersOutsideRadius; // 0xe8(0x30)
	struct FQuestVariableActorArray PlayersInsideRadius; // 0x118(0x30)
};

// Class Tales.WaitUntilAllParticipantsEnterRadiusStep
// Size: 0x148 (Inherited: 0x148)
struct UWaitUntilAllParticipantsEnterRadiusStep : UParticipantRadiusTrackerStepDesc {
};

// Class Tales.WaitUntilAllParticipantsLeaveRadiusStep
// Size: 0x148 (Inherited: 0x148)
struct UWaitUntilAllParticipantsLeaveRadiusStep : UParticipantRadiusTrackerStepDesc {
};

// Class Tales.WaitUntilAnyParticipantEntersRadiusStep
// Size: 0x148 (Inherited: 0x148)
struct UWaitUntilAnyParticipantEntersRadiusStep : UParticipantRadiusTrackerStepDesc {
};

// Class Tales.PlaySequencerAnimationOnCutsceneActorStepDesc
// Size: 0x1e8 (Inherited: 0x80)
struct UPlaySequencerAnimationOnCutsceneActorStepDesc : UTaleQuestStepDesc {
	struct ULevelSequence* LevelSequence; // 0x80(0x08)
	float Delay; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
	struct FQuestVariableActor DockableBaseActor; // 0x90(0x30)
	struct FQuestVariableActor SequencerCutSceneActor; // 0xc0(0x30)
	struct FQuestVariableActor ActorToPossess; // 0xf0(0x30)
	struct FQuestVariableArray AdditionalPossessables; // 0x120(0x30)
	struct FQuestVariableActor ManuallySetInteractor; // 0x150(0x30)
	struct FQuestVariableActor InteractingActor; // 0x180(0x30)
	struct FString PossessableName; // 0x1b0(0x10)
	struct USceneDialogueData* DialogueData; // 0x1c0(0x08)
	struct TArray<struct FText> LocalisableNames; // 0x1c8(0x10)
	bool IsLevelSequenceActorAlwaysRelevant; // 0x1d8(0x01)
	bool IsLooping; // 0x1d9(0x01)
	char UnknownData_1DA[0x2]; // 0x1da(0x02)
	float SubtitleSphereRadiusInCm; // 0x1dc(0x04)
	struct ULevelSequence* FemaleLevelSequence; // 0x1e0(0x08)
};

// Class Tales.PlaySequencerAnimationStepDesc
// Size: 0x178 (Inherited: 0x80)
struct UPlaySequencerAnimationStepDesc : UTaleQuestStepDesc {
	struct ULevelSequence* LevelSequenceToPlay; // 0x80(0x08)
	struct FQuestVariableActor TargetActorToSpawn; // 0x88(0x30)
	struct FQuestVariableActor LevelSequenceActorSpawnLocation; // 0xb8(0x30)
	struct FQuestVariableActor DockableBaseActor; // 0xe8(0x30)
	struct FQuestVariableActor InteractingActor; // 0x118(0x30)
	bool PlayGlobally; // 0x148(0x01)
	bool IsLevelSequenceActorAlawaysRelevant; // 0x149(0x01)
	char UnknownData_14A[0x6]; // 0x14a(0x06)
	struct USceneDialogueData* DialogueData; // 0x150(0x08)
	struct TArray<struct FText> LocalisableNames; // 0x158(0x10)
	bool IsLooping; // 0x168(0x01)
	char UnknownData_169[0x3]; // 0x169(0x03)
	float SubtitleSphereRadiusInCm; // 0x16c(0x04)
	struct ULevelSequence* FemaleLevelSequenceToPlay; // 0x170(0x08)
};

// Class Tales.PreventInteractionWithActorStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UPreventInteractionWithActorStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor TargetActor; // 0x80(0x30)
};

// Class Tales.ProvokeHitReactionDesc
// Size: 0xc0 (Inherited: 0x80)
struct UProvokeHitReactionDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor ActorToProvoke; // 0x80(0x30)
	struct UClass* DamageType; // 0xb0(0x08)
	float DamageAmount; // 0xb8(0x04)
	char DamageReason; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
};

// Class Tales.ReleaseGameEventBlockStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UReleaseGameEventBlockStepDesc : UTaleQuestStepDesc {
};

// Class Tales.RemoveGameEventExclusionZoneStepDesc
// Size: 0xc0 (Inherited: 0x80)
struct URemoveGameEventExclusionZoneStepDesc : UTaleQuestStepDesc {
	float Radius; // 0x80(0x04)
	bool ShouldGetRadiusFromRemoteConfig; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	struct FName RemoteConfigKeyRadius; // 0x88(0x08)
	struct FQuestVariableVector Location; // 0x90(0x30)
};

// Class Tales.RequestGameEventBlockStepDesc
// Size: 0x80 (Inherited: 0x80)
struct URequestGameEventBlockStepDesc : UTaleQuestStepDesc {
};

// Class Tales.SelectNamedPointStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct USelectNamedPointStepDesc : UTaleQuestStepDesc {
	struct AActor* PointsContainer; // 0x80(0x20)
	struct FName GroupName; // 0xa0(0x08)
	int32_t PointIndex; // 0xa8(0x04)
	char ReturnInSpace; // 0xac(0x01)
	char UnknownData_AD[0x3]; // 0xad(0x03)
	struct FQuestVariableOrientedPoint Point; // 0xb0(0x30)

	struct TArray<struct FString> GetNamedPointsGroups(); // Function Tales.SelectNamedPointStepDesc.GetNamedPointsGroups // Final|Native|Public|Const // @ game+0x47b5b10
};

// Class Tales.SetEQSNamedContextStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct USetEQSNamedContextStepDesc : UTaleQuestStepDesc {
	struct FName Name; // 0x80(0x08)
	struct FQuestVariableLinkEQSContext Value; // 0x88(0x30)
};

// Class Tales.SetReplenishableContentSelectorStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct USetReplenishableContentSelectorStepDesc : UTaleQuestStepDesc {
	struct UStorageContainerContentTypeSelector* ContentTypeSelector; // 0x80(0x08)
	struct FQuestVariableActor ReplenishableActor; // 0x88(0x30)
};

// Class Tales.SpawnLayerStepDesc
// Size: 0xd0 (Inherited: 0x80)
struct USpawnLayerStepDesc : UTaleQuestStepDesc {
	struct ULayerActorsDataAsset* LayerAsset; // 0x80(0x08)
	bool SpawnPhased; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct FQuestVariableActor ActorWithLayers; // 0x90(0x30)
	struct TArray<struct FQuestVariableActor> SpawnedActors; // 0xc0(0x10)
};

// Class Tales.SpawnPhasedActorWithTransformStepBaseDesc
// Size: 0x110 (Inherited: 0x80)
struct USpawnPhasedActorWithTransformStepBaseDesc : UTaleQuestStepDesc {
	struct UClass* Actor; // 0x80(0x20)
	bool MarkAsCritical; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
	struct FText CriticalActorLostMessage; // 0xa8(0x38)
	struct FQuestVariableActor ActorVar; // 0xe0(0x30)
};

// Class Tales.SpawnPhasedActorAtLocationStepDesc
// Size: 0x148 (Inherited: 0x110)
struct USpawnPhasedActorAtLocationStepDesc : USpawnPhasedActorWithTransformStepBaseDesc {
	struct FQuestVariableTransform Location; // 0x110(0x38)
};

// Class Tales.SpawnPhasedItemStepDesc
// Size: 0x188 (Inherited: 0x80)
struct USpawnPhasedItemStepDesc : UTaleQuestStepDesc {
	bool TrackItem; // 0x80(0x01)
	bool MarkItemAsCritical; // 0x81(0x01)
	char UnknownData_82[0x6]; // 0x82(0x06)
	struct FText CriticalActorLostMessage; // 0x88(0x38)
	struct FName SocketName; // 0xc0(0x08)
	struct FQuestVariableItemDescType Item; // 0xc8(0x30)
	struct FQuestVariableActor LocatorVar; // 0xf8(0x30)
	struct FQuestVariableOrientedPoint LocatorPoint; // 0x128(0x30)
	struct FQuestVariableItemInfo SpawnedItemVar; // 0x158(0x30)
};

// Class Tales.SplinePathingActorActivationStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct USplinePathingActorActivationStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor SplinePathingActor; // 0x80(0x30)
	struct FQuestVariableBool IsActivated; // 0xb0(0x30)
};

// Class Tales.SplinePathingActorAddPrimitiveStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct USplinePathingActorAddPrimitiveStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor SplinePathingActor; // 0x80(0x30)
	struct FQuestVariableActor ActorToManipulate; // 0xb0(0x30)
};

// Class Tales.StartSuppressingCutsceneResponsesStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UStartSuppressingCutsceneResponsesStepDesc : UTaleQuestStepDesc {
};

// Class Tales.StopSuppressingCutsceneResponsesStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UStopSuppressingCutsceneResponsesStepDesc : UTaleQuestStepDesc {
};

// Class Tales.TaleQuestAddCommonToolsStepDesc
// Size: 0xc0 (Inherited: 0x80)
struct UTaleQuestAddCommonToolsStepDesc : UTaleQuestStepDesc {
	struct TArray<struct UClass*> ToolsToGive; // 0x80(0x10)
	struct FQuestVariableActor PlayerToWieldImmediately; // 0x90(0x30)
};

// Class Tales.TaleQuestAddQuestBookStepDesc
// Size: 0x90 (Inherited: 0x80)
struct UTaleQuestAddQuestBookStepDesc : UTaleQuestStepDesc {
	struct UClass* QuestBookDesc; // 0x80(0x08)
	struct UClass* RemapperClass; // 0x88(0x08)
};

// Class Tales.TaleQuestArrayItemStepBaseDesc
// Size: 0xe0 (Inherited: 0x80)
struct UTaleQuestArrayItemStepBaseDesc : UTaleQuestStepDesc {
	struct FQuestVariable ArrayQuestVar; // 0x80(0x30)
	struct FQuestVariable ItemQuestVar; // 0xb0(0x30)
};

// Class Tales.TaleQuestAddToArrayStepDesc
// Size: 0xe0 (Inherited: 0xe0)
struct UTaleQuestAddToArrayStepDesc : UTaleQuestArrayItemStepBaseDesc {
};

// Class Tales.TaleQuestArrayContainsStepDesc
// Size: 0x110 (Inherited: 0xe0)
struct UTaleQuestArrayContainsStepDesc : UTaleQuestArrayItemStepBaseDesc {
	struct FQuestVariableBool Result; // 0xe0(0x30)
};

// Class Tales.TaleQuestArrayOperationStepBaseDesc
// Size: 0x98 (Inherited: 0x80)
struct UTaleQuestArrayOperationStepBaseDesc : UTaleQuestStepDesc {
	struct FName Array1; // 0x80(0x08)
	struct FName Array2; // 0x88(0x08)
	struct FName Result; // 0x90(0x08)
};

// Class Tales.TaleQuestArrayAppendStepDesc
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestArrayAppendStepDesc : UTaleQuestArrayOperationStepBaseDesc {
};

// Class Tales.TaleQuestArrayUnionStepDesc
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestArrayUnionStepDesc : UTaleQuestArrayOperationStepBaseDesc {
};

// Class Tales.TaleQuestAwaitCrewShipSinkStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestAwaitCrewShipSinkStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableGuid CrewId; // 0x80(0x30)
};

// Class Tales.TaleQuestChooseIslandFromWeightsStepDesc
// Size: 0x118 (Inherited: 0x80)
struct UTaleQuestChooseIslandFromWeightsStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableNameArray IslandsToChooseFrom; // 0x80(0x30)
	struct FQuestVariableInt DifficultyRank; // 0xb0(0x30)
	struct FQuestVariableName ChosenIsland; // 0xe0(0x30)
	struct UIslandTypeWeightsDataAsset* IslandTypeWeights; // 0x110(0x08)
};

// Class Tales.TaleQuestClearTaleProposalsStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UTaleQuestClearTaleProposalsStepDesc : UTaleQuestStepDesc {
	struct FName CampaignId; // 0x80(0x08)
};

// Class Tales.TaleQuestDisableInteractionStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestDisableInteractionStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor TargetActor; // 0x80(0x30)
};

// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UTaleQuestEmissaryCompanyActionRewardBoostStepDesc : UTaleQuestStepDesc {
	char CompanyActionType; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Tales.TaleQuestEnableInteractionStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestEnableInteractionStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor TargetActor; // 0x80(0x30)
};

// Class Tales.TaleQuestEnumSwitchStepDesc
// Size: 0x110 (Inherited: 0x80)
struct UTaleQuestEnumSwitchStepDesc : UTaleQuestStepDesc {
	struct FQuestVariable EnumVar; // 0x80(0x30)
	struct UEnum* Enum; // 0xb0(0x08)
	struct UTaleQuestStepDesc* DefaultBranch; // 0xb8(0x08)
	struct TMap<int32_t, struct UTaleQuestStepDesc*> Branches; // 0xc0(0x50)
};

// Class Tales.TaleQuestEventStepDescBase
// Size: 0xe0 (Inherited: 0x80)
struct UTaleQuestEventStepDescBase : UTaleQuestStepDesc {
	struct UObject* Dispatcher; // 0x80(0x08)
	struct FNativeAndUserDefinedStructSelector EventType; // 0x88(0x08)
	struct TMap<struct FName, struct FQuestVariable> ArgumentVarMappings; // 0x90(0x50)
};

// Class Tales.TaleQuestAwaitEventStepDesc
// Size: 0xe0 (Inherited: 0xe0)
struct UTaleQuestAwaitEventStepDesc : UTaleQuestEventStepDescBase {
};

// Class Tales.TaleQuestFireEventStepDesc
// Size: 0xe0 (Inherited: 0xe0)
struct UTaleQuestFireEventStepDesc : UTaleQuestEventStepDescBase {
};

// Class Tales.ValueProviderStepInterface
// Size: 0x28 (Inherited: 0x28)
struct UValueProviderStepInterface : UInterface {
};

// Class Tales.TaleQuestForEachStepDescBase
// Size: 0xa8 (Inherited: 0x80)
struct UTaleQuestForEachStepDescBase : UTaleQuestStepDesc {
	char UnknownData_80[0x8]; // 0x80(0x08)
	struct FName Collection; // 0x88(0x08)
	struct UTaleQuestStepDesc* Body; // 0x90(0x08)
	struct FName KeyPinName; // 0x98(0x08)
	struct FName ItemPinName; // 0xa0(0x08)
};

// Class Tales.TaleQuestForEachAnyStepDesc
// Size: 0xa8 (Inherited: 0xa8)
struct UTaleQuestForEachAnyStepDesc : UTaleQuestForEachStepDescBase {
};

// Class Tales.TaleQuestForEachSequentialDesc
// Size: 0xa8 (Inherited: 0xa8)
struct UTaleQuestForEachSequentialDesc : UTaleQuestForEachStepDescBase {
};

// Class Tales.TaleQuestForEachUnionStepDesc
// Size: 0xa8 (Inherited: 0xa8)
struct UTaleQuestForEachUnionStepDesc : UTaleQuestForEachStepDescBase {
};

// Class Tales.TaleQuestGetArrayElementStepDesc
// Size: 0xe8 (Inherited: 0x80)
struct UTaleQuestGetArrayElementStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableArray InputArray; // 0x80(0x30)
	int32_t Index; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
	struct FQuestVariableAny OutputEntry; // 0xb8(0x30)
};

// Class Tales.TaleQuestGetCollectionItemCountStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UTaleQuestGetCollectionItemCountStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableCollection Collection; // 0x80(0x30)
	struct FQuestVariableInt Num; // 0xb0(0x30)
};

// Class Tales.TaleQuestGetGlobalDigSpotDataStepDesc
// Size: 0x140 (Inherited: 0x80)
struct UTaleQuestGetGlobalDigSpotDataStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableItemSpawnDataType OutputItemSpawnData; // 0x80(0x30)
	struct FQuestVariableOrientedPoint OutputOrientedPoint; // 0xb0(0x30)
	struct FQuestVariableGuid OutputVoyageID; // 0xe0(0x30)
	struct FQuestVariableName OutputStoryName; // 0x110(0x30)
};

// Class Tales.TaleQuestGetParticipatingCrewsInRadiusStepDesc
// Size: 0xe8 (Inherited: 0x80)
struct UTaleQuestGetParticipatingCrewsInRadiusStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableGuidArray CrewIds; // 0x80(0x30)
	struct FQuestVariableVector Location; // 0xb0(0x30)
	float Radius; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
};

// Class Tales.TaleQuestGetParticipatingCrewsStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestGetParticipatingCrewsStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableGuidArray CrewIds; // 0x80(0x30)
};

// Class Tales.TaleQuestGetVoyageGeneratorIslandStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UTaleQuestGetVoyageGeneratorIslandStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableName IslandName; // 0x80(0x30)
	struct FQuestVariableVector IslandLocation; // 0xb0(0x30)
};

// Class Tales.TaleQuestGrantRewardStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UTaleQuestGrantRewardStepDesc : UTaleQuestStepDesc {
	struct FRewardId RewardId; // 0x80(0x08)
	struct UClass* Company; // 0x88(0x08)
	struct FGuid Id; // 0x90(0x10)
	bool ShouldGrantToAlliedCrews; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
	struct FQuestVariablePlayerActor SpecificPlayerToAward; // 0xa8(0x30)
	struct FName Feature; // 0xd8(0x08)
};

// Class Tales.TaleQuestNotificationQuestsBegunStepDesc
// Size: 0xa8 (Inherited: 0x80)
struct UTaleQuestNotificationQuestsBegunStepDesc : UTaleQuestStepDesc {
	int32_t NumQuests; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct TArray<struct FStringAssetReference> Icons; // 0x88(0x10)
	struct FStringAssetReference Background; // 0x98(0x10)
};

// Class Tales.TaleQuestObstacleCourseSetupAndWaitForCompletionStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestObstacleCourseSetupAndWaitForCompletionStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor ObstacleCourseActor; // 0x80(0x30)
};

// Class Tales.TaleQuestPermanentPromptStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct UTaleQuestPermanentPromptStepDesc : UTaleQuestStepDesc {
	struct FQuestVariablePrioritisedPrompt Prompt; // 0x80(0x30)
	char StartOrStop; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
};

// Class Tales.TaleQuestPredicateBranchStepDesc
// Size: 0xa0 (Inherited: 0x80)
struct UTaleQuestPredicateBranchStepDesc : UTaleQuestStepDesc {
	int32_t NumBranches; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct UTaleQuestPhaseBranchSelectorPredicateBase* BranchedTaskAssignmentFunction; // 0x88(0x08)
	struct TArray<struct FTaleQuestPredicateBranchedTaskDesc> BranchedTasks; // 0x90(0x10)
};

// Class Tales.TaleQuestRemoveCommonToolsStepDesc
// Size: 0x90 (Inherited: 0x80)
struct UTaleQuestRemoveCommonToolsStepDesc : UTaleQuestStepDesc {
	struct TArray<struct UClass*> ToolsToRemove; // 0x80(0x10)
};

// Class Tales.TaleQuestRemoveQuestBookStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UTaleQuestRemoveQuestBookStepDesc : UTaleQuestStepDesc {
};

// Class Tales.TaleQuestCopyValueStepDesc
// Size: 0x148 (Inherited: 0xe8)
struct UTaleQuestCopyValueStepDesc : UTaleQuestRunnableStepDesc {
	struct FQuestVariable FromVar; // 0xe8(0x30)
	struct FQuestVariable ToVar; // 0x118(0x30)
};

// Class Tales.ActorOfInterestTaleFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UActorOfInterestTaleFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void GetActorsOfInterestForId(struct UClass* ActorsOfInterestId, struct TArray<struct AActor*> Actors); // Function Tales.ActorOfInterestTaleFunctionLibrary.GetActorsOfInterestForId // Final|Native|Public|HasOutParms|Const // @ game+0x47b5200
	struct TArray<struct AActor*> GetActorsOfInterest(struct TArray<struct UClass*> ActorsOfInterestId); // Function Tales.ActorOfInterestTaleFunctionLibrary.GetActorsOfInterest // Final|Native|Public|HasOutParms|Const // @ game+0x47b5100
	struct AActor* GetActorOfInterest(struct UClass* ActorOfInterestId); // Function Tales.ActorOfInterestTaleFunctionLibrary.GetActorOfInterest // Final|Native|Public|HasOutParms|Const // @ game+0x47b4fa0
};

// Class Tales.TaleQuestActionStateMachineFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestActionStateMachineFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void IsActionStateActive(TScriptInterface<struct UActionStateMachineInterface> ActionStateMachineInterface, char ActionStateMachineTrackId, struct UClass* ActionStateId, bool OutIsActionStateActive); // Function Tales.TaleQuestActionStateMachineFunctionLibrary.IsActionStateActive // Final|Native|Public|HasOutParms|Const // @ game+0x47b67d0
};

// Class Tales.TaleQuestActorFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestActorFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct AActor* SpawnActor(struct UClass* What, struct FTransform Where, bool TrackActor, bool AutomaticallyGatherForMigration); // Function Tales.TaleQuestActorFunctionLibrary.SpawnActor // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults // @ game+0x47b9e70
	struct AActor* ResolveActor(struct AActor* ActorReference); // Function Tales.TaleQuestActorFunctionLibrary.ResolveActor // Final|RequiredAPI|Native|Public|HasOutParms|Const // @ game+0x47b9160
	TScriptInterface<struct UInterface> GetInterface(struct AActor* Actor, struct UClass* InterfaceClass); // Function Tales.TaleQuestActorFunctionLibrary.GetInterface // Final|RequiredAPI|Native|Static|Public|HasOutParms // @ game+0x47b5710
	struct UActorComponent* GetComponentByClass(struct AActor* Actor, struct UClass* ComponentClass); // Function Tales.TaleQuestActorFunctionLibrary.GetComponentByClass // Final|RequiredAPI|Native|Public|HasOutParms|Const // @ game+0x47b5310
	struct FTransform GetActorTransform(struct AActor* Actor); // Function Tales.TaleQuestActorFunctionLibrary.GetActorTransform // Final|RequiredAPI|Native|Static|Public|HasDefaults // @ game+0x47b5040
};

// Class Tales.TaleQuestAnimationMontageFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestAnimationMontageFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void PushSetNextMontageSectionCommand(struct AClientCommandHandler* CommandHandler, struct AActor* TargetActor, struct UAnimMontage* Montage, struct FName FromSectionName, struct FName ToSectionName); // Function Tales.TaleQuestAnimationMontageFunctionLibrary.PushSetNextMontageSectionCommand // Final|Native|Public|HasOutParms|Const // @ game+0x47b87f0
	float PushJumpToMontageSectionCommand(struct AClientCommandHandler* CommandHandler, struct AActor* TargetActor, struct UAnimMontage* Montage, struct FName SectionName); // Function Tales.TaleQuestAnimationMontageFunctionLibrary.PushJumpToMontageSectionCommand // Final|Native|Public|HasOutParms|Const // @ game+0x47b8500
	float GetMontageSectionLength(struct UAnimMontage* Montage, struct FName SectionName); // Function Tales.TaleQuestAnimationMontageFunctionLibrary.GetMontageSectionLength // Final|Native|Public|HasOutParms|Const // @ game+0x47b58a0
};

// Class Tales.TaleQuestAnimationStepFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestAnimationStepFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct FPossessableSequence MakePosseableSequence(struct AActor* ActorToPossess, struct FString TrackNameToPossess); // Function Tales.TaleQuestAnimationStepFunctionLibrary.MakePosseableSequence // Final|Native|Static|Public // @ game+0x47b73a0
	float GetPlayLength(struct UAnimSequenceBase* Anim); // Function Tales.TaleQuestAnimationStepFunctionLibrary.GetPlayLength // Final|Native|Public|Const // @ game+0x47b5de0
};

// Class Tales.TaleQuestAudioFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestAudioFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void StopMusic(TScriptInterface<struct UMusicZoneInterface> MusicZone); // Function Tales.TaleQuestAudioFunctionLibrary.StopMusic // Final|Native|Public|Const // @ game+0x47ba720
	void StartMusic(TScriptInterface<struct UMusicZoneInterface> MusicZone); // Function Tales.TaleQuestAudioFunctionLibrary.StartMusic // Final|Native|Public|Const // @ game+0x47ba600
	void SetEmitterSwitch(TScriptInterface<struct UEmitterManipulatorInterface> MusicZone, struct FName SwitchGroup, struct FName Value); // Function Tales.TaleQuestAudioFunctionLibrary.SetEmitterSwitch // Final|Native|Public|HasOutParms|Const // @ game+0x47b9790
	void SetEmitterRTPC(TScriptInterface<struct UEmitterManipulatorInterface> MusicZone, struct FName RTPC, float Value); // Function Tales.TaleQuestAudioFunctionLibrary.SetEmitterRTPC // Final|Native|Public|HasOutParms|Const // @ game+0x47b9660
	void PlayOneShot(TScriptInterface<struct UMusicZoneInterface> MusicZone, int32_t OneShotIndex); // Function Tales.TaleQuestAudioFunctionLibrary.PlayOneShot // Final|Native|Public|Const // @ game+0x47b8290
};

// Class Tales.TaleQuestCharacterFunctionStepLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestCharacterFunctionStepLibrary : UTaleQuestFunctionStepLibrary {

	void EnableCharacterInput(struct AActor* Character); // Function Tales.TaleQuestCharacterFunctionStepLibrary.EnableCharacterInput // Final|Native|Static|Public // @ game+0x47b4340
	void DisableCharacterInput(struct AActor* Character); // Function Tales.TaleQuestCharacterFunctionStepLibrary.DisableCharacterInput // Final|Native|Static|Public // @ game+0x47b3e60
};

// Class Tales.TaleQuestClassFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestClassFunctionLibrary : UTaleQuestFunctionStepLibrary {

	bool IsChildOf(struct UClass* Class, struct UClass* BaseClass); // Function Tales.TaleQuestClassFunctionLibrary.IsChildOf // Final|Native|Public|Const // @ game+0x47b6960
	bool Equals_Class(struct UClass* Left, struct UClass* Right); // Function Tales.TaleQuestClassFunctionLibrary.Equals_Class // Final|Native|Public|Const // @ game+0x47b4710
};

// Class Tales.TaleQuestClientCommandFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestClientCommandFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void PushStopMontageAnimationCommand(struct AClientCommandHandler* CommandHandler, struct AActor* TargetActor, struct UAnimMontage* Montage, float BlendOutTime); // Function Tales.TaleQuestClientCommandFunctionLibrary.PushStopMontageAnimationCommand // Final|Native|Public|Const // @ game+0x47b89a0
	float PushPlayMontageAnimationCommand(struct AClientCommandHandler* CommandHandler, struct AActor* TargetActor, struct UAnimMontage* Montage, float PlayRate, float Position); // Function Tales.TaleQuestClientCommandFunctionLibrary.PushPlayMontageAnimationCommand // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x47b8660
	struct AClientCommandHandler* CreateCommandHandler(); // Function Tales.TaleQuestClientCommandFunctionLibrary.CreateCommandHandler // Final|Native|Public|Const // @ game+0x47b3db0
};

// Class Tales.TaleQuestConversionFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestConversionFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct FString TextToString(struct FText Text); // Function Tales.TaleQuestConversionFunctionLibrary.TextToString // Final|Native|Public|HasOutParms|Const // @ game+0x47bae10
	struct FName TextToName(struct FText Text); // Function Tales.TaleQuestConversionFunctionLibrary.TextToName // Final|Native|Public|HasOutParms|Const // @ game+0x47bad40
	struct FText StringToText(struct FString String); // Function Tales.TaleQuestConversionFunctionLibrary.StringToText // Final|Native|Public|Const // @ game+0x47ba9a0
	struct FName StringToName(struct FString String); // Function Tales.TaleQuestConversionFunctionLibrary.StringToName // Final|Native|Public|Const // @ game+0x47ba8e0
	struct FText NameToText(struct FName Name); // Function Tales.TaleQuestConversionFunctionLibrary.NameToText // Final|Native|Public|HasOutParms|Const // @ game+0x47b7e60
	struct FString NameToString(struct FName Name); // Function Tales.TaleQuestConversionFunctionLibrary.NameToString // Final|Native|Public|HasOutParms|Const // @ game+0x47b7d80
	struct FString IntToString(int32_t Int); // Function Tales.TaleQuestConversionFunctionLibrary.IntToString // Final|Native|Public|Const // @ game+0x47b66e0
	float IntToFloat(int32_t Int); // Function Tales.TaleQuestConversionFunctionLibrary.IntToFloat // Final|Native|Public|Const // @ game+0x47b6660
	struct FString FloatToString(float Float); // Function Tales.TaleQuestConversionFunctionLibrary.FloatToString // Final|Native|Public|Const // @ game+0x47b4cc0
	int32_t FloatToInt(float Float); // Function Tales.TaleQuestConversionFunctionLibrary.FloatToInt // Final|Native|Public|Const // @ game+0x47b4c40
	struct FString BoolToString(bool Bool); // Function Tales.TaleQuestConversionFunctionLibrary.BoolToString // Final|Native|Public|Const // @ game+0x47b3950
};

// Class Tales.TaleQuestCoreFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestCoreFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct AGameState* GetGameState(); // Function Tales.TaleQuestCoreFunctionLibrary.GetGameState // Final|Native|Public|Const // @ game+0x47b5580
};

// Class Tales.TaleQuestCrewFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestCrewFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void ClearOverrideSpawnTeleportLocationActor(struct FGuid CrewId); // Function Tales.TaleQuestCrewFunctionLibrary.ClearOverrideSpawnTeleportLocationActor // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults // @ game+0x47b3d10
	void AddOverrideSpawnTeleportLocationActor(struct FGuid CrewId, struct AActor* InActor); // Function Tales.TaleQuestCrewFunctionLibrary.AddOverrideSpawnTeleportLocationActor // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults // @ game+0x47b3120
	void AddCrewShipToCrew(struct FGuid CrewId, struct AShip* Ship); // Function Tales.TaleQuestCrewFunctionLibrary.AddCrewShipToCrew // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults // @ game+0x47b2f70
};

// Class Tales.TaleQuestCurveFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestCurveFunctionLibrary : UTaleQuestFunctionStepLibrary {

	float SampleCurve_Float(struct UCurveFloat* Curve, float Time); // Function Tales.TaleQuestCurveFunctionLibrary.SampleCurve_Float // Final|Native|Public|Const // @ game+0x47b9230
};

// Class Tales.TaleQuestCutscenesFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestCutscenesFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void FireEventCutsceneTargetReady(struct AActor* TargetRetrievalActor, struct AActor* TargetActor); // Function Tales.TaleQuestCutscenesFunctionLibrary.FireEventCutsceneTargetReady // Final|RequiredAPI|Native|Static|Public // @ game+0x47b4a50
};

// Class Tales.TaleQuestDamageableInterfaceFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestDamageableInterfaceFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void SetVulnerability(TScriptInterface<struct UDamageableVulnerabilityInterface> DamageableVulnerabilityInterface, struct UClass* DamagerType, float DamageMultipler); // Function Tales.TaleQuestDamageableInterfaceFunctionLibrary.SetVulnerability // Final|Native|Public // @ game+0x47b9d30
	void SetDefaultVulnerability(TScriptInterface<struct UDamageableVulnerabilityInterface> DamageableVulnerabilityInterface, float DefaultVulnerability); // Function Tales.TaleQuestDamageableInterfaceFunctionLibrary.SetDefaultVulnerability // Final|Native|Public // @ game+0x47b9360
};

// Class Tales.TaleQuestDeathFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestDeathFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void WaitForParticipantDeath(struct ACharacter* DyingParticipant, struct FDamageInstance FinalBlow, char DeathType); // Function Tales.TaleQuestDeathFunctionLibrary.WaitForParticipantDeath // Final|Native|Public|HasOutParms // @ game+0x47bb700
	void Kill(TScriptInterface<struct UKillableCharacterInterface> KillableCharacter, char DeathType); // Function Tales.TaleQuestDeathFunctionLibrary.Kill // Final|Native|Public|HasOutParms|Const // @ game+0x47b6ce0
};

// Class Tales.TaleQuestDialogueFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestDialogueFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void WatchForNPCDialogueInteractionWithQueryableState(struct AActor* DialogueActor, struct ACharacter* InteractingCharacter, struct UClass* DataID); // Function Tales.TaleQuestDialogueFunctionLibrary.WatchForNPCDialogueInteractionWithQueryableState // Final|Native|Public|HasOutParms // @ game+0x47bba40
	void WatchForNPCDialogueInteraction(struct AActor* DialogueActor, struct ACharacter* InteractingCharacter, struct FName DialogueEvent); // Function Tales.TaleQuestDialogueFunctionLibrary.WatchForNPCDialogueInteraction // Final|Native|Public|HasOutParms // @ game+0x47bb920
	void WaitForNPCDialogueInteractionWithQueryableState(struct AActor* DialogueActor, struct UClass* ExpectedDataID, struct ACharacter* InteractingCharacter); // Function Tales.TaleQuestDialogueFunctionLibrary.WaitForNPCDialogueInteractionWithQueryableState // Final|Native|Public|HasOutParms // @ game+0x47bb5f0
	void SetDialogueInteractionPrompt(struct AClientCommandHandler* CommandHandler, struct UNPCDialogComponent* DialogueComponent, struct FText Prompt); // Function Tales.TaleQuestDialogueFunctionLibrary.SetDialogueInteractionPrompt // Final|Native|Public|HasOutParms|Const // @ game+0x47b9530
	void SetDialogueInteractionEnabled(TScriptInterface<struct UNPCDialogComponentInterface> DialogueComponent, bool Enabled); // Function Tales.TaleQuestDialogueFunctionLibrary.SetDialogueInteractionEnabled // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x47b9440
};

// Class Tales.TaleQuestEmoteFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestEmoteFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void PushIntoEmoteActionState(struct AActor* Target, struct UEmoteInfo* EmoteInfo, bool ForcedEmote); // Function Tales.TaleQuestEmoteFunctionLibrary.PushIntoEmoteActionState // Final|Native|Public|Const // @ game+0x47b83f0
};

// Class Tales.TaleQuestFloatMathsFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestFloatMathsFunctionLibrary : UTaleQuestFunctionStepLibrary {

	float Subtract_Float(float* Left, float* Right); // Function Tales.TaleQuestFloatMathsFunctionLibrary.Subtract_Float // Final|Native|Public|Const // @ game+0x47baac0
	float RandRange(float* Min, float* Max); // Function Tales.TaleQuestFloatMathsFunctionLibrary.RandRange // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x47b8af0
	bool NotEquals_Float(float* Left, float* Right); // Function Tales.TaleQuestFloatMathsFunctionLibrary.NotEquals_Float // Final|Native|Public|Const // @ game+0x47b7fd0
	float Multiply_Float(float* Left, float* Right); // Function Tales.TaleQuestFloatMathsFunctionLibrary.Multiply_Float // Final|Native|Public|Const // @ game+0x47b7c00
	float Modulus_Float(float* Left, float* Right, float* Reminder); // Function Tales.TaleQuestFloatMathsFunctionLibrary.Modulus_Float // Final|Native|Public|HasOutParms|Const // @ game+0x47b7a00
	bool LessThanOrEqual_Float(float* Left, float* Right); // Function Tales.TaleQuestFloatMathsFunctionLibrary.LessThanOrEqual_Float // Final|Native|Public|Const // @ game+0x47b7000
	bool LessThan(float* Left, float* Right); // Function Tales.TaleQuestFloatMathsFunctionLibrary.LessThan // Final|Native|Public|Const // @ game+0x47b6dc0
	bool GreaterThanOrEqual_Float(float* Left, float* Right); // Function Tales.TaleQuestFloatMathsFunctionLibrary.GreaterThanOrEqual_Float // Final|Native|Public|Const // @ game+0x47b63e0
	bool GreaterThan(float* Left, float* Right); // Function Tales.TaleQuestFloatMathsFunctionLibrary.GreaterThan // Final|Native|Public|Const // @ game+0x47b61a0
	bool Equals_Float(float* Left, float* Right); // Function Tales.TaleQuestFloatMathsFunctionLibrary.Equals_Float // Final|Native|Public|Const // @ game+0x47b47d0
	float Divide_Float(float* Left, float* Right); // Function Tales.TaleQuestFloatMathsFunctionLibrary.Divide_Float // Final|Native|Public|Const // @ game+0x47b4100
	float Add_Float(float Left, float Right); // Function Tales.TaleQuestFloatMathsFunctionLibrary.Add_Float // Final|Native|Public|Const // @ game+0x47b3530
};

// Class Tales.TaleQuestHealthFunctionStepLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestHealthFunctionStepLibrary : UTaleQuestFunctionStepLibrary {

	void SetMaxHealth(TScriptInterface<struct UHealthInterface>* HealthInterface, float* Health); // Function Tales.TaleQuestHealthFunctionStepLibrary.SetMaxHealth // Final|Native|Public|Const // @ game+0x47b9c50
	void SetHealthChangeEnabled(TScriptInterface<struct UHealthInterface>* HealthInterface, bool* Enabled); // Function Tales.TaleQuestHealthFunctionStepLibrary.SetHealthChangeEnabled // Final|Native|Public|Const // @ game+0x47b9aa0
	void SetHealth(TScriptInterface<struct UHealthInterface>* HealthInterface, float* Health, char* Reason); // Function Tales.TaleQuestHealthFunctionStepLibrary.SetHealth // Final|Native|Static|Public // @ game+0x47b9990
	void ResetToMaxHealth(TScriptInterface<struct UHealthInterface>* HealthInterface); // Function Tales.TaleQuestHealthFunctionStepLibrary.ResetToMaxHealth // Final|Native|Public|Const // @ game+0x47b90a0
	float GetMaxHealth(TScriptInterface<struct UHealthInterface>* HealthInterface); // Function Tales.TaleQuestHealthFunctionStepLibrary.GetMaxHealth // Final|Native|Public|Const // @ game+0x47b57f0
	float GetHealth(TScriptInterface<struct UHealthInterface>* HealthInterface); // Function Tales.TaleQuestHealthFunctionStepLibrary.GetHealth // Final|Native|Static|Public // @ game+0x47b5670
};

// Class Tales.TaleQuestIntMathsFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestIntMathsFunctionLibrary : UTaleQuestFunctionStepLibrary {

	int32_t Subtract_Int(int32_t* Left, int32_t* Right); // Function Tales.TaleQuestIntMathsFunctionLibrary.Subtract_Int // Final|Native|Static|Public // @ game+0x47bab80
	bool NotEquals(int32_t* Left, int32_t* Right); // Function Tales.TaleQuestIntMathsFunctionLibrary.NotEquals // Final|Native|Static|Public // @ game+0x47b7f10
	int32_t Multiply_Int(int32_t* Left, int32_t* Right); // Function Tales.TaleQuestIntMathsFunctionLibrary.Multiply_Int // Final|Native|Static|Public // @ game+0x47b7cc0
	int32_t Modulus_Int(int32_t* Left, int32_t* Right); // Function Tales.TaleQuestIntMathsFunctionLibrary.Modulus_Int // Final|Native|Static|Public // @ game+0x47b7b30
	bool LessThanOrEqual(int32_t* Left, int32_t* Right); // Function Tales.TaleQuestIntMathsFunctionLibrary.LessThanOrEqual // Final|Native|Static|Public // @ game+0x47b6f40
	bool LessThan(int32_t* Left, int32_t* Right); // Function Tales.TaleQuestIntMathsFunctionLibrary.LessThan // Final|Native|Static|Public // @ game+0x47b6e80
	void Increment_Int(int32_t* Value); // Function Tales.TaleQuestIntMathsFunctionLibrary.Increment_Int // Final|Native|Static|Public|HasOutParms // @ game+0x47b64a0
	bool GreaterThanOrEqual(int32_t* Left, int32_t* Right); // Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThanOrEqual // Final|Native|Static|Public // @ game+0x47b6320
	bool GreaterThan(int32_t* Left, int32_t* Right); // Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThan // Final|Native|Static|Public // @ game+0x47b6260
	bool Equals(int32_t* Left, int32_t* Right); // Function Tales.TaleQuestIntMathsFunctionLibrary.Equals // Final|Native|Static|Public // @ game+0x47b4550
	int32_t Divide_Int(int32_t* Left, int32_t* Right); // Function Tales.TaleQuestIntMathsFunctionLibrary.Divide_Int // Final|Native|Static|Public // @ game+0x47b41e0
	void Decrement_Int(int32_t* Value); // Function Tales.TaleQuestIntMathsFunctionLibrary.Decrement_Int // Final|Native|Static|Public|HasOutParms // @ game+0x47b3de0
	int32_t Add_Int(int32_t* Left, int32_t* Right); // Function Tales.TaleQuestIntMathsFunctionLibrary.Add_Int // Final|Native|Static|Public // @ game+0x47b35f0
};

// Class Tales.TaleQuestItemFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestItemFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void WaitForItemHandIn(TScriptInterface<struct UNPCCustomItemPurchaseInterface>* NPC, struct UClass** Item, TScriptInterface<struct UVoyageParticipantInterface>* HandInParticipant); // Function Tales.TaleQuestItemFunctionLibrary.WaitForItemHandIn // Final|Native|Public|HasOutParms // @ game+0x47bb4c0
	struct AItemInfo* SpawnAndWieldItem(struct AActor** Wielder, struct UClass** Item, bool* TrackItem, bool* MarkItemAsCritical, struct FText* CritialItemLostMessage); // Function Tales.TaleQuestItemFunctionLibrary.SpawnAndWieldItem // Final|RequiredAPI|Native|Public|HasOutParms // @ game+0x47ba030
};

// Class Tales.TaleQuestLogicFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestLogicFunctionLibrary : UTaleQuestFunctionStepLibrary {

	bool Logic_XOr(bool* Left, bool* Right); // Function Tales.TaleQuestLogicFunctionLibrary.Logic_XOr // Final|Native|Static|Public // @ game+0x47b72e0
	bool Logic_Or(bool* Left, bool* Right); // Function Tales.TaleQuestLogicFunctionLibrary.Logic_Or // Final|Native|Static|Public // @ game+0x47b7210
	bool Logic_Not(bool* Value); // Function Tales.TaleQuestLogicFunctionLibrary.Logic_Not // Final|Native|Static|Public // @ game+0x47b7190
	bool Logic_And(bool* Left, bool* Right); // Function Tales.TaleQuestLogicFunctionLibrary.Logic_And // Final|Native|Static|Public // @ game+0x47b70c0
};

// Class Tales.TaleQuestModifyPagesFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestModifyPagesFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void ReplacePages(struct TArray<struct UQuestBookPageBundle*>* Pages, struct TArray<struct UQuestBookPageBundle*>* PagesToReplace); // Function Tales.TaleQuestModifyPagesFunctionLibrary.ReplacePages // Final|Native|Public|HasOutParms|Const // @ game+0x47b8f80
	void ModifyPagesAtIndex(struct TArray<struct UQuestBookPageBundle*>* Pages, int32_t* BookPageIndex, char* ModifyTypeEnum); // Function Tales.TaleQuestModifyPagesFunctionLibrary.ModifyPagesAtIndex // Final|Native|Public|HasOutParms|Const // @ game+0x47b78d0
};

// Class Tales.TaleQuestNamedPointsFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestNamedPointsFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void GetNamedPointsFromGroup(struct AActor** PointsContainer, struct FName* GroupName, char* ReturnSpace, struct TArray<struct FOrientedPoint>* Points); // Function Tales.TaleQuestNamedPointsFunctionLibrary.GetNamedPointsFromGroup // Final|Native|Static|Public|HasOutParms // @ game+0x47b5970
};

// Class Tales.TaleQuestNameFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestNameFunctionLibrary : UTaleQuestFunctionStepLibrary {

	bool IsNone(struct FName* Name); // Function Tales.TaleQuestNameFunctionLibrary.IsNone // Final|Native|Static|Public // @ game+0x47b6a60
	bool Equals(struct FName* Left, struct FName* Right); // Function Tales.TaleQuestNameFunctionLibrary.Equals // Final|Native|Public|HasOutParms|Const // @ game+0x47b4610
};

// Class Tales.TaleQuestNotificationFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestNotificationFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void FireSeasonNotification(struct UTaleQuestSeasonNotificationDataAsset** InTaleQuestSeasonNotificationDataAsset); // Function Tales.TaleQuestNotificationFunctionLibrary.FireSeasonNotification // Final|Native|Public // @ game+0x47b4b00
};

// Class Tales.TaleQuestNPCHideFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestNPCHideFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void FadeOut(struct AActor** InActor); // Function Tales.TaleQuestNPCHideFunctionLibrary.FadeOut // Final|Native|Public // @ game+0x47b4920
	void FadeIn(struct AActor** InActor); // Function Tales.TaleQuestNPCHideFunctionLibrary.FadeIn // Final|Native|Public // @ game+0x47b48a0
};

// Class Tales.TaleQuestOfferingNPCFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestOfferingNPCFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void StopOfferItem(TScriptInterface<struct UOfferingNPCInterface>* OfferingNPC); // Function Tales.TaleQuestOfferingNPCFunctionLibrary.StopOfferItem // Final|Native|Public // @ game+0x47ba7c0
	void OfferItemAndWaitForPickup(TScriptInterface<struct UOfferingNPCInterface>* OfferingNPC, struct UClass** ItemToShow, struct FText* PickupItemTooltip, struct FText* CannotPickupItemTooltip, struct AActor** InteractingActor); // Function Tales.TaleQuestOfferingNPCFunctionLibrary.OfferItemAndWaitForPickup // Final|Native|Public|HasOutParms // @ game+0x47b80a0
};

// Class Tales.TaleQuestParticipantFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestParticipantFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct TArray<TScriptInterface<struct UVoyageParticipantInterface>> GetParticipants(); // Function Tales.TaleQuestParticipantFunctionLibrary.GetParticipants // Final|Native|Public|Const // @ game+0x47b5cc0
	struct ACharacter* GetParticipantCharacter(TScriptInterface<struct UVoyageParticipantInterface>* Participant); // Function Tales.TaleQuestParticipantFunctionLibrary.GetParticipantCharacter // Final|Native|Public|Const // @ game+0x47b5c10
};

// Class Tales.TaleQuestPredicatedBranchPhasingFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestPredicatedBranchPhasingFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct APhasedClusterRoot* GetPhaseClusterBranchByIndex(int32_t* CutsceneIndex); // Function Tales.TaleQuestPredicatedBranchPhasingFunctionLibrary.GetPhaseClusterBranchByIndex // Final|Native|Public|Const // @ game+0x47b5d50
};

// Class Tales.TaleQuestQueryableStateAddToIntFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestQueryableStateAddToIntFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void AddToIntQueryableState(struct UClass** DataID, int32_t* DataToAdd); // Function Tales.TaleQuestQueryableStateAddToIntFunctionLibrary.AddToIntQueryableState // Final|Native|Public // @ game+0x47b3280
};

// Class Tales.TaleQuestQueryableStateReadBoolFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestQueryableStateReadBoolFunctionLibrary : UTaleQuestFunctionStepLibrary {

	bool ReadBoolQueryableState(struct UClass** DataID, bool* DataValue); // Function Tales.TaleQuestQueryableStateReadBoolFunctionLibrary.ReadBoolQueryableState // Final|Native|Public|HasOutParms // @ game+0x47b8be0
};

// Class Tales.TaleQuestQueryableStateReadIntFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestQueryableStateReadIntFunctionLibrary : UTaleQuestFunctionStepLibrary {

	bool ReadIntQueryableState(struct UClass** DataID, int32_t* DataValue); // Function Tales.TaleQuestQueryableStateReadIntFunctionLibrary.ReadIntQueryableState // Final|Native|Public|HasOutParms // @ game+0x47b8e90
};

// Class Tales.TaleQuestQueryableStateWriteBoolFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestQueryableStateWriteBoolFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void WriteBoolQueryableState(struct UClass** DataID, bool* DataValue); // Function Tales.TaleQuestQueryableStateWriteBoolFunctionLibrary.WriteBoolQueryableState // Final|Native|Public // @ game+0x47bbb60
};

// Class Tales.TaleQuestQueryableStateWriteIntFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestQueryableStateWriteIntFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void WriteIntQueryableState(struct UClass** DataID, int32_t* DataValue); // Function Tales.TaleQuestQueryableStateWriteIntFunctionLibrary.WriteIntQueryableState // Final|Native|Public // @ game+0x47bbc30
};

// Class Tales.TaleQuestRandomFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestRandomFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct FGrabBag InitialiseGrabBag(int32_t* Min, int32_t* Max); // Function Tales.TaleQuestRandomFunctionLibrary.InitialiseGrabBag // Final|RequiredAPI|Native|Public|Const // @ game+0x47b6520
	int32_t GetGrabBagElement(struct FGrabBag* GrabBag); // Function Tales.TaleQuestRandomFunctionLibrary.GetGrabBagElement // Final|RequiredAPI|Native|Public|HasOutParms|Const // @ game+0x47b55b0
};

// Class Tales.TaleQuestShantyFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestShantyFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void StopShantyMusic(struct AShantyPlayer** InShantyPlayer); // Function Tales.TaleQuestShantyFunctionLibrary.StopShantyMusic // Final|Native|Public|Const // @ game+0x47ba860
	void StartShantyMusic(struct AShantyPlayer** InShantyPlayer); // Function Tales.TaleQuestShantyFunctionLibrary.StartShantyMusic // Final|Native|Public|Const // @ game+0x47ba6a0
};

// Class Tales.TaleQuestShipInteractionHandlerFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestShipInteractionHandlerFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void SetInteractionState(struct AActor** Ship, bool* Enabled); // Function Tales.TaleQuestShipInteractionHandlerFunctionLibrary.SetInteractionState // Final|Native|Public // @ game+0x47b9b80
};

// Class Tales.TaleQuestSpawnShipFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestSpawnShipFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void SpawnShipFromClass(struct UClass** ShipClassToSpawn, struct FTransform* ShipSpawnTransform, struct UClass** ShipSize, struct UClass** ShipType, struct UClass** ShipCategory, struct AShip** SpawnedShip, bool* IsTracked); // Function Tales.TaleQuestSpawnShipFunctionLibrary.SpawnShipFromClass // Final|Native|Public|HasOutParms|HasDefaults // @ game+0x47ba210
};

// Class Tales.TaleQuestStatFunctionLibrary
// Size: 0x188 (Inherited: 0x180)
struct UTaleQuestStatFunctionLibrary : UTaleQuestFunctionStepLibrary {
	struct FPlayerStat Stat; // 0x180(0x04)
	char UnknownData_184[0x4]; // 0x184(0x04)

	void FireStatToPlayer(TScriptInterface<struct UVoyageParticipantInterface>* PlayerToFireStatOn); // Function Tales.TaleQuestStatFunctionLibrary.FireStatToPlayer // Final|Native|Public|Const // @ game+0x47b4ba0
	void FireStatToAllPlayersInCrew(); // Function Tales.TaleQuestStatFunctionLibrary.FireStatToAllPlayersInCrew // Final|Native|Public|Const // @ game+0x47b4b80
};

// Class Tales.TaleQuestStatusEffectsFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestStatusEffectsFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void TriggerOnScreenParticles(TScriptInterface<struct UVoyageParticipantInterface>* Participant, struct UParticleSystem** ParticleSystem); // Function Tales.TaleQuestStatusEffectsFunctionLibrary.TriggerOnScreenParticles // Final|Native|Public|Const // @ game+0x47bb3e0
	void EndOnScreenParticles(TScriptInterface<struct UVoyageParticipantInterface>* Participant, struct UParticleSystem** ParticleSystem, float* Delay); // Function Tales.TaleQuestStatusEffectsFunctionLibrary.EndOnScreenParticles // Final|Native|Public|Const // @ game+0x47b4430
};

// Class Tales.TaleQuestStoryFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestStoryFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void WaitForStory(struct FName StoryName, bool ShouldBeActive); // Function Tales.TaleQuestStoryFunctionLibrary.WaitForStory // Final|RequiredAPI|Native|Public|HasOutParms // @ game+0x47bb850
	bool IsStoryActive(struct FName StoryName); // Function Tales.TaleQuestStoryFunctionLibrary.IsStoryActive // Final|RequiredAPI|Native|Public|HasOutParms|Const // @ game+0x47b6b00
};

// Class Tales.TaleQuestStoryBranchFunctionLibrary
// Size: 0x1c8 (Inherited: 0x180)
struct UTaleQuestStoryBranchFunctionLibrary : UTaleQuestFunctionStepLibrary {
	char UnknownData_180[0x8]; // 0x180(0x08)
	struct UTaleQuestStepDesc* Active; // 0x188(0x08)
	struct UTaleQuestStepDesc* Inactive; // 0x190(0x08)
	TScriptInterface<struct UTaleQuestStepInterface> Step; // 0x198(0x10)
	char UnknownData_1A8[0x20]; // 0x1a8(0x20)

	void BranchOnStory(struct FName StoryName); // Function Tales.TaleQuestStoryBranchFunctionLibrary.BranchOnStory // Final|Native|Public|HasOutParms // @ game+0x47b3aa0
};

// Class Tales.TaleQuestTransformMathsFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestTransformMathsFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct FTransform ToWorld_Transform(struct FTransform RootTransform, struct FTransform RelativeTransform); // Function Tales.TaleQuestTransformMathsFunctionLibrary.ToWorld_Transform // Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x47bb1e0
};

// Class Tales.TaleQuestTransfromConversionFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestTransfromConversionFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct FVector ToVector(struct FTransform InTransform); // Function Tales.TaleQuestTransfromConversionFunctionLibrary.ToVector // Final|Native|Public|HasOutParms|HasDefaults|Const // @ game+0x47bb0f0
	struct FRotator ToRotator(struct FTransform InTransform); // Function Tales.TaleQuestTransfromConversionFunctionLibrary.ToRotator // Final|Native|Public|HasOutParms|HasDefaults|Const // @ game+0x47baff0
	struct FTransform FromVector(struct FVector InTranslation); // Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromVector // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x47b4ee0
	struct FTransform FromOrientedPoint(struct FOrientedPoint InOrientedPoint); // Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromOrientedPoint // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x47b4da0
};

// Class Tales.TaleQuestUObjectFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestUObjectFunctionLibrary : UTaleQuestFunctionStepLibrary {

	bool IsValid(struct UObject* Object); // Function Tales.TaleQuestUObjectFunctionLibrary.IsValid // Final|Native|Static|Public // @ game+0x47b6ba0
	struct UObject* CastTo(struct UObject* Object, struct UClass* CastToClass); // Function Tales.TaleQuestUObjectFunctionLibrary.CastTo // Final|Native|Public|Const // @ game+0x47b3be0
};

// Class Tales.TaleQuestUtilityFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestUtilityFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void FailTale(struct FText FailureMessage); // Function Tales.TaleQuestUtilityFunctionLibrary.FailTale // Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x47b49a0
};

// Class Tales.TaleQuestValueFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestValueFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct FText Make_Text(struct FText Value); // Function Tales.TaleQuestValueFunctionLibrary.Make_Text // Final|Native|Public|HasOutParms|Const // @ game+0x47b7800
	struct FString Make_String(struct FString Value); // Function Tales.TaleQuestValueFunctionLibrary.Make_String // Final|Native|Public|Const // @ game+0x47b76e0
	struct FName Make_Name(struct FName Value); // Function Tales.TaleQuestValueFunctionLibrary.Make_Name // Final|Native|Public|HasOutParms|Const // @ game+0x47b7650
	int32_t Make_Int32(int32_t Value); // Function Tales.TaleQuestValueFunctionLibrary.Make_Int32 // Final|Native|Public|Const // @ game+0x47b75d0
	float Make_Float(float Value); // Function Tales.TaleQuestValueFunctionLibrary.Make_Float // Final|Native|Public|Const // @ game+0x47b7550
	bool Make_Bool(bool Value); // Function Tales.TaleQuestValueFunctionLibrary.Make_Bool // Final|Native|Public|Const // @ game+0x47b74d0
	struct FString Append_String(struct FString Prefix, struct FString Value, struct FString Suffix); // Function Tales.TaleQuestValueFunctionLibrary.Append_String // Final|Native|Public|Const // @ game+0x47b36b0
};

// Class Tales.TaleQuestVectorMathsFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestVectorMathsFunctionLibrary : UTaleQuestFunctionStepLibrary {

	float DistanceSquared(struct FVector From, struct FVector To); // Function Tales.TaleQuestVectorMathsFunctionLibrary.DistanceSquared // Final|Native|Public|HasOutParms|HasDefaults|Const // @ game+0x47b3ff0
	float Distance(struct FVector From, struct FVector To); // Function Tales.TaleQuestVectorMathsFunctionLibrary.Distance // Final|Native|Public|HasOutParms|HasDefaults|Const // @ game+0x47b3ed0
};

// Class Tales.TaleQuestWaterVolumeFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestWaterVolumeFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void SetExactWaterLevel(struct AWaterVolume* WaterVolume, float WaterLevel); // Function Tales.TaleQuestWaterVolumeFunctionLibrary.SetExactWaterLevel // Final|Native|Public // @ game+0x47b98d0
	bool IsWaterVolumeFull(struct AWaterVolume* WaterVolume); // Function Tales.TaleQuestWaterVolumeFunctionLibrary.IsWaterVolumeFull // Final|Native|Public // @ game+0x47b6c50
	void EmptyWaterVolume(struct AWaterVolume* WaterVolume); // Function Tales.TaleQuestWaterVolumeFunctionLibrary.EmptyWaterVolume // Final|Native|Public // @ game+0x47b42c0
	void AddWaterAmount(struct AWaterVolume* WaterVolume, float AmountToAdd, float LerpRate); // Function Tales.TaleQuestWaterVolumeFunctionLibrary.AddWaterAmount // Final|Native|Public // @ game+0x47b3430
};

// Class Tales.TaleQuestSelectEntryFromArrayStepDesc
// Size: 0x118 (Inherited: 0x80)
struct UTaleQuestSelectEntryFromArrayStepDesc : UTaleQuestStepDesc {
	struct UTaleQuestArrayEntrySelectionStrategy* SelectionStrategy; // 0x80(0x08)
	struct FQuestVariableArray InputArray; // 0x88(0x30)
	struct FQuestVariableAny OutputEntry; // 0xb8(0x30)
	struct FQuestVariableInt OutputEntryIndex; // 0xe8(0x30)
};

// Class Tales.TaleQuestSetDigSpotVoyageStatusStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UTaleQuestSetDigSpotVoyageStatusStepDesc : UTaleQuestStepDesc {
	char VoyageStatus; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Tales.TaleQuestShipDiveStepDesc
// Size: 0x98 (Inherited: 0x80)
struct UTaleQuestShipDiveStepDesc : UTaleQuestStepDesc {
	float DiveMusicWindUpTime; // 0x80(0x04)
	bool AutoStopDiveMusic; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	float StopDiveMusicAfter; // 0x88(0x04)
	struct FName MusicThemeName; // 0x8c(0x08)
	char UnknownData_94[0x4]; // 0x94(0x04)
};

// Class Tales.TaleQuestShipSurfaceStepDesc
// Size: 0x98 (Inherited: 0x80)
struct UTaleQuestShipSurfaceStepDesc : UTaleQuestStepDesc {
	float ResurfaceMusicWindUpTime; // 0x80(0x04)
	bool AutoStopResurfaceMusic; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	float StopResurfaceMusicAfter; // 0x88(0x04)
	struct FName MusicThemeName; // 0x8c(0x08)
	char UnknownData_94[0x4]; // 0x94(0x04)
};

// Class Tales.TaleQuestStarFieldPuzzleDimStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestStarFieldPuzzleDimStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor StarFieldPuzzleActor; // 0x80(0x30)
};

// Class Tales.TaleQuestStarFieldPuzzleEndStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestStarFieldPuzzleEndStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor StarFieldPuzzleActor; // 0x80(0x30)
};

// Class Tales.TaleQuestStarFieldPuzzleSetupAndWaitForCompletionStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestStarFieldPuzzleSetupAndWaitForCompletionStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor StarFieldPuzzleActor; // 0x80(0x30)
};

// Class Tales.TaleQuestStartCameraFadeStepDesc
// Size: 0xa0 (Inherited: 0x80)
struct UTaleQuestStartCameraFadeStepDesc : UTaleQuestStepDesc {
	float FromAlpha; // 0x80(0x04)
	float ToAlpha; // 0x84(0x04)
	float FadeTimeInSeconds; // 0x88(0x04)
	struct FLinearColor FadeColour; // 0x8c(0x10)
	bool ShouldFadeAudio; // 0x9c(0x01)
	bool HoldFadeWhenFinished; // 0x9d(0x01)
	char UnknownData_9E[0x2]; // 0x9e(0x02)
};

// Class Tales.TaleQuestStartPermanentPromptAndWaitForEndEventStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestStartPermanentPromptAndWaitForEndEventStepDesc : UTaleQuestStepDesc {
	struct FQuestVariablePrioritisedPrompt Prompt; // 0x80(0x30)
};

// Class Tales.TaleQuestStructStepDescBase
// Size: 0xd8 (Inherited: 0x80)
struct UTaleQuestStructStepDescBase : UTaleQuestStepDesc {
	struct UScriptStruct* Struct; // 0x80(0x08)
	struct TMap<struct FName, struct FQuestVariable> PropertyVarMappings; // 0x88(0x50)
};

// Class Tales.TaleQuestBreakStructStepDesc
// Size: 0xd8 (Inherited: 0xd8)
struct UTaleQuestBreakStructStepDesc : UTaleQuestStructStepDescBase {
};

// Class Tales.TaleQuestMakeStructStepDesc
// Size: 0xd8 (Inherited: 0xd8)
struct UTaleQuestMakeStructStepDesc : UTaleQuestStructStepDescBase {
};

// Class Tales.TaleQuestTaskStepDescBase
// Size: 0x88 (Inherited: 0x80)
struct UTaleQuestTaskStepDescBase : UTaleQuestStepDesc {
	struct UTaleQuestStepDesc* Task; // 0x80(0x08)
};

// Class Tales.TaleMigrationVolatileTaskStepDesc
// Size: 0x88 (Inherited: 0x88)
struct UTaleMigrationVolatileTaskStepDesc : UTaleQuestTaskStepDescBase {
};

// Class Tales.TaleQuestCrewTaskStepDesc
// Size: 0xb8 (Inherited: 0x88)
struct UTaleQuestCrewTaskStepDesc : UTaleQuestTaskStepDescBase {
	struct FQuestVariableGuid CrewId; // 0x88(0x30)
};

// Class Tales.TaleQuestPersistentForEachCrewTaskStepDesc
// Size: 0x88 (Inherited: 0x88)
struct UTaleQuestPersistentForEachCrewTaskStepDesc : UTaleQuestTaskStepDescBase {
};

// Class Tales.TaleQuestToggleAmbientMigrationForServerStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UTaleQuestToggleAmbientMigrationForServerStepDesc : UTaleQuestStepDesc {
	bool AmbientMigrationAvailable; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Tales.TaleQuestUpdateCheckpointStepDesc
// Size: 0x98 (Inherited: 0x80)
struct UTaleQuestUpdateCheckpointStepDesc : UTaleQuestStepDesc {
	struct FRewardId RewardIdToAward; // 0x80(0x08)
	struct FName CampaignIdToRemove; // 0x88(0x08)
	struct FName Feature; // 0x90(0x08)
};

// Class Tales.TaleQuestWaitForHandInStepDesc
// Size: 0xe8 (Inherited: 0x80)
struct UTaleQuestWaitForHandInStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor HandInActor; // 0x80(0x30)
	struct UClass* SpecificItem; // 0xb0(0x08)
	struct FQuestVariableItemDescType HandInItem; // 0xb8(0x30)
};

// Class Tales.TrackResponseCoordinatorStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTrackResponseCoordinatorStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableUObject CutsceneResponseCoordinator; // 0x80(0x30)
};

// Class Tales.VisualiseLoggerEQSResultsTaleStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UVisualiseLoggerEQSResultsTaleStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableArray ResultsArray; // 0x80(0x30)
	struct FQuestVariableVector SelectedResult; // 0xb0(0x30)
};

// Class Tales.WaitForActorOfInterestToUnregisterStepDesc
// Size: 0xc0 (Inherited: 0x80)
struct UWaitForActorOfInterestToUnregisterStepDesc : UTaleQuestStepDesc {
	struct UClass* ActorOfInterestId; // 0x80(0x08)
	struct FText ActorOfInterestUnregisteredFailureMessage; // 0x88(0x38)
};

// Class Tales.WaitForActorToFullyDockStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UWaitForActorToFullyDockStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor DockerActor; // 0x80(0x30)
	struct FQuestVariableActor DockableTargetActor; // 0xb0(0x30)
};

// Class Tales.WaitForGameEventToCompleteStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UWaitForGameEventToCompleteStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableGameEvent GameEvent; // 0x80(0x30)
};

// Class Tales.WaitForHealthToReachFractionStepDesc
// Size: 0x90 (Inherited: 0x80)
struct UWaitForHealthToReachFractionStepDesc : UTaleQuestStepDesc {
	struct AActor* HealthOwner; // 0x80(0x08)
	float HealthFraction; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Tales.WaitForItemPickupStepDesc
// Size: 0x110 (Inherited: 0x80)
struct UWaitForItemPickupStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor Item; // 0x80(0x30)
	struct FQuestVariableBool CompleteOnPickupAndStore; // 0xb0(0x30)
	struct FQuestVariableActor PickerUpper; // 0xe0(0x30)
};

// Class Tales.WaitForQueryableStateValueStepDescBase
// Size: 0x88 (Inherited: 0x80)
struct UWaitForQueryableStateValueStepDescBase : UTaleQuestStepDesc {
	struct UClass* DataID; // 0x80(0x08)
};

// Class Tales.WaitForQueryableStateValueBoolStepDesc
// Size: 0x90 (Inherited: 0x88)
struct UWaitForQueryableStateValueBoolStepDesc : UWaitForQueryableStateValueStepDescBase {
	bool ExpectedValue; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class Tales.WaitForQueryableStateValueIntStepDesc
// Size: 0x90 (Inherited: 0x88)
struct UWaitForQueryableStateValueIntStepDesc : UWaitForQueryableStateValueStepDescBase {
	int32_t ExpectedValue; // 0x88(0x04)
	char ComparisonType; // 0x8c(0x01)
	char UnknownData_8D[0x3]; // 0x8d(0x03)
};

// Class Tales.WaitForSpawnedPawnBaseStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UWaitForSpawnedPawnBaseStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableAISpawner AISpawner; // 0x80(0x30)
};

// Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStep
// Size: 0x230 (Inherited: 0x98)
struct UTaleQuestSelectShipwreckLocationFromValidCandidatesStep : UTaleQuestStep {
	char UnknownData_98[0x78]; // 0x98(0x78)
	struct UTaleQuestSelectorService* CachedSelectorService; // 0x110(0x08)
	char UnknownData_118[0x118]; // 0x118(0x118)
};

// Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc
// Size: 0x118 (Inherited: 0x80)
struct UTaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc : UTaleQuestStepDesc {
	struct UTaleQuestArrayEntrySelectionStrategy* SelectionStrategy; // 0x80(0x08)
	struct FQuestVariableVectorArray InputArray; // 0x88(0x30)
	struct FQuestVariableVector OutputEntry; // 0xb8(0x30)
	struct FQuestVariableBool ShuffleLists; // 0xe8(0x30)
};

// Class Tales.RemoveFlameOfFateTypeStepDesc
// Size: 0x90 (Inherited: 0x80)
struct URemoveFlameOfFateTypeStepDesc : UTaleQuestStepDesc {
	char FlameOfFateTypeToRemove; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct UClass* LanternItemCategory; // 0x88(0x08)
};

// Class Tales.TaleQuestFlameOfFateService
// Size: 0xc0 (Inherited: 0x60)
struct UTaleQuestFlameOfFateService : UTaleQuestService {
	struct UTaleQuestFlameOfFateServiceDesc* ServiceDesc; // 0x60(0x08)
	char UnknownData_68[0x58]; // 0x68(0x58)
};

// Class Tales.TaleQuestFlameOfFateServiceDesc
// Size: 0x38 (Inherited: 0x28)
struct UTaleQuestFlameOfFateServiceDesc : UTaleQuestServiceDesc {
	struct UClass* LanternItemCategory; // 0x28(0x08)
	char FlameOfFateTypeToSet; // 0x30(0x01)
	bool SetFlameOnStart; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
};

// Class Tales.TaleQuestAddBountyMapStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestAddBountyMapStep : UTaleQuestStep {
};

// Class Tales.TaleQuestAddBountyMapStepDesc
// Size: 0x188 (Inherited: 0x80)
struct UTaleQuestAddBountyMapStepDesc : UTaleQuestStepDesc {
	struct FName MapID; // 0x80(0x08)
	struct FQuestVariableName IslandName; // 0x88(0x30)
	struct FQuestVariableText Location; // 0xb8(0x30)
	struct FQuestVariableTextArray Description; // 0xe8(0x30)
	struct FQuestVariableBountyTargetArray CaptainTargets; // 0x118(0x30)
	struct FQuestVariableBountyTargetArray CrewTargets; // 0x148(0x30)
	struct UBountyMapLayout* CustomLayout; // 0x178(0x08)
	struct UClass* OverrideTreasureMapItemDesc; // 0x180(0x08)
};

// Class Tales.TaleQuestAddCargoRunMapStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestAddCargoRunMapStep : UTaleQuestStep {
};

// Class Tales.TaleQuestAddChecklistMapStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestAddChecklistMapStep : UTaleQuestStep {
};

// Class Tales.TaleQuestAddCircleMapStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestAddCircleMapStep : UTaleQuestStep {
};

// Class Tales.TaleQuestAddMerchantMapStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestAddMerchantMapStep : UTaleQuestStep {
};

// Class Tales.TaleQuestAddRiddleMapStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestAddRiddleMapStep : UTaleQuestStep {
};

// Class Tales.TaleQuestAddXMarksMapStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestAddXMarksMapStep : UTaleQuestStep {
};

// Class Tales.TaleQuestAdvanceRiddleMapStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestAdvanceRiddleMapStep : UTaleQuestStep {
};

// Class Tales.TaleQuestMapService
// Size: 0x110 (Inherited: 0x60)
struct UTaleQuestMapService : UTaleQuestService {
	char UnknownData_60[0xb0]; // 0x60(0xb0)

	void UpdateMerchantMap(struct FName* MapID, int32_t* Index, struct FTaleQuestDeliverableItem* Deliverable); // Function Tales.TaleQuestMapService.UpdateMerchantMap // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5014df0
	void AdvanceRiddleMap(struct FName* MapID); // Function Tales.TaleQuestMapService.AdvanceRiddleMap // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5014c60
};

// Class Tales.TaleQuestMapServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestMapServiceDesc : UTaleQuestServiceDesc {
};

// Class Tales.TaleQuestAddCargoRunMapStepDesc
// Size: 0x120 (Inherited: 0x80)
struct UTaleQuestAddCargoRunMapStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapID; // 0x80(0x08)
	struct FQuestVariableName IslandName; // 0x88(0x30)
	struct FQuestVariableInt NumItems; // 0xb8(0x30)
	struct FQuestVariableGuid NPCId; // 0xe8(0x30)
	struct UCargoRunMapLayout* Layout; // 0x118(0x08)
};

// Class Tales.TaleQuestAddChecklistMapStepDesc
// Size: 0x1a0 (Inherited: 0x80)
struct UTaleQuestAddChecklistMapStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapID; // 0x80(0x08)
	struct UClass* OverrideTreasureMapItemDesc; // 0x88(0x20)
	struct FQuestVariableText Title; // 0xa8(0x30)
	struct FQuestVariableText Description; // 0xd8(0x30)
	struct FQuestVariableDataAsset ChecklistItemsData; // 0x108(0x30)
	struct FQuestVariableText Afternote; // 0x138(0x30)
	struct FQuestVariableDataAsset Layout; // 0x168(0x30)
	char RadialMiniIcon; // 0x198(0x01)
	char UnknownData_199[0x7]; // 0x199(0x07)
};

// Class Tales.TaleQuestAddCircleMapStepDesc
// Size: 0xf0 (Inherited: 0x80)
struct UTaleQuestAddCircleMapStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapID; // 0x80(0x08)
	struct FQuestVariableName IslandName; // 0x88(0x30)
	struct FQuestVariableVector Location; // 0xb8(0x30)
	float CircleScale; // 0xe8(0x04)
	char RadialMiniIcon; // 0xec(0x01)
	char UnknownData_ED[0x3]; // 0xed(0x03)
};

// Class Tales.TaleQuestAddMerchantMapStepDesc
// Size: 0x150 (Inherited: 0x80)
struct UTaleQuestAddMerchantMapStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapID; // 0x80(0x08)
	struct FQuestVariableName IslandName; // 0x88(0x30)
	struct FQuestVariableText DeliveryLocation; // 0xb8(0x30)
	struct FQuestVariableText DeliverByTime; // 0xe8(0x30)
	struct FQuestVariableMerchantItemArray Items; // 0x118(0x30)
	struct UMerchantMapLayout* Layout; // 0x148(0x08)
};

// Class Tales.TaleQuestAddRiddleMapBaseStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct UTaleQuestAddRiddleMapBaseStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapID; // 0x80(0x08)
	struct FQuestVariableName IslandName; // 0x88(0x30)
};

// Class Tales.TaleQuestAddRiddleMapStepDesc
// Size: 0xc8 (Inherited: 0xb8)
struct UTaleQuestAddRiddleMapStepDesc : UTaleQuestAddRiddleMapBaseStepDesc {
	struct TArray<struct FText> Text; // 0xb8(0x10)
};

// Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc
// Size: 0xe8 (Inherited: 0xb8)
struct UTaleQuestAddRiddleMapUsingVariableStepDesc : UTaleQuestAddRiddleMapBaseStepDesc {
	struct FQuestVariableTextArray TextVariable; // 0xb8(0x30)
};

// Class Tales.TaleQuestAddXMarksMapStepDesc
// Size: 0x150 (Inherited: 0x80)
struct UTaleQuestAddXMarksMapStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapID; // 0x80(0x08)
	char QuestIconOverride; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct FQuestVariableName IslandName; // 0x90(0x30)
	struct FQuestVariableVector Location; // 0xc0(0x30)
	struct FQuestVariableBool IsUnderground; // 0xf0(0x30)
	struct FTaleQuestVariableTreasureMapItemDescType TreasureMapOverride; // 0x120(0x30)
};

// Class Tales.TaleQuestAdvanceRiddleMapStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UTaleQuestAdvanceRiddleMapStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapID; // 0x80(0x08)
};

// Class Tales.TaleQuestRemoveMapStep
// Size: 0xa0 (Inherited: 0x98)
struct UTaleQuestRemoveMapStep : UTaleQuestStep {
	struct UTaleQuestRemoveMapStepDesc* StepDesc; // 0x98(0x08)
};

// Class Tales.TaleQuestRemoveMapStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct UTaleQuestRemoveMapStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapID; // 0x80(0x08)
	struct FQuestVariableVector Location; // 0x88(0x30)
};

// Class Tales.TaleQuestUpdateMerchantMapStep
// Size: 0xa0 (Inherited: 0x98)
struct UTaleQuestUpdateMerchantMapStep : UTaleQuestStep {
	struct UTaleQuestUpdateMerchantMapStepDesc* Desc; // 0x98(0x08)
};

// Class Tales.TaleQuestUpdateMerchantMapStepDesc
// Size: 0xe8 (Inherited: 0x80)
struct UTaleQuestUpdateMerchantMapStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapID; // 0x80(0x08)
	struct FQuestVariableMerchantItem Item; // 0x88(0x30)
	struct FQuestVariableInt Index; // 0xb8(0x30)
};

// Class Tales.TaleQuestWaitForChecklistMapCompletionStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UTaleQuestWaitForChecklistMapCompletionStepDesc : UTaleQuestMapStepDescBase {
	struct FName MapID; // 0x80(0x08)
};

