// Class AthenaCheat.AthenaCheatManager
// Size: 0x120 (Inherited: 0x78)
struct UAthenaCheatManager : UCheatManager {
	struct ACinematicCameraController* CinematicCameraController; // 0x78(0x08)
	struct UClass* CinematicCameraControllerClass; // 0x80(0x08)
	char UnknownData_88[0x28]; // 0x88(0x28)
	struct TArray<struct FWorldMarkerDesc> CreatedWorldMarkers; // 0xb0(0x10)
	struct UGameEventSchedulerSettingsAsset* DebugSchedulerSettings; // 0xc0(0x08)
	struct AServerPerformanceReplicator* ServerPerformanceReplicator; // 0xc8(0x08)
	float TeleportToDigsiteHeightOffset; // 0xd0(0x04)
	char UnknownData_D4[0x4c]; // 0xd4(0x4c)

	void WindTriggerChangeEnabled(bool* Enabled); // Function AthenaCheat.AthenaCheatManager.WindTriggerChangeEnabled // Final|Exec|Native|Public|BlueprintCallable // @ game+0x52a10b0
	void WindTriggerChange(int32_t* ChangeInstantly); // Function AthenaCheat.AthenaCheatManager.WindTriggerChange // Final|Exec|Native|Public // @ game+0x52a1030
	void WindSetVector(float* X, float* Y); // Function AthenaCheat.AthenaCheatManager.WindSetVector // Final|Exec|Native|Public // @ game+0x52a0f70
	void WindSetMagnitude(float* Magnitude); // Function AthenaCheat.AthenaCheatManager.WindSetMagnitude // Final|Exec|Native|Public // @ game+0x52a0ef0
	void WindSetDirection(float* X, float* Y); // Function AthenaCheat.AthenaCheatManager.WindSetDirection // Final|Exec|Native|Public // @ game+0x52a0e30
	void WindReloadParams(); // Function AthenaCheat.AthenaCheatManager.WindReloadParams // Final|Exec|Native|Public // @ game+0x52a0e10
	void WindPrintDirection(); // Function AthenaCheat.AthenaCheatManager.WindPrintDirection // Final|Exec|Native|Public // @ game+0x52a0df0
	void WindEnableDebug(); // Function AthenaCheat.AthenaCheatManager.WindEnableDebug // Final|Exec|Native|Public|BlueprintCallable // @ game+0x52a0dd0
	void WindDisableDebug(); // Function AthenaCheat.AthenaCheatManager.WindDisableDebug // Final|Exec|Native|Public|BlueprintCallable // @ game+0x52a0db0
	void WindAlignWithCamera(); // Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera // Final|Exec|Native|Public // @ game+0x52a0d90
	void Walk(); // Function AthenaCheat.AthenaCheatManager.Walk // Exec|Native|Public // @ game+0x52a0d70
	void VomitWithType(struct FName* VomitType, float* Duration); // Function AthenaCheat.AthenaCheatManager.VomitWithType // Final|Exec|Native|Public|HasOutParms // @ game+0x52a0ca0
	void Vomit(); // Function AthenaCheat.AthenaCheatManager.Vomit // Final|Exec|Native|Public // @ game+0x52a0c80
	void ValidateNPCCullingDistance(); // Function AthenaCheat.AthenaCheatManager.ValidateNPCCullingDistance // Final|Exec|Native|Public // @ game+0x52a0c60
	void UpdateInvasionAggressivePassiveTeleportOffsetDistance(struct FString* InDistance); // Function AthenaCheat.AthenaCheatManager.UpdateInvasionAggressivePassiveTeleportOffsetDistance // Final|Exec|Native|Public // @ game+0x52a0bc0
	void UpdateDisplayString(struct FString* Namespace, struct FString* Key, struct FString* SourceString); // Function AthenaCheat.AthenaCheatManager.UpdateDisplayString // Final|Exec|Native|Public // @ game+0x52a0a60
	void UnlockTradeRouteSelectionForMyCrew(); // Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew // Final|Exec|Native|Public // @ game+0x52a0a40
	void UnlockTradeRouteSelectionForCrew(struct FGuid* CrewId); // Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x52a09a0
	void UnlockEntitlementCategory(struct FString* EntitlementMapToUnlock); // Function AthenaCheat.AthenaCheatManager.UnlockEntitlementCategory // Final|Exec|Native|Public // @ game+0x52a0900
	void UnlockEntitlement(struct FString* EntitlementId); // Function AthenaCheat.AthenaCheatManager.UnlockEntitlement // Final|Exec|Native|Public // @ game+0x52a0860
	void UnlockAndEquipSkeletonCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipSkeletonCurse // Final|Exec|Native|Public // @ game+0x52a0840
	void UnlockAndEquipItemFromEntitlement(struct FString* EntitlementId); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipItemFromEntitlement // Final|Exec|Native|Public // @ game+0x52a07a0
	void UnlockAndEquipGoldGhostCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGoldGhostCurse // Final|Exec|Native|Public // @ game+0x52a0780
	void UnlockAndEquipGhostCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGhostCurse // Final|Exec|Native|Public // @ game+0x52a0760
	void UnlockAllTallTales(); // Function AthenaCheat.AthenaCheatManager.UnlockAllTallTales // Final|Exec|Native|Public // @ game+0x52a0740
	void UnlockAllSkeletonClothes(); // Function AthenaCheat.AthenaCheatManager.UnlockAllSkeletonClothes // Final|Exec|Native|Public // @ game+0x52a0720
	void UnlockAllEntitlements(int32_t* TrueFalse); // Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements // Final|Exec|Native|Public // @ game+0x52a06a0
	void UnlockAllEmblemsAndAchievements(); // Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements // Final|Exec|Native|Public // @ game+0x52a0680
	void UnBreakLeg(); // Function AthenaCheat.AthenaCheatManager.UnBreakLeg // Final|Exec|Native|Public // @ game+0x52a0660
	void TutorialAction(struct FString* ActionTypeString); // Function AthenaCheat.AthenaCheatManager.TutorialAction // Final|Exec|Native|Public // @ game+0x52a05c0
	void TriggerRewardNotification(struct FName* Identifier); // Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification // Final|Exec|Native|Public|HasOutParms // @ game+0x52a0530
	void TriggerLosingCrewTale(struct FString* InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerLosingCrewTale // Final|Exec|Native|Public // @ game+0x52a0490
	void TriggerLandmarkReaction(int32_t* ActionType); // Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction // Final|Exec|Native|Public // @ game+0x52a0410
	void TriggerFogManagerAtNearestIsland(); // Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland // Final|Exec|Native|Public // @ game+0x52a03f0
	void TriggerFactionBattleLosingBanner(); // Function AthenaCheat.AthenaCheatManager.TriggerFactionBattleLosingBanner // Final|Exec|Native|Public // @ game+0x52a03d0
	void TriggerEmblemUnlockedMessage(struct FString* EmblemFriendlyName); // Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage // Final|Exec|Native|Public // @ game+0x52a0330
	void TriggerDebugAggressivePassiveInvasion(struct FString* InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressivePassiveInvasion // Final|Exec|Native|Public // @ game+0x52a0290
	void TriggerDebugAggressiveAggressiveInvasion(struct FString* InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressiveAggressiveInvasion // Final|Exec|Native|Public // @ game+0x52a01f0
	void TriggerControllerConnectionChange(bool* IsConnect, int32_t* UserId, int32_t* ControllerId); // Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange // Final|Exec|Native|Public // @ game+0x52a00f0
	void TriggerContestMatchmakingMigration(); // Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration // Final|Exec|Native|Public // @ game+0x52a00d0
	void TriggerAIShipTimerBattle(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle // Final|Exec|Native|Public // @ game+0x52a0090
	void TriggerAIShipPassive(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive // Final|Exec|Native|Public // @ game+0x52a0070
	void TriggerAIShipEncounter(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter // Final|Exec|Native|Public // @ game+0x52a0050
	void TriggerAIShipAggressive(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive // Final|Exec|Native|Public // @ game+0x52a0030
	void TriggerAdvertiseGameEventsOnDemandAvailability(); // Function AthenaCheat.AthenaCheatManager.TriggerAdvertiseGameEventsOnDemandAvailability // Final|Exec|Native|Public // @ game+0x52a00b0
	void TransferReapersTributeToShip(int32_t* TributeAmountToAdd); // Function AthenaCheat.AthenaCheatManager.TransferReapersTributeToShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529ffb0
	void ToggleVideprinter(struct FString* Id); // Function AthenaCheat.AthenaCheatManager.ToggleVideprinter // Final|Exec|Native|Public // @ game+0x529ff10
	void ToggleThirdPerson(); // Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson // Final|Exec|Native|Public // @ game+0x529fef0
	void ToggleStoryRefresh(); // Function AthenaCheat.AthenaCheatManager.ToggleStoryRefresh // Final|Exec|Native|Public // @ game+0x529fed0
	void ToggleStoryDisplayFilter(bool* IsIncludeFilter, struct FString* Filter); // Function AthenaCheat.AthenaCheatManager.ToggleStoryDisplayFilter // Final|Exec|Native|Public // @ game+0x529fde0
	void ToggleSeaClueLocationQueryDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay // Final|Exec|Native|Public // @ game+0x529fdc0
	void ToggleRetailDrawDebug(); // Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug // Final|Exec|Native|Public // @ game+0x529fda0
	void ToggleNoClip(); // Function AthenaCheat.AthenaCheatManager.ToggleNoClip // Final|Exec|Native|Public // @ game+0x529fd80
	void ToggleNearestSuperheatedWater(); // Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater // Final|Exec|Native|Public // @ game+0x529fd60
	void ToggleNearestLava(); // Function AthenaCheat.AthenaCheatManager.ToggleNearestLava // Final|Exec|Native|Public // @ game+0x529fd40
	void ToggleMigrationPointOfInterestChecks(bool* Enabled); // Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks // Final|Exec|Native|Public // @ game+0x529fcb0
	void ToggleIslandSelectionDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay // Final|Exec|Native|Public // @ game+0x529fc90
	void ToggleGlint(); // Function AthenaCheat.AthenaCheatManager.ToggleGlint // Final|Exec|Native|Public // @ game+0x529fc70
	void ToggleFastShipControls(); // Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls // Final|Exec|Native|Public // @ game+0x529fc50
	void ToggleFactionDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleFactionDebugDisplay // Final|Exec|Native|Public // @ game+0x529fc30
	void ToggleDrowning(); // Function AthenaCheat.AthenaCheatManager.ToggleDrowning // Final|Exec|Native|Public // @ game+0x529fc10
	void ToggleDrawShipSpeed(); // Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed // Final|Exec|Native|Public // @ game+0x529fbf0
	void ToggleDrawAboveIslandBounds(); // Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds // Final|Exec|Native|Public // @ game+0x529fbd0
	void ToggleDisplayStories(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayStories // Final|Exec|Native|Public // @ game+0x529fbb0
	void ToggleDisplayEmergentBattleBanners(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayEmergentBattleBanners // Final|Exec|Native|Public // @ game+0x529fb90
	void ToggleDisplayCannonAISpawnerZones(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones // Final|Exec|Native|Public // @ game+0x529fb70
	void ToggleDebugFlying(); // Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529fb50
	void ToggleDeathCamera(); // Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera // Final|Exec|Native|Public // @ game+0x529fb30
	void ToggleDamageAllowedToPlayerShip(); // Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip // Final|Exec|Native|Public // @ game+0x529fb10
	void ToggleCrewIdToBeBlockedFromBeingInvaded(struct FString* InCrewId); // Function AthenaCheat.AthenaCheatManager.ToggleCrewIdToBeBlockedFromBeingInvaded // Final|Exec|Native|Public // @ game+0x529fa70
	void ToggleContestScoreDebug(); // Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug // Final|Exec|Native|Public // @ game+0x529fa50
	void ToggleCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera // Final|Exec|Native|Public // @ game+0x529fa30
	void ToggleAudioReportingForVeryCloseAudio(); // Function AthenaCheat.AthenaCheatManager.ToggleAudioReportingForVeryCloseAudio // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529fa10
	void ToggleAudioReporting(); // Function AthenaCheat.AthenaCheatManager.ToggleAudioReporting // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529f9f0
	void ToggleAttributeOverride(); // Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride // Final|Exec|Native|Public // @ game+0x529f9d0
	void ToggleAggressivePassiveTeleportUseEQS(); // Function AthenaCheat.AthenaCheatManager.ToggleAggressivePassiveTeleportUseEQS // Final|Exec|Native|Public // @ game+0x529f9b0
	void TestForceArchiveAsyncPoolCanaryCrash(); // Function AthenaCheat.AthenaCheatManager.TestForceArchiveAsyncPoolCanaryCrash // Final|Exec|Native|Public // @ game+0x529f990
	void TestCrashDumpCreationOnRunnableThread(); // Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread // Final|Exec|Native|Public // @ game+0x529f970
	void TestCrashDumpCreationOnMainThread(); // Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread // Final|Exec|Native|Public // @ game+0x529f950
	void TeleportToShip(); // Function AthenaCheat.AthenaCheatManager.TeleportToShip // Final|Exec|Native|Public // @ game+0x529f930
	void TeleportToPlayerStart(); // Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart // Final|Exec|Native|Public // @ game+0x529f910
	void TeleportToNearestTreasureLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation // Final|Exec|Native|Public // @ game+0x529f8f0
	void TeleportToLocation(float* LocationX, float* LocationY, float* LocationZ); // Function AthenaCheat.AthenaCheatManager.TeleportToLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529f7e0
	void TeleportToHideout(); // Function AthenaCheat.AthenaCheatManager.TeleportToHideout // Final|Exec|Native|Public // @ game+0x529f7c0
	void TeleportToDebugDestinationLocation(struct FString* ActorIdString, struct FString* DestinationId); // Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation // Final|Exec|Native|Public // @ game+0x529f6c0
	void TeleportToAggressiveGhostShipEncounter(); // Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter // Final|Exec|Native|Public // @ game+0x529f6a0
	void TeleportShip(float* X, float* Y, float* Z); // Function AthenaCheat.AthenaCheatManager.TeleportShip // Final|Exec|Native|Public // @ game+0x529f590
	void TeleportPlayerToSpireLocation(int32_t* SpireIndex); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation // Final|Exec|Native|Public // @ game+0x529f4f0
	void TeleportPlayerToSafety(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety // Final|Exec|Native|Public // @ game+0x529f4d0
	void TeleportPlayerToOffsetAndReturn(float* OffsetX, float* OffsetY, float* OffsetZ, float* ReturnTime); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529f380
	void TeleportPlayerToNearestActiveRiddleLandmark(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToNearestActiveRiddleLandmark // Final|Exec|Native|Public // @ game+0x529f360
	void TeleportPlayerToMerchantCrateSpawnLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToMerchantCrateSpawnLocation // Final|Exec|Native|Public // @ game+0x529f340
	void TeleportPlayerToKraken(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken // Final|Exec|Native|Public // @ game+0x529f320
	void TeleportPlayersCrewShipToPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529f570
	void TeleportOutOfHideout(); // Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout // Final|Exec|Native|Public // @ game+0x529f300
	void TeleportCrewToShip(struct FString* CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip // Final|Exec|Native|Public // @ game+0x529f260
	void TeleportCrewToSafeSpawnLocationFromRemoteActor(struct FString* ActorIdString, struct FString* CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor // Final|Exec|Native|Public // @ game+0x529f160
	void TeleportCrewToSafeSpawnLocation(struct FString* CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation // Final|Exec|Native|Public // @ game+0x529f0c0
	void TeleportCrewMemberToShip(struct FString* ActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip // Final|Exec|Native|Public // @ game+0x529f020
	void TeleportAllPlayersToShip(); // Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip // Final|Exec|Native|Public // @ game+0x529f000
	void TeleportAllPlayersToPlayerStart(); // Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart // Final|Exec|Native|Public // @ game+0x529efe0
	void TeleportAllCrewsToShips(); // Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips // Final|Exec|Native|Public // @ game+0x529efc0
	void TeleportAllCrewsToCrewSpawnLocations(); // Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations // Final|Exec|Native|Public // @ game+0x529efa0
	void TeleportActorToTrackedActorType(struct FString* ActorIdString, int32_t* DestinationActorType); // Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529eec0
	void TeleportActorToTeleportLocationActor(struct FString* ControllerActorIdString, struct FString* TeleportLocationActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529edc0
	void TeleportActorToPlayerBuriedDigSite(struct FString* ActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportActorToPlayerBuriedDigSite // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529ed20
	void TeleportActorToLocation(struct FString* ActorIdString, float* LocationX, float* LocationY, float* LocationZ, float* Yaw); // Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529eb60
	void TeleportActorToIsland(struct FString* ActorIdString, struct FString* IslandName); // Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529ea60
	void TeleportActorToDigSite(struct FString* ActorIdString, bool* WasBuriedByPlayer); // Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529e980
	void TeleportActorToActorWithOffset(struct FString* ActorIdString, struct FString* DestinationActorIdString, float* OffsetX, float* OffsetY, float* OffsetZ); // Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529e7c0
	void SwitchActiveStory(struct FString* StoryNameToRemove, struct FString* StoryNameToAdd, bool* AddIfNonExistentStory); // Function AthenaCheat.AthenaCheatManager.SwitchActiveStory // Final|Exec|Native|Public // @ game+0x529e680
	void SuperShovel(); // Function AthenaCheat.AthenaCheatManager.SuperShovel // Final|Exec|Native|Public // @ game+0x529e660
	void SuperSailor(); // Function AthenaCheat.AthenaCheatManager.SuperSailor // Final|Exec|Native|Public // @ game+0x529e640
	void StraightenAllTrinketsOnOwnShip(); // Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnOwnShip // Final|Exec|Native|Public // @ game+0x529e620
	void StraightenAllTrinketsOnAllShips(); // Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnAllShips // Final|Exec|Native|Public // @ game+0x529e600
	void StoreWieldedItemInBootyStorageInCurrentIsland(); // Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland // Final|Exec|Native|Public // @ game+0x529e5e0
	void StoreWieldedItemInBootyStorage(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage // Final|Exec|Native|Public // @ game+0x529e540
	void StoreShipLocation(float LocationX, float LocationY, float LocationZ, float Yaw); // Function AthenaCheat.AthenaCheatManager.StoreShipLocation // Final|Exec|Native|Public // @ game+0x529e3f0
	void StopShip(); // Function AthenaCheat.AthenaCheatManager.StopShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529e3d0
	void StopPetHangout(); // Function AthenaCheat.AthenaCheatManager.StopPetHangout // Final|Exec|Native|Public // @ game+0x529e3b0
	void StopOverridingOnlinePermissions(); // Function AthenaCheat.AthenaCheatManager.StopOverridingOnlinePermissions // Final|Exec|Native|Public // @ game+0x529e390
	void StopLocalSequences(); // Function AthenaCheat.AthenaCheatManager.StopLocalSequences // Final|Exec|Native|Public // @ game+0x529e370
	void StopAllShips(); // Function AthenaCheat.AthenaCheatManager.StopAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529e350
	void StopAllPetsHangout(); // Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout // Final|Exec|Native|Public // @ game+0x529e330
	void StockShip(struct FString EntitlementAndAmountString); // Function AthenaCheat.AthenaCheatManager.StockShip // Final|Exec|Native|Public // @ game+0x529e290
	void StartVoyage(struct FString SourceAssetName, bool Development); // Function AthenaCheat.AthenaCheatManager.StartVoyage // Final|Exec|Native|Public // @ game+0x529e1b0
	void StartTimedStatsCapture(float CaptureLengthInSeconds); // Function AthenaCheat.AthenaCheatManager.StartTimedStatsCapture // Final|Exec|Native|Public // @ game+0x529e130
	void StartSicknessOnPlayer(); // Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer // Final|Exec|Native|Public // @ game+0x529e110
	void StartSelectedRomeVoyage(struct FString RomeVoyageString); // Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage // Final|Exec|Native|Public // @ game+0x529e070
	void StartNearestVolcano(); // Function AthenaCheat.AthenaCheatManager.StartNearestVolcano // Final|Exec|Native|Public // @ game+0x529e050
	void StartNearestGeysers(); // Function AthenaCheat.AthenaCheatManager.StartNearestGeysers // Final|Exec|Native|Public // @ game+0x529e030
	void StartNearestEarthquake(); // Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake // Final|Exec|Native|Public // @ game+0x529e010
	void StartInvasionMatchmaking(); // Function AthenaCheat.AthenaCheatManager.StartInvasionMatchmaking // Final|Exec|Native|Public // @ game+0x529dff0
	void StartGuildSessionAsNewCrew(); // Function AthenaCheat.AthenaCheatManager.StartGuildSessionAsNewCrew // Final|Exec|Native|Public // @ game+0x529dfd0
	void StartGuildSessionAsCrew(); // Function AthenaCheat.AthenaCheatManager.StartGuildSessionAsCrew // Final|Exec|Native|Public // @ game+0x529dfb0
	void StartDemoSession(); // Function AthenaCheat.AthenaCheatManager.StartDemoSession // Final|Exec|Native|Public // @ game+0x529df90
	void StartCargoRunFromNearestNPC(int32_t NumOfCrates); // Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC // Final|Exec|Native|Public // @ game+0x529df10
	void StartCaptaincySessionAsNewCrew(); // Function AthenaCheat.AthenaCheatManager.StartCaptaincySessionAsNewCrew // Final|Exec|Native|Public // @ game+0x529def0
	void StartAshenLordGeysers(); // Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers // Final|Exec|Native|Public // @ game+0x529ded0
	void StartAllVolcanos(); // Function AthenaCheat.AthenaCheatManager.StartAllVolcanos // Final|Exec|Native|Public // @ game+0x529deb0
	void StartAllCrewVoyages(); // Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages // Final|Exec|Native|Public // @ game+0x529de90
	void StarFieldMaskStartSkySpin(); // Function AthenaCheat.AthenaCheatManager.StarFieldMaskStartSkySpin // Final|Exec|Native|Public // @ game+0x529de70
	void SpireStreamOut(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.SpireStreamOut // Final|Exec|Native|Public // @ game+0x529ddf0
	void SpireStreamIn(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.SpireStreamIn // Final|Exec|Native|Public // @ game+0x529dd70
	void SpinShip(float YawSpdInDegreesPerSecond); // Function AthenaCheat.AthenaCheatManager.SpinShip // Final|Exec|Native|Public // @ game+0x529dcf0
	void SpawnWatercraftUnlimited(struct FString WatercraftClassString); // Function AthenaCheat.AthenaCheatManager.SpawnWatercraftUnlimited // Final|Exec|Native|Public // @ game+0x529dc50
	void SpawnWatercraft(struct FString WatercraftClassString); // Function AthenaCheat.AthenaCheatManager.SpawnWatercraft // Final|Exec|Native|Public // @ game+0x529dbb0
	void SpawnTreasureChestOfType(struct FString ChestTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x529db00
	void SpawnTreasureArtifact(struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact // Final|Exec|Native|Public // @ game+0x529da60
	void SpawnTinySharkAtLocation(float X, float Y, float Z, int32_t PartIndex); // Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation // Final|Exec|Native|Public // @ game+0x529d910
	void SpawnTinySharkAtCurrentLocation(int32_t ControllerParamIndex, int32_t PartIndex); // Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation // Final|Exec|Native|Public // @ game+0x529d850
	void SpawnStrongholdKeyFromGameEventType(struct FString FortEventName); // Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType // Final|Exec|Native|Public|HasOutParms // @ game+0x529d7a0
	void SpawnStrongholdKey(); // Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey // Final|Exec|Native|Public // @ game+0x529d780
	void SpawnSmallShipAtIsland(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529d6e0
	void SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnSmallShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529d590
	void SpawnSkeletonAtNearestAISpawnPoint(); // Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint // Final|Exec|Native|Public // @ game+0x529d570
	void SpawnShipOfType(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw, struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnShipOfType // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529d3b0
	void SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw, struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable // Final|Exec|Native|Public // @ game+0x529d240
	void SpawnShipFromDescInFrontOfThePlayer(struct FString InShipDescAssetString); // Function AthenaCheat.AthenaCheatManager.SpawnShipFromDescInFrontOfThePlayer // Final|Exec|Native|Public // @ game+0x529d1a0
	void SpawnShipFromDesc(struct FString InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529cfe0
	void SpawnShipAtIsland(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529cf40
	void SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529cdf0
	void SpawnSeagull(); // Function AthenaCheat.AthenaCheatManager.SpawnSeagull // Final|Exec|Native|Public // @ game+0x529cdd0
	void SpawnRandomSeagull(); // Function AthenaCheat.AthenaCheatManager.SpawnRandomSeagull // Final|Exec|Native|Public // @ game+0x529cdb0
	void SpawnOceanCrawlersOnShip(); // Function AthenaCheat.AthenaCheatManager.SpawnOceanCrawlersOnShip // Final|Exec|Native|Public // @ game+0x529cd90
	void SpawnNumberOfAI(struct FString AIDescString, int32_t NumToSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI // Final|Exec|Native|Public // @ game+0x529ccb0
	void SpawnNightmareAggressiveGhostShipEncountersRandom(); // Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom // Final|Exec|Native|Public // @ game+0x529cc90
	void SpawnNightmareAggressiveGhostShipEncountersNearToPlayer(); // Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer // Final|Exec|Native|Public // @ game+0x529cc70
	void SpawnMultipleTreasureChestsOfType(struct FString ChestTypeString, int32_t Num); // Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x529cb70
	void SpawnMessageInABottle(struct FString MessageInABottleTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle // Final|Exec|Native|Public // @ game+0x529cad0
	void SpawnMermaid(); // Function AthenaCheat.AthenaCheatManager.SpawnMermaid // Final|Exec|Native|Public // @ game+0x529cab0
	void SpawnMerchantFauna(struct FString FaunaTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna // Final|Exec|Native|Public // @ game+0x529ca10
	void SpawnMerchantCrate(struct FString MerchantCrateTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate // Final|Exec|Native|Public // @ game+0x529c970
	void SpawnMerchantCargo(struct FString MerchantCargoTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo // Final|Exec|Native|Public // @ game+0x529c8d0
	void SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles); // Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles // Final|Exec|Native|Public // @ game+0x529c850
	void SpawnKrakenAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation // Final|Exec|Native|Public // @ game+0x529c830
	void SpawnItemOnFloor(struct FString ItemString); // Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor // Final|Exec|Native|Public // @ game+0x529c790
	void SpawnItemInHand(struct FString ItemString); // Function AthenaCheat.AthenaCheatManager.SpawnItemInHand // Final|Exec|Native|Public // @ game+0x529c6f0
	void SpawnGoldMound(struct FString GoldMoundTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnGoldMound // Final|Exec|Native|Public // @ game+0x529c650
	void SpawnGlobalDigSpotService(); // Function AthenaCheat.AthenaCheatManager.SpawnGlobalDigSpotService // Final|Exec|Native|Public // @ game+0x529c630
	void SpawnGeyserAtPlayerLocationWithDormancy(float Dormancy); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy // Final|Exec|Native|Public // @ game+0x529c5b0
	void SpawnGeyserAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation // Final|Exec|Native|Public // @ game+0x529c590
	void SpawnGeyserAtLocation(float LocationX, float LocationY, float LocationZ, float Dormancy); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation // Final|Exec|Native|Public // @ game+0x529c440
	void SpawnFogAtPlayerPosition(); // Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition // Final|Exec|Native|Public // @ game+0x529c420
	void SpawnFishAtPlayerLocation(struct FString InBaitType); // Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation // Final|Exec|Native|Public // @ game+0x529c380
	void SpawnFirework(struct FString FireworkItemString); // Function AthenaCheat.AthenaCheatManager.SpawnFirework // Final|Exec|Native|Public // @ game+0x529c2e0
	void SpawnCursedCannonball(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball // Final|Exec|Native|Public // @ game+0x529c240
	void SpawnContextualPrompt(struct FString PromptAccessKey); // Function AthenaCheat.AthenaCheatManager.SpawnContextualPrompt // Final|Exec|Native|Public // @ game+0x529c1a0
	void SpawnCollectorsChestOfType(struct FString ChestTypeString, struct FString RewardId); // Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x529c070
	void SpawnCargoRunCrate(struct FString SpawnCargoRunCrateString); // Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate // Final|Exec|Native|Public // @ game+0x529bfd0
	void SpawnCabinDoorInFrontOfPlayer(float Distance); // Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer // Final|Exec|Native|Public // @ game+0x529bf50
	void SpawnBountyReward(struct FString BountyTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnBountyReward // Final|Exec|Native|Public // @ game+0x529beb0
	void SpawnBootyPickupPoint(); // Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint // Final|Exec|Native|Public // @ game+0x529be90
	void SpawnBarrelGroup(bool ForcedCloseSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup // Final|Exec|Native|Public // @ game+0x529be00
	void SpawnAThousandTreasureChests(); // Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests // Final|Exec|Native|Public // @ game+0x529bc20
	void SpawnAndEquipDebugWieldable(struct FString DebugWieldableTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable // Final|Exec|Native|Public // @ game+0x529bd60
	void SpawnAllBooty(int32_t InNumOfEachToSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnAllBooty // Final|Exec|Native|Public // @ game+0x529bce0
	void SpawnAINoTrigger(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger // Final|Exec|Native|Public // @ game+0x529bb80
	void SpawnAIEncounter(struct FString AIEncounterString); // Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter // Final|Exec|Native|Public // @ game+0x529bae0
	void SpawnAIAtNearestAISpawnPoint(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint // Final|Exec|Native|Public // @ game+0x529ba40
	void SpawnAIAtLocationDelayed(struct FString AIDescString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed // Final|Exec|Native|Public // @ game+0x529b850
	void SpawnAIAtCurrentLocationDelayed(struct FString AIDescString, float Delay); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed // Final|Exec|Native|Public // @ game+0x529b770
	void SpawnAI(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAI // Final|Exec|Native|Public // @ game+0x529b6d0
	void SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid // Final|Exec|Native|Public // @ game+0x529bcc0
	void SpawnAggressiveGhostShipEncounterSpireFriendlyFormation(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation // Final|Exec|Native|Public // @ game+0x529bca0
	void SpawnAggressiveGhostShipEncounterSpireEnemyFormation(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation // Final|Exec|Native|Public // @ game+0x529bc80
	void SpawnAggressiveGhostShipEncounterSpire(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire // Final|Exec|Native|Public // @ game+0x529bc60
	void SpawnAggressiveGhostShipEncounter(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter // Final|Exec|Native|Public // @ game+0x529bc40
	void SmoulderClosestShipFire(); // Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529b6b0
	void SmoulderAllShipFires(); // Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x529b690
	void SlowMotionOverride(bool InValue); // Function AthenaCheat.AthenaCheatManager.SlowMotionOverride // Final|Exec|Native|Public // @ game+0x529b600
	void SkipToEndOfOnboarding(); // Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding // Final|Exec|Native|Public // @ game+0x529b5e0
	void SinkShipWithKeelOverIndex(int32_t KeelOverConfigIndex); // Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex // Final|Exec|Native|Public // @ game+0x529b560
	void SinkShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.SinkShipByActorId // Final|Exec|Native|Public // @ game+0x529b4c0
	void SinkShip(); // Function AthenaCheat.AthenaCheatManager.SinkShip // Final|Exec|Native|Public // @ game+0x529b4a0
	void SinkClosestItemProxy(); // Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy // Final|Exec|Native|Public // @ game+0x529b480
	void SinkAllBarrels(); // Function AthenaCheat.AthenaCheatManager.SinkAllBarrels // Final|Exec|Native|Public // @ game+0x529b460
	void SinkAllAIShips(); // Function AthenaCheat.AthenaCheatManager.SinkAllAIShips // Final|Exec|Native|Public // @ game+0x529b440
	void SingleStickSwap(); // Function AthenaCheat.AthenaCheatManager.SingleStickSwap // Final|Exec|Native|Public // @ game+0x529b420
	void SingleStickRight(); // Function AthenaCheat.AthenaCheatManager.SingleStickRight // Final|Exec|Native|Public // @ game+0x529b400
	void SingleStickOff(); // Function AthenaCheat.AthenaCheatManager.SingleStickOff // Final|Exec|Native|Public // @ game+0x529b3e0
	void SingleStickLeft(); // Function AthenaCheat.AthenaCheatManager.SingleStickLeft // Final|Exec|Native|Public // @ game+0x529b3c0
	void SimulateTunnelFailure(); // Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure // Final|Exec|Native|Public // @ game+0x529b3a0
	void SimulatePetReactRequest(struct FString Id); // Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest // Final|Exec|Native|Public // @ game+0x529b300
	void SimulatePetReactCancellation(struct FString Id); // Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation // Final|Exec|Native|Public // @ game+0x529b260
	void SignalActiveGlobalVoyageDelaySteps(); // Function AthenaCheat.AthenaCheatManager.SignalActiveGlobalVoyageDelaySteps // Final|Exec|Native|Public // @ game+0x529b240
	void ShowTaleDebug_WithVariables(); // Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables // Final|Exec|Native|Public // @ game+0x529b220
	void ShowTaleDebug(); // Function AthenaCheat.AthenaCheatManager.ShowTaleDebug // Final|Exec|Native|Public // @ game+0x529b200
	void ShowShipMilestoneToast(struct FString* MilestoneGuid, struct FString* MilestoneAlignment, uint64_t* MilestoneLevel, struct FString* ShipName); // Function AthenaCheat.AthenaCheatManager.ShowShipMilestoneToast // Final|Exec|Native|Public // @ game+0x529b060
	void ShowRandomCrewMemberGamerCard(); // Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard // Final|Exec|Native|Public // @ game+0x529b040
	void ShowPlayerMilestoneToast(struct FString* MilestoneGuid, struct FString* MilestoneAlignment, uint64_t* MilestoneLevel); // Function AthenaCheat.AthenaCheatManager.ShowPlayerMilestoneToast // Final|Exec|Native|Public // @ game+0x529af00
	void ShowEmissaryVoteIndicators(); // Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators // Final|Exec|Native|Public // @ game+0x529aee0
	void ShowAllWelds(); // Function AthenaCheat.AthenaCheatManager.ShowAllWelds // Final|Exec|Native|Public // @ game+0x529ae20
	void ShowAllianceStatus(struct FString* CrewId); // Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus // Final|Exec|Native|Public // @ game+0x529ae40
	void ShootFireballCannonSpawnedFromScheduler(); // Function AthenaCheat.AthenaCheatManager.ShootFireballCannonSpawnedFromScheduler // Final|Exec|Native|Public // @ game+0x529ade0
	void ShootFireballCannonsOnAllShips(); // Function AthenaCheat.AthenaCheatManager.ShootFireballCannonsOnAllShips // Final|Exec|Native|Public // @ game+0x529ae00
	void ShootFireballCannonOwnedByPlayer(); // Function AthenaCheat.AthenaCheatManager.ShootFireballCannonOwnedByPlayer // Final|Exec|Native|Public // @ game+0x529adc0
	void ShipwrecksSpawnOne(float* SpawnLocationX, float* SpawnLocationY, float* SpawnLocationZ); // Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne // Final|Exec|Native|Public // @ game+0x529acb0
	void ShipwrecksSpawnCustom(float* SpawnLocationX, float* SpawnLocationY, float* SpawnLocationZ, struct FString* WreckAsset); // Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom // Final|Exec|Native|Public // @ game+0x529ab40
	void ShipwrecksRemoveCustom(); // Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom // Final|Exec|Native|Public // @ game+0x529ab20
	void ShipwrecksRegen(); // Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen // Final|Exec|Native|Public // @ game+0x529ab00
	void ShipUpdateMassProperies(); // Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies // Final|Exec|Native|Public // @ game+0x529aae0
	void ShipSurface(); // Function AthenaCheat.AthenaCheatManager.ShipSurface // Final|Exec|Native|Public // @ game+0x529aac0
	void ShipDive(); // Function AthenaCheat.AthenaCheatManager.ShipDive // Final|Exec|Native|Public // @ game+0x529aaa0
	void SetWheelAngle(float* Angle); // Function AthenaCheat.AthenaCheatManager.SetWheelAngle // Final|Exec|Native|Public // @ game+0x529aa20
	void SetWeaponsLockedOut(bool* WeaponsLockedOut); // Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut // Final|Exec|Native|Public // @ game+0x529a990
	void SetWaveFlag(int32_t* InFlag); // Function AthenaCheat.AthenaCheatManager.SetWaveFlag // Final|Exec|Native|Public // @ game+0x529a910
	void SetWaterWaveParams(float* Amplitude, float* WaveLength, float* PropagationSpeed); // Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams // Final|Exec|Native|Public // @ game+0x529a800
	void SetVoiceChatEndpointXAudio2(); // Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2 // Final|Exec|Native|Public // @ game+0x529a7e0
	void SetVoiceChatEndpointWwise(); // Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise // Final|Exec|Native|Public // @ game+0x529a7c0
	void SetUnattenuatedChatMixingMethodToUseWwise(); // Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise // Final|Exec|Native|Public // @ game+0x529a7a0
	void SetUnattenuatedChatMixingMethodToUsePlatform(); // Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform // Final|Exec|Native|Public // @ game+0x529a780
	void SetTrinketsEnabled(bool* InTrinketsEnabled); // Function AthenaCheat.AthenaCheatManager.SetTrinketsEnabled // Final|Exec|Native|Public // @ game+0x529a6f0
	void SetTrinketNudgeChanceMaxOnAllShips(); // Function AthenaCheat.AthenaCheatManager.SetTrinketNudgeChanceMaxOnAllShips // Final|Exec|Native|Public // @ game+0x529a6d0
	void SetTinySharkToOneHealth(); // Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth // Final|Exec|Native|Public // @ game+0x529a6b0
	void SetTimeScalar(float* TimeScalar); // Function AthenaCheat.AthenaCheatManager.SetTimeScalar // Final|Exec|Native|Public // @ game+0x529a630
	void SetTimeHoursAndMinutes(int32_t* Hours, int32_t* Minutes); // Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes // Final|Exec|Native|Public // @ game+0x529a570
	void SetTime(int32_t* Hours); // Function AthenaCheat.AthenaCheatManager.SetTime // Final|Exec|Native|Public // @ game+0x529a4f0
	void SetTaleSelectorSeed(int32_t* Seed); // Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed // Final|Exec|Native|Public // @ game+0x529a470
	void SetTalePhaseBranchForLocalPlayer(int32_t* NewBranch); // Function AthenaCheat.AthenaCheatManager.SetTalePhaseBranchForLocalPlayer // Final|Exec|Native|Public // @ game+0x529a3f0
	void SetShroudbreakerActive(bool* bActive); // Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive // Final|Exec|Native|Public // @ game+0x529a360
	void SetShipYaw(float* Yaw); // Function AthenaCheat.AthenaCheatManager.SetShipYaw // Final|Exec|Native|Public // @ game+0x529a2e0
	void SetShipWheelFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired // Final|Exec|Native|Public // @ game+0x529a2c0
	void SetShipWheelFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged // Final|Exec|Native|Public // @ game+0x529a2a0
	void SetShipRoll(float* Roll); // Function AthenaCheat.AthenaCheatManager.SetShipRoll // Final|Exec|Native|Public // @ game+0x529a220
	void SetShipName(struct FString* InShipName); // Function AthenaCheat.AthenaCheatManager.SetShipName // Final|Exec|Native|Public // @ game+0x529a180
	void SetShipFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged // Final|Exec|Native|Public // @ game+0x529a160
	void SetShipCapstanFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired // Final|Exec|Native|Public // @ game+0x529a140
	void SetShipCapstanFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged // Final|Exec|Native|Public // @ game+0x529a120
	void SetShipCanSailForAGuild(bool* InCanSailForAGuild); // Function AthenaCheat.AthenaCheatManager.SetShipCanSailForAGuild // Final|Exec|Native|Public // @ game+0x529a090
	void SetShipBuoyancyBlend(float* UnaryBlend); // Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend // Final|Exec|Native|Public // @ game+0x529a010
	void SetSeaFortAllEnemiesDeadOnAlignmentFlag(int32_t* InFort, bool* IsDead); // Function AthenaCheat.AthenaCheatManager.SetSeaFortAllEnemiesDeadOnAlignmentFlag // Final|Exec|Native|Public // @ game+0x5299f50
	void SetSeaFortAlignment(int32_t* InFort, int32_t* InAlignment); // Function AthenaCheat.AthenaCheatManager.SetSeaFortAlignment // Final|Exec|Native|Public // @ game+0x5299e90
	void SetSailLoweredProportions(float* Proportion); // Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions // Final|Exec|Native|Public // @ game+0x5299e10
	void SetSailAngles(float* Angle); // Function AthenaCheat.AthenaCheatManager.SetSailAngles // Final|Exec|Native|Public // @ game+0x5299d90
	void SetRitualTableRequiredPlayersOverride(int32_t* RequiredPlayerCount); // Function AthenaCheat.AthenaCheatManager.SetRitualTableRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x5299d10
	void SetReapersTributeShipToTheClosestShip(); // Function AthenaCheat.AthenaCheatManager.SetReapersTributeShipToTheClosestShip // Final|Exec|Native|Public // @ game+0x5299cf0
	void SetPreventLeakingOnAllShips(); // Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips // Final|Exec|Native|Public // @ game+0x5299cd0
	void SetPreventLeakingOnAllDamageZones(bool* PreventLeaking); // Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones // Final|Exec|Native|Public // @ game+0x5299c40
	void SetPlayerVisibleToAI(); // Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI // Final|Exec|Native|Public // @ game+0x5299c20
	void SetPlayerMaxTicks(int32_t* InMaxTicksPerFrame); // Function AthenaCheat.AthenaCheatManager.SetPlayerMaxTicks // Final|Exec|Native|Public // @ game+0x5299ba0
	void SetPlayerInvisibleToAI(); // Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI // Final|Exec|Native|Public // @ game+0x5299b80
	void SetPlayerInert(bool* IsInert); // Function AthenaCheat.AthenaCheatManager.SetPlayerInert // Final|Exec|Native|Public // @ game+0x5299af0
	void SetPlayerGuildSlotsAreFull(bool* InSlotsAreFull); // Function AthenaCheat.AthenaCheatManager.SetPlayerGuildSlotsAreFull // Final|Exec|Native|Public // @ game+0x5299a60
	void SetPlayerControlsEnabledOnShip(bool* Enabled); // Function AthenaCheat.AthenaCheatManager.SetPlayerControlsEnabledOnShip // Final|Exec|Native|Public // @ game+0x52999d0
	void SetPlayerCanInviteToGuild(bool* InCanInvite); // Function AthenaCheat.AthenaCheatManager.SetPlayerCanInviteToGuild // Final|Exec|Native|Public // @ game+0x5299940
	void SetPhotoMode(bool* Enabled); // Function AthenaCheat.AthenaCheatManager.SetPhotoMode // Final|Exec|Native|Public // @ game+0x52998b0
	void SetPetMovementTimeWindow(float* TimeWindow); // Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow // Final|Exec|Native|Public // @ game+0x5299830
	void SetOverridenUGCState(bool* InOverridenUGCState); // Function AthenaCheat.AthenaCheatManager.SetOverridenUGCState // Final|Exec|Native|Public // @ game+0x52997a0
	void SetNonCrewChatSpatialisation(bool* Enabled); // Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation // Final|Exec|Native|Public // @ game+0x5299710
	void SetMaxNumOfSpawnedAI(int32_t* MaxNumOfSpawnedActors); // Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI // Final|Exec|Native|Public // @ game+0x5299690
	void SetMaxMovingPetsOnShips(int32_t* MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips // Final|Exec|Native|Public // @ game+0x5299610
	void SetMaxMovingPetsOnServer(int32_t* MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer // Final|Exec|Native|Public // @ game+0x5299590
	void SetMaxMovingPetsOnLand(int32_t* MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand // Final|Exec|Native|Public // @ game+0x5299510
	void SetMastsFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired // Final|Exec|Native|Public // @ game+0x52994f0
	void SetMastsFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged // Final|Exec|Native|Public // @ game+0x52994d0
	void SetKnockbackDisabled(bool* Disabled); // Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled // Exec|Native|Public // @ game+0x5299440
	void SetIsTinSession(bool* InIsCaptainedSession); // Function AthenaCheat.AthenaCheatManager.SetIsTinSession // Final|Exec|Native|Public // @ game+0x52993b0
	void SetIsShipCustomizationTinOnly(bool* InIsShipCustomizationCaptainOnly); // Function AthenaCheat.AthenaCheatManager.SetIsShipCustomizationTinOnly // Final|Exec|Native|Public // @ game+0x5299320
	void SetIsCaptain(bool* InIsCaptain); // Function AthenaCheat.AthenaCheatManager.SetIsCaptain // Final|Exec|Native|Public // @ game+0x5299290
	void SetIdleDisconnectEnabled(bool* Enabled); // Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled // Final|Exec|Native|Public // @ game+0x5299200
	void SetHealthInfoReplicateOverride(bool* bActive); // Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride // Final|Exec|Native|Public // @ game+0x5299170
	void SetGuildName(struct FString* InStringGuildName); // Function AthenaCheat.AthenaCheatManager.SetGuildName // Final|Exec|Native|Public // @ game+0x52990d0
	void SetGuildMotto(struct FString* InStringGuildMotto); // Function AthenaCheat.AthenaCheatManager.SetGuildMotto // Final|Exec|Native|Public // @ game+0x5299030
	void SetGuildLevelToRequiredLevelToUnlockGuildEmissary(); // Function AthenaCheat.AthenaCheatManager.SetGuildLevelToRequiredLevelToUnlockGuildEmissary // Final|Exec|Native|Public // @ game+0x5299010
	void SetGuildIsFull(struct FString* InStringGuildId, bool* InGuildIsFull); // Function AthenaCheat.AthenaCheatManager.SetGuildIsFull // Final|Exec|Native|Public // @ game+0x5298f30
	void SetGuildIcon(struct FString* InStringGuildIcon); // Function AthenaCheat.AthenaCheatManager.SetGuildIcon // Final|Exec|Native|Public // @ game+0x5298e90
	void SetGrogSecondary(bool* InValue); // Function AthenaCheat.AthenaCheatManager.SetGrogSecondary // Final|Exec|Native|Public // @ game+0x5298e00
	void SetGodMode(bool* GodModeOn); // Function AthenaCheat.AthenaCheatManager.SetGodMode // Final|Exec|Native|Public // @ game+0x5298d70
	void SetGlitterbeardRequiredPlayersOverride(int32_t* RequiredPlayerCount); // Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x5298cf0
	void SetFOV(float* InNewFOV); // Function AthenaCheat.AthenaCheatManager.SetFOV // Final|Exec|Native|Public // @ game+0x5298af0
	void SetForceLocalPlayerMoveForwardFlipDistance(float* FlipDistance); // Function AthenaCheat.AthenaCheatManager.SetForceLocalPlayerMoveForwardFlipDistance // Final|Exec|Native|Public // @ game+0x5298c70
	void SetFlameOfFateColour(int32_t* InFlameOfFateType); // Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour // Final|Exec|Native|Public // @ game+0x5298bf0
	void SetFactionStreak(int32_t* InStreak); // Function AthenaCheat.AthenaCheatManager.SetFactionStreak // Final|Exec|Native|Public // @ game+0x5298b70
	void SetExpandedShipDamageEnabled(bool* Enabled); // Function AthenaCheat.AthenaCheatManager.SetExpandedShipDamageEnabled // Final|Exec|Native|Public // @ game+0x5298a60
	void SetDebugItemSource(struct FString* Source); // Function AthenaCheat.AthenaCheatManager.SetDebugItemSource // Final|Exec|Native|Public // @ game+0x52989c0
	void SetDebugHealthStage(int32_t* InStage); // Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage // Final|Exec|Native|Public // @ game+0x5298940
	void SetDebugCameraUseProjectileCollisionChannel(bool* bUseProjectileChannel); // Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel // Final|Exec|Native|Public // @ game+0x52988b0
	void SetDeathPenaltyRespawnTimer(float* InSpawnTimer); // Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer // Final|Exec|Native|Public // @ game+0x5298830
	void SetDeathPenaltyCrewBasedRespawnTimes(float* CrewOfOne, float* CrewOfTwo, float* CrewOfThree, float* CrewOfFour); // Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyCrewBasedRespawnTimes // Final|Exec|Native|Public // @ game+0x52986e0
	void SetDamageAllowedToPlayerShip(bool* InAllowDamage); // Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip // Final|Exec|Native|Public // @ game+0x5298650
	void SetCVarOnTheServer(struct FString* CVarName, int32_t* Value); // Function AthenaCheat.AthenaCheatManager.SetCVarOnTheServer // Final|Exec|Native|Public // @ game+0x52980f0
	void SetCutsceneResponseCoordinatorDebug(bool* Value); // Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug // Final|Exec|Native|Public // @ game+0x52985c0
	void SetCurrentCulture(struct FString* Culture); // Function AthenaCheat.AthenaCheatManager.SetCurrentCulture // Final|Exec|Native|Public // @ game+0x5298520
	void SetCrewTeamId(struct FString* CrewTeamName); // Function AthenaCheat.AthenaCheatManager.SetCrewTeamId // Final|Exec|Native|Public // @ game+0x5298480
	void SetCrewSkill(struct FString* TargetCrew, int32_t* Skill); // Function AthenaCheat.AthenaCheatManager.SetCrewSkill // Final|Exec|Native|Public // @ game+0x52983a0
	void SetCrestTextVisibility(bool* InShouldShowText); // Function AthenaCheat.AthenaCheatManager.SetCrestTextVisibility // Final|Exec|Native|Public // @ game+0x5298310
	void SetCoordinatedKrakenPhaseAsset(int32_t* AssetIndex); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset // Final|Exec|Native|Public // @ game+0x5298290
	void SetCoordinatedKrakenCurrentPhaseAssetInactive(); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive // Final|Exec|Native|Public // @ game+0x5298270
	void SetCoordinatedKrakenCurrentPhaseAssetActive(); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive // Final|Exec|Native|Public // @ game+0x5298250
	void SetCapstanPosition(float* Position); // Function AthenaCheat.AthenaCheatManager.SetCapstanPosition // Final|Exec|Native|Public // @ game+0x52981d0
	void SetAxisBinding(struct FString* InBindingName, struct FString* InKeyName); // Function AthenaCheat.AthenaCheatManager.SetAxisBinding // Final|Exec|Native|Public // @ game+0x5297ff0
	void SetAllShipsSailsAngle(float* Angle); // Function AthenaCheat.AthenaCheatManager.SetAllShipsSailsAngle // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5297f70
	void SetAllShipsSailLoweredProportions(float* Proportion); // Function AthenaCheat.AthenaCheatManager.SetAllShipsSailLoweredProportions // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5297ef0
	void SetAllSeaFortsAlignment(int32_t* InAlignment); // Function AthenaCheat.AthenaCheatManager.SetAllSeaFortsAlignment // Final|Exec|Native|Public // @ game+0x5297e70
	void SetAllCapstanPositions(float* Position); // Function AthenaCheat.AthenaCheatManager.SetAllCapstanPositions // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5297df0
	void SetAllAIOverrideCannonShotHitChance(float HitChance); // Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance // Final|Exec|Native|Public // @ game+0x5297d70
	void SetAITeamAttitude(struct FString TeamAString, struct FString TeamBString, struct FString AttitudeString); // Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude // Final|Exec|Native|Public // @ game+0x5297b70
	void SetAIExclusiveAbility(struct FString AIAbilityString); // Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility // Final|Exec|Native|Public // @ game+0x5297ad0
	void SetAIAbilityTimeMultiplier(struct FString AIAbilityString, float IntervalCooldownMultiplier, float ActivationCooldownMultiplier); // Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier // Final|Exec|Native|Public // @ game+0x52979b0
	void SetAbilityAlwaysOn(struct FString AIAbilityString); // Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn // Final|Exec|Native|Public // @ game+0x5297cd0
	void SendUpdateVoyageProgressEvent(); // Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent // Final|Exec|Native|Public // @ game+0x5297990
	void SendStatEvent(uint32_t StatId, uint64_t StatValue); // Function AthenaCheat.AthenaCheatManager.SendStatEvent // Final|Exec|Native|Public // @ game+0x52978d0
	void SendRewardRequestEvent(struct FString CompanyNameAndRewardIdSeparatedByColon); // Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent // Final|Exec|Native|Public // @ game+0x5297830
	void SendResetReaperLevelEvent(); // Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent // Final|Exec|Native|Public // @ game+0x5297810
	void SendPlayerToFerrySinBin(); // Function AthenaCheat.AthenaCheatManager.SendPlayerToFerrySinBin // Final|Exec|Native|Public // @ game+0x52977f0
	void ScuttleShip(bool InShouldSendCrewToLosingTunnel); // Function AthenaCheat.AthenaCheatManager.ScuttleShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5297760
	void ScreenFadeStart(); // Function AthenaCheat.AthenaCheatManager.ScreenFadeStart // Final|Exec|Native|Public // @ game+0x5297740
	void ScreenFadeEnd(); // Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd // Final|Exec|Native|Public // @ game+0x5297720
	void ScrambleShipNameOnOtherClients(bool InOverridenState); // Function AthenaCheat.AthenaCheatManager.ScrambleShipNameOnOtherClients // Final|Exec|Native|Public // @ game+0x5297690
	void ScrambleShipName(bool InOverridenState); // Function AthenaCheat.AthenaCheatManager.ScrambleShipName // Final|Exec|Native|Public // @ game+0x5297600
	void ScrambleGuildNameOnOtherClients(bool InOverridenState); // Function AthenaCheat.AthenaCheatManager.ScrambleGuildNameOnOtherClients // Final|Exec|Native|Public // @ game+0x5297570
	void ScrambleGuildName(bool InOverridenState); // Function AthenaCheat.AthenaCheatManager.ScrambleGuildName // Final|Exec|Native|Public // @ game+0x52974e0
	void ScrambleGamertags(bool InOverridenState); // Function AthenaCheat.AthenaCheatManager.ScrambleGamertags // Final|Exec|Native|Public // @ game+0x5297450
	void ScrambleGamertagOnShipAnnouncementBanner(bool InOverridenState); // Function AthenaCheat.AthenaCheatManager.ScrambleGamertagOnShipAnnouncementBanner // Final|Exec|Native|Public // @ game+0x52973c0
	void SchedulerToggleUseRemoteService(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleUseRemoteService // Final|Exec|Native|Public // @ game+0x52973a0
	void SchedulerToggleUseGlobalConfigs(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleUseGlobalConfigs // Final|Exec|Native|Public // @ game+0x5297380
	void SchedulerToggleDebugDraw_Legacy(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Legacy // Final|Exec|Native|Public // @ game+0x5297360
	void SchedulerToggleDebugDraw_Events(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Events // Final|Exec|Native|Public // @ game+0x5297340
	void SchedulerToggleDebugDraw_Configs(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Configs // Final|Exec|Native|Public // @ game+0x5297320
	void SchedulerSkipToNext(); // Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext // Final|Exec|Native|Public // @ game+0x5297300
	void SchedulerInitTinyShark(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark // Final|Exec|Native|Public // @ game+0x52972e0
	void SchedulerInitSkellyFort(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort // Final|Exec|Native|Public // @ game+0x52972c0
	void SchedulerInitReapersTributeShipEvent(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitReapersTributeShipEvent // Final|Exec|Native|Public // @ game+0x52972a0
	void SchedulerInitOceanCrawlersOnShip(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitOceanCrawlersOnShip // Final|Exec|Native|Public // @ game+0x5297280
	void SchedulerInitLegendarySkellyFort(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitLegendarySkellyFort // Final|Exec|Native|Public // @ game+0x5297260
	void SchedulerInitKraken(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken // Final|Exec|Native|Public // @ game+0x5297240
	void SchedulerInitDefault(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault // Final|Exec|Native|Public // @ game+0x5297220
	void SchedulerInitCompetitiveVoyage(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitCompetitiveVoyage // Final|Exec|Native|Public // @ game+0x5297200
	void SchedulerInitAshenLord(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord // Final|Exec|Native|Public // @ game+0x52971e0
	void SchedulerInitAIShipPassive(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive // Final|Exec|Native|Public // @ game+0x52971a0
	void SchedulerInitAIShipBattleChestOfFortune(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattleChestOfFortune // Final|Exec|Native|Public // @ game+0x5297180
	void SchedulerInitAIShipBattle(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle // Final|Exec|Native|Public // @ game+0x5297160
	void SchedulerInitAIShipAggro(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro // Final|Exec|Native|Public // @ game+0x5297140
	void SchedulerInitAggroGhostShip(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip // Final|Exec|Native|Public // @ game+0x52971c0
	void SchedulerAdvance(float Time); // Function AthenaCheat.AthenaCheatManager.SchedulerAdvance // Final|Exec|Native|Public // @ game+0x52970c0
	void SaveMyShip(); // Function AthenaCheat.AthenaCheatManager.SaveMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x52970a0
	void SailShip(); // Function AthenaCheat.AthenaCheatManager.SailShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5297080
	void SailAllShips(); // Function AthenaCheat.AthenaCheatManager.SailAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5297060
	void RewindPhysicsSceneBy(float SecondsToRewindBy); // Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy // Final|Exec|Native|Public // @ game+0x5296fe0
	void RewardPlayer(struct FString RewardId); // Function AthenaCheat.AthenaCheatManager.RewardPlayer // Final|Exec|Native|Public // @ game+0x5296f40
	void ReviveLocalPlayerInstantly(); // Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly // Final|Exec|Native|Public // @ game+0x5296f20
	void ReviveLocalPlayerAccordingToReviveTime(); // Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime // Final|Exec|Native|Public // @ game+0x5296f00
	void RetrieveItemsFromBootyStorageInCurrentIsland(); // Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland // Final|Exec|Native|Public // @ game+0x5296ee0
	void RetrieveItemsFromBootyStorage(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage // Final|Exec|Native|Public // @ game+0x5296e40
	void ResurfaceShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId // Final|Exec|Native|Public // @ game+0x5296da0
	void RestoreAndRestockShipAndPlayer(); // Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer // Final|Exec|Native|Public // @ game+0x5296d80
	void RestockIslandBarrels(); // Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels // Final|Exec|Native|Public // @ game+0x5296d60
	void RestockAllReplenishables(); // Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables // Final|Exec|Native|Public // @ game+0x5296d40
	void RespawnAllIslandItemSpawners(); // Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners // Final|Exec|Native|Public // @ game+0x5296d20
	void RespawnAllContextualTutorials(); // Function AthenaCheat.AthenaCheatManager.RespawnAllContextualTutorials // Final|Exec|Native|Public // @ game+0x5296d00
	void ResetTaleSelectorSeed(); // Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed // Final|Exec|Native|Public // @ game+0x5296ce0
	void ResetTalePhaseBranchOverrideForLocalPlayer(); // Function AthenaCheat.AthenaCheatManager.ResetTalePhaseBranchOverrideForLocalPlayer // Final|Exec|Native|Public // @ game+0x5296cc0
	void ResetStats(); // Function AthenaCheat.AthenaCheatManager.ResetStats // Final|Exec|Native|Public // @ game+0x5296ca0
	void ResetScorpioFragmentationRepro(); // Function AthenaCheat.AthenaCheatManager.ResetScorpioFragmentationRepro // Final|Exec|Native|Public // @ game+0x5296c80
	void ResetRitualTable(); // Function AthenaCheat.AthenaCheatManager.ResetRitualTable // Final|Exec|Native|Public // @ game+0x5296c60
	void ResetRepairedShipDamage(); // Function AthenaCheat.AthenaCheatManager.ResetRepairedShipDamage // Final|Exec|Native|Public // @ game+0x5296c40
	void ResetNearestVault(); // Function AthenaCheat.AthenaCheatManager.ResetNearestVault // Final|Exec|Native|Public // @ game+0x5296c20
	void ResetNearestSeaFort(); // Function AthenaCheat.AthenaCheatManager.ResetNearestSeaFort // Final|Exec|Native|Public // @ game+0x5296c00
	void ResetNearestEventRoom(); // Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom // Final|Exec|Native|Public // @ game+0x5296be0
	void ResetMouseDelta(); // Function AthenaCheat.AthenaCheatManager.ResetMouseDelta // Final|Exec|Native|Public // @ game+0x5296bc0
	void ResetMaxNumOfSpawnedAI(); // Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI // Final|Exec|Native|Public // @ game+0x5296ba0
	void ResetMaxMovingPetsOnServerToDefault(); // Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault // Final|Exec|Native|Public // @ game+0x5296b80
	void ResetLeaveFactionCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetLeaveFactionCooldown // Final|Exec|Native|Public // @ game+0x5296b60
	void ResetInvasionMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetInvasionMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x5296b40
	void ResetInitialMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetInitialMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x5296b20
	void ResetGlitterbeardTree(); // Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree // Final|Exec|Native|Public // @ game+0x5296b00
	void ResetEmergentCooldownForGameEventOnDemand(struct FString InGameEventType); // Function AthenaCheat.AthenaCheatManager.ResetEmergentCooldownForGameEventOnDemand // Final|Exec|Native|Public // @ game+0x5296a60
	void ResetDemoSession(bool StartNewSession); // Function AthenaCheat.AthenaCheatManager.ResetDemoSession // Final|Exec|Native|Public // @ game+0x52969d0
	void ResetCrewsJoinedGameEventOnDemand(struct FString InGameEventType); // Function AthenaCheat.AthenaCheatManager.ResetCrewsJoinedGameEventOnDemand // Final|Exec|Native|Public // @ game+0x5296930
	void ResetAllShipDamage(); // Function AthenaCheat.AthenaCheatManager.ResetAllShipDamage // Final|Exec|Native|Public // @ game+0x5296910
	void ResetAllOverrideCannonShotHitChance(); // Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance // Final|Exec|Native|Public // @ game+0x52968f0
	void ResetAllMechanisms(); // Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms // Final|Exec|Native|Public // @ game+0x52968d0
	void ResetAITeamAttitudes(); // Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes // Final|Exec|Native|Public // @ game+0x5296870
	void ResetAIExclusiveAbilities(); // Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities // Final|Exec|Native|Public // @ game+0x5296850
	void ResetActiveStories(); // Function AthenaCheat.AthenaCheatManager.ResetActiveStories // Final|Exec|Native|Public // @ game+0x52968b0
	void ResetAbilityAlwaysOn(); // Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn // Final|Exec|Native|Public // @ game+0x5296890
	void RequestTeleportPlayersOffReapersTributeShip(); // Function AthenaCheat.AthenaCheatManager.RequestTeleportPlayersOffReapersTributeShip // Final|Exec|Native|Public // @ game+0x5296830
	void RequestSmallPassiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip // Final|Exec|Native|Public // @ game+0x5296810
	void RequestSmallAggressiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip // Final|Exec|Native|Public // @ game+0x52967f0
	void RequestReapersTributeShipTakeOverByCrew(); // Function AthenaCheat.AthenaCheatManager.RequestReapersTributeShipTakeOverByCrew // Final|Exec|Native|Public // @ game+0x52967d0
	void RequestReapersTributeShip(); // Function AthenaCheat.AthenaCheatManager.RequestReapersTributeShip // Final|Exec|Native|Public // @ game+0x52967b0
	void RequestMysteriousNotesForPlayer(); // Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer // Final|Exec|Native|Public // @ game+0x5296790
	void RequestLargePassiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip // Final|Exec|Native|Public // @ game+0x5296770
	void RequestLargeAggressiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip // Final|Exec|Native|Public // @ game+0x5296750
	void RequestHandInOfReapersTributeShipForCrew(); // Function AthenaCheat.AthenaCheatManager.RequestHandInOfReapersTributeShipForCrew // Final|Exec|Native|Public // @ game+0x5296730
	void RequestDiveToAdventure(); // Function AthenaCheat.AthenaCheatManager.RequestDiveToAdventure // Final|Exec|Native|Public // @ game+0x5296710
	void RequestCaptainedSessionCrewData(); // Function AthenaCheat.AthenaCheatManager.RequestCaptainedSessionCrewData // Final|Exec|Native|Public // @ game+0x52966f0
	void ReplenishShipWithDebugSpawner(); // Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner // Final|Exec|Native|Public // @ game+0x52966d0
	void ReplenishShip(); // Function AthenaCheat.AthenaCheatManager.ReplenishShip // Final|Exec|Native|Public // @ game+0x52966b0
	void ReplaceShipWithSmallShip(struct FString ShipActorIdConsoleString); // Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip // Final|Exec|Native|Public // @ game+0x5296610
	void RepairShipAndClearInternalWater(); // Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater // Final|Exec|Native|Public // @ game+0x52965f0
	void RepairAndClearInternalWaterOnAllShips(); // Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips // Final|Exec|Native|Public // @ game+0x52965d0
	void RenameTreasure(struct FString InVendorName); // Function AthenaCheat.AthenaCheatManager.RenameTreasure // Final|Exec|Native|Public // @ game+0x5296530
	void RemoveVoyageFromShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.RemoveVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5296490
	void RemoveSkeletonCurseEntitlement(); // Function AthenaCheat.AthenaCheatManager.RemoveSkeletonCurseEntitlement // Final|Exec|Native|Public // @ game+0x5296470
	void RemovePetsFromAllPlayers(); // Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers // Final|Exec|Native|Public // @ game+0x5296450
	void RemovePetFromPlayer(); // Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer // Final|Exec|Native|Public // @ game+0x5296430
	void RemoveLostShipmentsDebugging(); // Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging // Final|Exec|Native|Public // @ game+0x5296410
	void RemoveLastAddedVoyageFromShip(); // Function AthenaCheat.AthenaCheatManager.RemoveLastAddedVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x52963f0
	void RemoveItemInSlot(int32_t SlotIndex); // Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot // Final|Exec|Native|Public // @ game+0x5296370
	void RemoveGhostCurseEntitlement(); // Function AthenaCheat.AthenaCheatManager.RemoveGhostCurseEntitlement // Final|Exec|Native|Public // @ game+0x5296350
	void RemoveDebugPetSpawners(); // Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners // Final|Exec|Native|Public // @ game+0x5296330
	void RemoveDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage // Final|Exec|Native|Public // @ game+0x5296310
	void RemoveAllSkeletonClothing(); // Function AthenaCheat.AthenaCheatManager.RemoveAllSkeletonClothing // Final|Exec|Native|Public // @ game+0x52962f0
	void RemoveAllFog(); // Function AthenaCheat.AthenaCheatManager.RemoveAllFog // Final|Exec|Native|Public // @ game+0x52962d0
	void RemoveAllClothing(); // Function AthenaCheat.AthenaCheatManager.RemoveAllClothing // Final|Exec|Native|Public // @ game+0x52962b0
	void RemoveAISpawnContext(struct FString ContextName); // Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext // Final|Exec|Native|Public // @ game+0x5296170
	void RemoveActiveStory(struct FString StoryName); // Function AthenaCheat.AthenaCheatManager.RemoveActiveStory // Final|Exec|Native|Public // @ game+0x5296210
	void RefreshActiveStories(); // Function AthenaCheat.AthenaCheatManager.RefreshActiveStories // Final|Exec|Native|Public // @ game+0x5296150
	void RebuildPirateFromSeed(int32_t Seed); // Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed // Final|Exec|Native|Public // @ game+0x52960d0
	void ReallyScrambleMyGamertag(); // Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag // Final|Exec|Native|Public // @ game+0x52960b0
	void QueryShipStocks(); // Function AthenaCheat.AthenaCheatManager.QueryShipStocks // Final|Exec|Native|Public // @ game+0x5296090
	void PuzzleManager_ResetAllPuzzlesOnClosestManager(); // Function AthenaCheat.AthenaCheatManager.PuzzleManager_ResetAllPuzzlesOnClosestManager // Final|Exec|Native|Public // @ game+0x5295cc0
	void Puzzle_UnlockLockByIndex(struct FString TargetActor, int32_t LockIndex); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLockByIndex // Final|Exec|Native|Public // @ game+0x5295fb0
	void Puzzle_UnlockLock(struct FString TargetActor, struct FGuid Guid); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLock // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x5295ec0
	void Puzzle_UnlockAllLocks(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockAllLocks // Final|Exec|Native|Public // @ game+0x5295e20
	void Puzzle_ResetUnlock(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_ResetUnlock // Final|Exec|Native|Public // @ game+0x5295d80
	void Puzzle_ActivateAllLocks(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_ActivateAllLocks // Final|Exec|Native|Public // @ game+0x5295ce0
	void PushShip(float FwdSpdInMetersPerSecond); // Function AthenaCheat.AthenaCheatManager.PushShip // Final|Exec|Native|Public // @ game+0x5295c40
	void PullLatestEmblemProgress(); // Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress // Final|Exec|Native|Public // @ game+0x5295c20
	void ProposeVoyageFromShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.ProposeVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5295b80
	void ProposeLastAddedVoyageFromShip(); // Function AthenaCheat.AthenaCheatManager.ProposeLastAddedVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5295b60
	void ProceedToNextContestState(); // Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState // Final|Exec|Native|Public // @ game+0x5295b40
	void PrintTime(); // Function AthenaCheat.AthenaCheatManager.PrintTime // Final|Exec|Native|Public // @ game+0x5295b20
	void PrintNPCs(); // Function AthenaCheat.AthenaCheatManager.PrintNPCs // Final|Exec|Native|Public // @ game+0x5295b00
	void PrintAllNetworkActors(); // Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors // Final|Exec|Native|Public // @ game+0x5295ae0
	void PrintAISpawners(); // Function AthenaCheat.AthenaCheatManager.PrintAISpawners // Final|Exec|Native|Public // @ game+0x5295ac0
	void PrintAISpawnContexts(); // Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts // Final|Exec|Native|Public // @ game+0x5295aa0
	void PrimeRitualTable(); // Function AthenaCheat.AthenaCheatManager.PrimeRitualTable // Final|Exec|Native|Public // @ game+0x5295a80
	void PreventTunnelMatchmakingForCrew(); // Function AthenaCheat.AthenaCheatManager.PreventTunnelMatchmakingForCrew // Final|Exec|Native|Public // @ game+0x5295a60
	void PreventShipMotion(); // Function AthenaCheat.AthenaCheatManager.PreventShipMotion // Final|Exec|Native|Public // @ game+0x5295a40
	void PlayWorldSequence(struct FString InReference); // Function AthenaCheat.AthenaCheatManager.PlayWorldSequence // Final|Exec|Native|Public // @ game+0x5295910
	void PlayLocalSequences(); // Function AthenaCheat.AthenaCheatManager.PlayLocalSequences // Final|Exec|Native|Public // @ game+0x52958f0
	void PlayerAnimationOverride(struct FName Name); // Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride // Final|Exec|Native|Public|HasOutParms // @ game+0x52959b0
	void OverrideShipPartFromCatalogue(struct FString InShipActorIdConsoleString, int32_t InCataloguePartIndex, int32_t InCataloguePartCustomisationIndex); // Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue // Final|Exec|Native|Public|BlueprintCallable // @ game+0x52957d0
	void OpenSkeletonFortDoor(); // Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor // Final|Exec|Native|Public // @ game+0x52957b0
	void NudgeAllTrinketsOnOwnShip(); // Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnOwnShip // Final|Exec|Native|Public // @ game+0x5295790
	void NudgeAllTrinketsOnAllShips(); // Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnAllShips // Final|Exec|Native|Public // @ game+0x5295770
	void MoveStormToPlayer(); // Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer // Final|Exec|Native|Public // @ game+0x5295750
	void MoveStormToLocation(float* LocationX, float* LocationY); // Function AthenaCheat.AthenaCheatManager.MoveStormToLocation // Final|Exec|Native|Public // @ game+0x5295690
	void MoveStormToIsland(struct FString* IslandNameString); // Function AthenaCheat.AthenaCheatManager.MoveStormToIsland // Final|Exec|Native|Public // @ game+0x52955f0
	void MessageBoxOnGraphicsThreadTest(); // Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest // Final|Exec|Native|Public // @ game+0x52955d0
	void MakeSharksBrainDead(); // Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead // Final|Exec|Native|Public // @ game+0x52955b0
	void MakeDebugPetSpawner(); // Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner // Final|Exec|Native|Public // @ game+0x5295590
	void LogShipHierarchy(); // Function AthenaCheat.AthenaCheatManager.LogShipHierarchy // Final|Exec|Native|Public // @ game+0x5295570
	void LogServerShipHierarchy(); // Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy // Final|Exec|Native|Public // @ game+0x5295550
	void LogPersistentAssetCacheCost(); // Function AthenaCheat.AthenaCheatManager.LogPersistentAssetCacheCost // Final|Exec|Native|Public // @ game+0x5295530
	void LogAITeamAttitudes(); // Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes // Final|Exec|Native|Public // @ game+0x5295510
	void LockTradeRouteSelectionToSpecificRouteForMyCrew(struct FString* RouteReferencePath); // Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew // Final|Exec|Native|Public // @ game+0x5295470
	void LockTradeRouteSelectionToSpecificRouteForCrew(struct FGuid* CrewId, struct FString* RouteReferencePath); // Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x5295370
	void LocallyUnBreakLeg(); // Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg // Final|Exec|Native|Public // @ game+0x5295350
	void LocallyDisableTutorial(); // Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial // Final|Exec|Native|Public // @ game+0x5295330
	void LoadMyShip(); // Function AthenaCheat.AthenaCheatManager.LoadMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5295310
	void LightLocalBraziers(); // Function AthenaCheat.AthenaCheatManager.LightLocalBraziers // Final|Exec|Native|Public // @ game+0x52952f0
	void LightBraziersInRadius(float* Radius); // Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius // Final|Exec|Native|Public // @ game+0x5295270
	void LeaveFaction(); // Function AthenaCheat.AthenaCheatManager.LeaveFaction // Final|Exec|Native|Public // @ game+0x5295250
	void LeaveAlliance(struct FString* CrewId); // Function AthenaCheat.AthenaCheatManager.LeaveAlliance // Final|Exec|Native|Public // @ game+0x52951b0
	void LayerSpawn(struct FString* LayerAsset); // Function AthenaCheat.AthenaCheatManager.LayerSpawn // Final|Exec|Native|Public // @ game+0x5295110
	void LayerClearAll(); // Function AthenaCheat.AthenaCheatManager.LayerClearAll // Final|Exec|Native|Public // @ game+0x52950f0
	void LayerClear(struct FString* LayerAsset); // Function AthenaCheat.AthenaCheatManager.LayerClear // Final|Exec|Native|Public // @ game+0x5295050
	void LaunchPlayer(float* Velocity, float* Angle); // Function AthenaCheat.AthenaCheatManager.LaunchPlayer // Final|Exec|Native|Public // @ game+0x5294f90
	void KrakenSetTentaclesToOneHealth(); // Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth // Final|Exec|Native|Public // @ game+0x5294f70
	void KrakenAnimatedTentacleThrowPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer // Final|Exec|Native|Public // @ game+0x5294f50
	void KrakenAnimatedTentacleTakeDamage(float* Damage); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage // Final|Exec|Native|Public // @ game+0x5294ed0
	void KrakenAnimatedTentacleSwallowPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer // Final|Exec|Native|Public // @ game+0x5294eb0
	void KrakenAnimatedTentacleSuckPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer // Final|Exec|Native|Public // @ game+0x5294e90
	void KrakenAnimatedTentaclePowerSlamPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer // Final|Exec|Native|Public // @ game+0x5294e70
	void KrakenAnimatedTentacleKill(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill // Final|Exec|Native|Public // @ game+0x5294e50
	void KrakenAnimatedTentacleIngestPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer // Final|Exec|Native|Public // @ game+0x5294e30
	void KrakenAnimatedTentacleDropPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer // Final|Exec|Native|Public // @ game+0x5294e10
	void KrakenAnimatedTentacleDespawn(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn // Final|Exec|Native|Public // @ game+0x5294df0
	void KrakenAnimatedTentacleDefeat(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat // Final|Exec|Native|Public // @ game+0x5294dd0
	void KrakenAnimatedTentacleChangePlayerHoldState(struct FString* HoldState); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState // Final|Exec|Native|Public // @ game+0x5294d30
	void KindleClosestShip(); // Function AthenaCheat.AthenaCheatManager.KindleClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5294d10
	void KindleAllShipFires(); // Function AthenaCheat.AthenaCheatManager.KindleAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5294cf0
	void KillPlayer(); // Function AthenaCheat.AthenaCheatManager.KillPlayer // Final|Exec|Native|Public // @ game+0x5294cd0
	void KillCrew(struct FString* CrewId); // Function AthenaCheat.AthenaCheatManager.KillCrew // Final|Exec|Native|Public // @ game+0x5294c30
	void KillAllSkeletons(); // Function AthenaCheat.AthenaCheatManager.KillAllSkeletons // Final|Exec|Native|Public // @ game+0x5294c10
	void KillAllPlayers(); // Function AthenaCheat.AthenaCheatManager.KillAllPlayers // Final|Exec|Native|Public // @ game+0x5294bf0
	void KillAllOtherPlayers(); // Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers // Final|Exec|Native|Public // @ game+0x5294bd0
	void KillAllOtherPlayerCharacters(); // Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters // Final|Exec|Native|Public // @ game+0x5294bb0
	void KillAllDebugAISpawners(); // Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners // Final|Exec|Native|Public // @ game+0x5294b90
	void KillAllCrews(); // Function AthenaCheat.AthenaCheatManager.KillAllCrews // Final|Exec|Native|Public // @ game+0x5294b70
	void KillAllAI(); // Function AthenaCheat.AthenaCheatManager.KillAllAI // Final|Exec|Native|Public // @ game+0x5294b10
	void KillAllAggressiveGhostShips(); // Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips // Final|Exec|Native|Public // @ game+0x5294b50
	void KillAllAggressiveGhostShipEncounters(); // Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters // Final|Exec|Native|Public // @ game+0x5294b30
	void JoinFaction(struct FString* FactionName); // Function AthenaCheat.AthenaCheatManager.JoinFaction // Final|Exec|Native|Public // @ game+0x5294a70
	void JoinAlliance(struct FString* OfferingCrew, struct FString* AcceptingCrew); // Function AthenaCheat.AthenaCheatManager.JoinAlliance // Final|Exec|Native|Public // @ game+0x5294970
	void IPGOverride(struct FName* BodyShape, float* Distance); // Function AthenaCheat.AthenaCheatManager.IPGOverride // Final|Exec|Native|Public|HasOutParms // @ game+0x52945d0
	void IPGLoadWithoutClothing(struct FString* ActorIdString, struct FString* path); // Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing // Final|Exec|Native|Public // @ game+0x52944d0
	void IPGLoadWithClothing(struct FString* ActorIdString, struct FString* path); // Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing // Final|Exec|Native|Public // @ game+0x52943d0
	void IPGLoad(struct FString* path); // Function AthenaCheat.AthenaCheatManager.IPGLoad // Final|Exec|Native|Public // @ game+0x5294330
	void InvincibleEverything(); // Function AthenaCheat.AthenaCheatManager.InvincibleEverything // Final|Exec|Native|Public // @ game+0x5294950
	void InterruptSicknessOnPlayer(); // Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer // Final|Exec|Native|Public // @ game+0x5294930
	void InfiniteGunAmmo(bool* Enabled); // Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo // Final|Exec|Native|Public // @ game+0x52948a0
	void IncrementTime(int32_t* Hours, int32_t* Minutes); // Function AthenaCheat.AthenaCheatManager.IncrementTime // Final|Exec|Native|Public // @ game+0x52947e0
	void IncrementFactionStreak(); // Function AthenaCheat.AthenaCheatManager.IncrementFactionStreak // Final|Exec|Native|Public // @ game+0x52947c0
	void IncrementDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage // Final|Exec|Native|Public // @ game+0x52947a0
	void IncreaseEmissaryCount(int32_t* Amount); // Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount // Final|Exec|Native|Public // @ game+0x5294720
	void IgniteShipAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5294700
	void IgniteLocalPlayer(); // Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer // Final|Exec|Native|Public|BlueprintCallable // @ game+0x52946e0
	void IgniteClosestShip(); // Function AthenaCheat.AthenaCheatManager.IgniteClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x52946c0
	void IgniteAllShipFires(); // Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x52946a0
	void HuntersCryForceRescueSuccess(); // Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueSuccess // Final|Exec|Native|Public // @ game+0x5294310
	void HuntersCryForceRescueFail(); // Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueFail // Final|Exec|Native|Public // @ game+0x52942f0
	void HuntersCryDisableTimedFail(); // Function AthenaCheat.AthenaCheatManager.HuntersCryDisableTimedFail // Final|Exec|Native|Public // @ game+0x52942d0
	void HitRegSnapshotsToggleOnScreenStatus(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsToggleOnScreenStatus // Final|Exec|Native|Public // @ game+0x52942b0
	void HitRegSnapshotsSetShowPreCorrectedCapsules(bool* ShowPreCorrectedCapsules, bool* AffectAllSnapshots, bool* LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowPreCorrectedCapsules // Final|Exec|Native|Public // @ game+0x5294190
	void HitRegSnapshotsSetShowFullRewindData(bool* ShowFullRewindData, bool* AffectAllSnapshots, bool* LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowFullRewindData // Final|Exec|Native|Public // @ game+0x5294070
	void HitRegSnapshotsSetDisplaySnapshots(bool* ShowSnapshots, bool* AffectAllSnapshots, bool* LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplaySnapshots // Final|Exec|Native|Public // @ game+0x5293f50
	void HitRegSnapshotsSetDisplayServerData(bool* ShowServerData, bool* AffectAllSnapshots, bool* LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayServerData // Final|Exec|Native|Public // @ game+0x5293e30
	void HitRegSnapshotsSetDisplayDetailedExplanations(bool* ShowExplanations, bool* AffectAllSnapshots, bool* LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayDetailedExplanations // Final|Exec|Native|Public // @ game+0x5293d10
	void HitRegSnapshotsSetDisplayAttackingClientData(bool* ShowClientData, bool* AffectAllSnapshots, bool* LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayAttackingClientData // Final|Exec|Native|Public // @ game+0x5293bf0
	void HitRegSnapshotsSetDisagreementModeToComponents(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToComponents // Final|Exec|Native|Public // @ game+0x5293bd0
	void HitRegSnapshotsSetDisagreementModeToAllShots(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToAllShots // Final|Exec|Native|Public // @ game+0x5293bb0
	void HitRegSnapshotsSetDisagreementModeToActors(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToActors // Final|Exec|Native|Public // @ game+0x5293b90
	void HitRegSnapshotsResetVisibilitySettingsToDefault(bool* AffectAllSnapshots, bool* LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsResetVisibilitySettingsToDefault // Final|Exec|Native|Public // @ game+0x5293ac0
	void HitRegSnapshotsEnableSystem(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsEnableSystem // Final|Exec|Native|Public // @ game+0x5293aa0
	void HitRegSnapshotsDisableSystem(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDisableSystem // Final|Exec|Native|Public // @ game+0x5293a80
	void HitRegSnapshotsDestroyAll(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDestroyAll // Final|Exec|Native|Public // @ game+0x5293a60
	void HitRegSetPlayerProjectilesHitScan(bool* Enabled); // Function AthenaCheat.AthenaCheatManager.HitRegSetPlayerProjectilesHitScan // Final|Exec|Native|Public // @ game+0x52939d0
	void HideTaleDebug(); // Function AthenaCheat.AthenaCheatManager.HideTaleDebug // Final|Exec|Native|Public // @ game+0x52939b0
	void HideEmissaryVoteIndicators(); // Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators // Final|Exec|Native|Public // @ game+0x5293990
	void HealthSet(float* Value); // Function AthenaCheat.AthenaCheatManager.HealthSet // Final|Exec|Native|Public // @ game+0x5293910
	void HealthReset(); // Function AthenaCheat.AthenaCheatManager.HealthReset // Final|Exec|Native|Public // @ game+0x52938f0
	void HealthRegenResetToEmpty(); // Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty // Final|Exec|Native|Public // @ game+0x52938d0
	void HealthRegenAdd(float* Value); // Function AthenaCheat.AthenaCheatManager.HealthRegenAdd // Final|Exec|Native|Public // @ game+0x5293850
	void HealthContinuousStopWithTestReason(); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason // Final|Exec|Native|Public // @ game+0x5293830
	void HealthContinuousStopWithReason(struct FString* Reason); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason // Final|Exec|Native|Public // @ game+0x5293790
	void HealthContinuousStartWithTestReason(float* Value); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason // Final|Exec|Native|Public // @ game+0x5293710
	void HealthContinuousStartWithReason(float* Value, struct FString* Reason); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason // Final|Exec|Native|Public // @ game+0x5293630
	void HealthAdjust(float* Amount); // Function AthenaCheat.AthenaCheatManager.HealthAdjust // Final|Exec|Native|Public // @ game+0x52935b0
	void HandInMegalodonSoulToRitualTable(int32_t* SoulType); // Function AthenaCheat.AthenaCheatManager.HandInMegalodonSoulToRitualTable // Final|Exec|Native|Public // @ game+0x5293530
	void God(); // Function AthenaCheat.AthenaCheatManager.God // Exec|Native|Public // @ game+0x5293510
	void GetSourceStringHash(struct FString* SourceString); // Function AthenaCheat.AthenaCheatManager.GetSourceStringHash // Final|Exec|Native|Public // @ game+0x5293470
	void GameEventOnDemandAvailabilityServiceMinimalDebugDraw(); // Function AthenaCheat.AthenaCheatManager.GameEventOnDemandAvailabilityServiceMinimalDebugDraw // Final|Exec|Native|Public // @ game+0x5293450
	void GameEventOnDemandAvailabilityServiceFullDebugDraw(); // Function AthenaCheat.AthenaCheatManager.GameEventOnDemandAvailabilityServiceFullDebugDraw // Final|Exec|Native|Public // @ game+0x5293430
	void GameEventOnDemandAvailabilityServiceDisableDebugDraw(); // Function AthenaCheat.AthenaCheatManager.GameEventOnDemandAvailabilityServiceDisableDebugDraw // Final|Exec|Native|Public // @ game+0x5293410
	void ForceStopAllPetsDanger(); // Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger // Final|Exec|Native|Public // @ game+0x52933f0
	void ForceStartAllPetsDangerWithChangingThreatLocation(struct FString* ResponseType, float* UpdateThreatLocationTime); // Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation // Final|Exec|Native|Public // @ game+0x5293310
	void ForceStartAllPetsDanger(struct FString* ResponseType); // Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger // Final|Exec|Native|Public // @ game+0x5293270
	void ForceSkipTallTaleSteps_WaitAndCutscenes(); // Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes // Final|Exec|Native|Public // @ game+0x5293250
	void ForceRequestCampaignsFromServices(); // Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices // Final|Exec|Native|Public // @ game+0x5293230
	void ForceReapersTributeShipPledgeVotingWindowOpen(); // Function AthenaCheat.AthenaCheatManager.ForceReapersTributeShipPledgeVotingWindowOpen // Final|Exec|Native|Public // @ game+0x5293210
	void ForcePetHangout(struct FName* HangoutName, int32_t* PositionIndex); // Function AthenaCheat.AthenaCheatManager.ForcePetHangout // Final|Exec|Native|Public // @ game+0x5293150
	void ForceOpenShop(); // Function AthenaCheat.AthenaCheatManager.ForceOpenShop // Final|Exec|Native|Public // @ game+0x5293130
	void ForceNPCOnSurfaceToMove(bool* FastMove, bool* KeepCurrentLocation); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove // Final|Exec|Native|Public // @ game+0x5293060
	void ForceNPCOnSurfaceLocation(int32_t* LoctationIndex, int32_t* LoctationPointIndex); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation // Final|Exec|Native|Public // @ game+0x5292fa0
	void ForceNPCOnShipIsCurrentlyInDanger(bool* IsCurrentlyInDanger); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger // Final|Exec|Native|Public // @ game+0x5292f10
	void ForceLocalPlayerMoveForward(float* ScaleValue); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMoveForward // Final|Exec|Native|Public // @ game+0x5292e90
	void ForceLocalPlayerMeleeCombo(float* Interval); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMeleeCombo // Final|Exec|Native|Public // @ game+0x5292e10
	void ForceLocalPlayerMeleeAttack(float* Frequency); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMeleeAttack // Final|Exec|Native|Public // @ game+0x5292d90
	void ForceGarbageCollect(); // Function AthenaCheat.AthenaCheatManager.ForceGarbageCollect // Final|Exec|Native|Public // @ game+0x5292d70
	void ForceEmoteWithEmoteProp(struct FName* EmoteIdentifier, struct FString* EmotePropAssetLocation); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithEmoteProp // Final|Exec|Native|Public|HasOutParms // @ game+0x5292c70
	void ForceEmoteWithDescriptionAndEmoteProp(struct FName* EmoteIdentifier, struct FString* DisplayName, struct FString* AudioDescription, struct FString* EmotePropAssetLocation); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescriptionAndEmoteProp // Final|Exec|Native|Public|HasOutParms // @ game+0x5292ac0
	void ForceEmoteWithDescription(struct FName* EmoteIdentifier, struct FString* DisplayName, struct FString* AudioDescription); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription // Final|Exec|Native|Public|HasOutParms // @ game+0x5292960
	void ForceEmote(struct FName* EmoteIdentifier); // Function AthenaCheat.AthenaCheatManager.ForceEmote // Final|Exec|Native|Public|HasOutParms // @ game+0x52928d0
	void ForceCloseShop(); // Function AthenaCheat.AthenaCheatManager.ForceCloseShop // Final|Exec|Native|Public // @ game+0x52928b0
	void ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation(struct FString ResponseType, float UpdateThreatLocationTime); // Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation // Final|Exec|Native|Public // @ game+0x52927d0
	void ForceAllPetsDangerWithNoiseEvent(struct FString ResponseType); // Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent // Final|Exec|Native|Public // @ game+0x5292730
	void ForceAggressiveGhostShipStartSinkingAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation // Final|Exec|Native|Public // @ game+0x5292710
	void ForceAggressiveGhostShipStartDisappearAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation // Final|Exec|Native|Public // @ game+0x52926f0
	void ForceAggressiveGhostShipStartAppearAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation // Final|Exec|Native|Public // @ game+0x52926d0
	void ForceAggressiveGhostShipPortalJump(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump // Final|Exec|Native|Public // @ game+0x52926b0
	void Fly(); // Function AthenaCheat.AthenaCheatManager.Fly // Exec|Native|Public // @ game+0x5292690
	void FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int32_t KeelOverConfigIndex); // Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex // Final|Exec|Native|Public // @ game+0x52925c0
	void FloodShip(float NormalisedWaterAmount); // Function AthenaCheat.AthenaCheatManager.FloodShip // Final|Exec|Native|Public // @ game+0x5292540
	void FireStartedCaptainedSessionEvent(); // Function AthenaCheat.AthenaCheatManager.FireStartedCaptainedSessionEvent // Final|Exec|Native|Public // @ game+0x5292520
	void FireSeasonRewardEarnedMessage(int32_t InNumSeason, int32_t InRewardsLevel, bool InMultipleRewards); // Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage // Final|Exec|Native|Public // @ game+0x5292420
	void FireSeasonGoalProgressionMessage(int32_t InNumSeason, int32_t InPreviousProgress, int32_t InCurrentProgress, int32_t InCompletionTreshold, int32_t InGoalType, struct FString InGoalCategory); // Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage // Final|Exec|Native|Public // @ game+0x5292260
	void FireSeasonGoalCompletionMessage(int32_t InNumSeason, int32_t InGoalType, struct FString InGoalCategory); // Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage // Final|Exec|Native|Public // @ game+0x5292140
	void FireOnlineSessionMemberLostEventForMyself(); // Function AthenaCheat.AthenaCheatManager.FireOnlineSessionMemberLostEventForMyself // Final|Exec|Native|Public // @ game+0x5292120
	void FireLevelCompletionMessage(int32_t InNumSeason, int32_t InLevel, int32_t InTimeSpentInLevel, int32_t InTier, int32_t InTimeSpentInTier, bool InTierCompleted, bool InSeasonCompleted); // Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage // Final|Exec|Native|Public // @ game+0x5291f20
	void FireEndedGuildSessionEvent(); // Function AthenaCheat.AthenaCheatManager.FireEndedGuildSessionEvent // Final|Exec|Native|Public // @ game+0x5291f00
	void FireCreatorCrewSignedUpStat(); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat // Final|Exec|Native|Public // @ game+0x5291ee0
	void FireCreatorCrewMinutesViewedStat(int32_t InNumMinutes); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat // Final|Exec|Native|Public // @ game+0x5291e60
	void FireCreatorCrewMinutesStreamedStat(int32_t InNumMinutes); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat // Final|Exec|Native|Public // @ game+0x5291de0
	void FireCreatorCrewCurrentViewersStat(int32_t InNumViewers); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat // Final|Exec|Native|Public // @ game+0x5291d60
	void FireCompanyProgressUpdateNotification(struct FName CompanyName, int32_t OldLevel, int32_t NewLevel, int32_t NewDistinctionLevel); // Function AthenaCheat.AthenaCheatManager.FireCompanyProgressUpdateNotification // Final|Exec|Native|Public|HasOutParms // @ game+0x5291c10
	void FindOrAddDisplayString(struct FString Namespace, struct FString Key, struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.FindOrAddDisplayString // Final|Exec|Native|Public // @ game+0x5291ab0
	void FindDisplayString(struct FString Namespace, struct FString Key); // Function AthenaCheat.AthenaCheatManager.FindDisplayString // Final|Exec|Native|Public // @ game+0x52919b0
	void FillReapersTributeShipWithWater(); // Function AthenaCheat.AthenaCheatManager.FillReapersTributeShipWithWater // Final|Exec|Native|Public // @ game+0x5291990
	void FillNearestShipWithTrinkets(); // Function AthenaCheat.AthenaCheatManager.FillNearestShipWithTrinkets // Final|Exec|Native|Public // @ game+0x5291970
	void FakeMigrateBountyQuests(); // Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests // Final|Exec|Native|Public // @ game+0x5291950
	void ExitedStormShipEvent(); // Function AthenaCheat.AthenaCheatManager.ExitedStormShipEvent // Final|Exec|Native|Public // @ game+0x5291930
	void EquipPirateTitle(struct FString PirateTitleType); // Function AthenaCheat.AthenaCheatManager.EquipPirateTitle // Final|Exec|Native|Public // @ game+0x5291890
	void EquipCompassInLoadout(); // Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout // Final|Exec|Native|Public // @ game+0x5291870
	void EnteredStormShipEvent(); // Function AthenaCheat.AthenaCheatManager.EnteredStormShipEvent // Final|Exec|Native|Public // @ game+0x5291850
	void EndDemoSession(); // Function AthenaCheat.AthenaCheatManager.EndDemoSession // Final|Exec|Native|Public // @ game+0x5291830
	void EndCurrentCaptainedSession(); // Function AthenaCheat.AthenaCheatManager.EndCurrentCaptainedSession // Final|Exec|Native|Public // @ game+0x5291810
	void EnableVoiceChatMeteringForOutgoingSignals(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals // Final|Exec|Native|Public // @ game+0x5291780
	void EnableVoiceChatMeteringForIncomingSignals(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals // Final|Exec|Native|Public // @ game+0x52916f0
	void EnableStoryServiceCheat(); // Function AthenaCheat.AthenaCheatManager.EnableStoryServiceCheat // Final|Exec|Native|Public // @ game+0x52916d0
	void EnableStormEffects(char LockReason); // Function AthenaCheat.AthenaCheatManager.EnableStormEffects // Final|Exec|Native|Public // @ game+0x5291650
	void EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay(int32_t TrueFalse); // Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay // Final|Exec|Native|Public // @ game+0x52915d0
	void EnableNTP(bool Enable); // Function AthenaCheat.AthenaCheatManager.EnableNTP // Final|Exec|Native|Public // @ game+0x5291540
	void EnableMermaidSpawning(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning // Final|Exec|Native|Public // @ game+0x52914c0
	void EnableMermaidDeletion(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion // Final|Exec|Native|Public // @ game+0x5291440
	void EnableHeadphoneMixing(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing // Final|Exec|Native|Public // @ game+0x52913b0
	void EnableFactionDebug(); // Function AthenaCheat.AthenaCheatManager.EnableFactionDebug // Final|Exec|Native|Public // @ game+0x5291390
	void EnableEmergentSirenSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning // Final|Exec|Native|Public // @ game+0x5291370
	void EnableEmergentSharkSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning // Final|Exec|Native|Public // @ game+0x5291350
	void EnableConsoleLogging(); // Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging // Final|Exec|Native|Public // @ game+0x5291330
	void EnableCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera // Final|Exec|Native|Protected // @ game+0x5291310
	void EnableBeaconOnAllMermaids(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids // Final|Exec|Native|Public // @ game+0x5291290
	void EnableAllEmergentWaterSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning // Final|Exec|Native|Public // @ game+0x5291270
	void EnableAIBehaviour(); // Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour // Final|Exec|Native|Public // @ game+0x5291250
	void EmptyNearestShipOfTrinkets(); // Function AthenaCheat.AthenaCheatManager.EmptyNearestShipOfTrinkets // Final|Exec|Native|Public // @ game+0x5291230
	void DrawVideprinter(struct FString Id, bool Active); // Function AthenaCheat.AthenaCheatManager.DrawVideprinter // Final|Exec|Native|Public // @ game+0x5291150
	void DrawTreasureDebug(int32_t Enabled); // Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug // Final|Exec|Native|Public // @ game+0x52910d0
	void DrawTemporaryLandmarkDebug(bool Enabled); // Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug // Final|Exec|Native|Public // @ game+0x5291040
	void DrawNearbyAISpawnPointsRanged(float Range); // Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged // Final|Exec|Native|Public // @ game+0x5290fc0
	void DrawNearbyAISpawnPoints(); // Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints // Final|Exec|Native|Public // @ game+0x5290fa0
	void DownPlayer(); // Function AthenaCheat.AthenaCheatManager.DownPlayer // Final|Exec|Native|Public // @ game+0x5290f80
	void DownAllPlayers(); // Function AthenaCheat.AthenaCheatManager.DownAllPlayers // Final|Exec|Native|Public // @ game+0x5290f60
	void DownAllOtherPlayers(); // Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers // Final|Exec|Native|Public // @ game+0x5290f40
	void DownAllOtherPlayerCharacters(); // Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters // Final|Exec|Native|Public // @ game+0x5290f20
	void DouseClosestShip(); // Function AthenaCheat.AthenaCheatManager.DouseClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5290f00
	void DouseAllShipFires(); // Function AthenaCheat.AthenaCheatManager.DouseAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5290ee0
	void DiveShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.DiveShipByActorId // Final|Exec|Native|Public // @ game+0x5290e40
	void DisplaySpireLocationsDebug(int32_t Enabled); // Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug // Final|Exec|Native|Public // @ game+0x5290dc0
	void DisplaySingleEmblemProgress(struct FString StatName); // Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress // Final|Exec|Native|Public // @ game+0x5290d20
	void DisplayServersideHitsAtPlayerPosWithDefaults(); // Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults // Final|Exec|Native|Public // @ game+0x5290d00
	void DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight); // Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos // Final|Exec|Native|Public // @ game+0x5290c00
	void DisplayServerFPS(); // Function AthenaCheat.AthenaCheatManager.DisplayServerFPS // Final|Exec|Native|Public // @ game+0x5290be0
	void DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled); // Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland // Final|Exec|Native|Public // @ game+0x5290b50
	void DisplayLoadingScreenTeleport(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport // Final|Exec|Native|Public // @ game+0x5290b30
	void DisplayLoadingScreenBoot(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot // Final|Exec|Native|Public // @ game+0x5290b10
	void DisplayLoadingScreenAdventure(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure // Final|Exec|Native|Public // @ game+0x5290af0
	void DisplayLandmarkValidTreasureLocationsForPlayer(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer // Final|Exec|Native|Public // @ game+0x5290ad0
	void DisplayLandmarkRegions(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions // Final|Exec|Native|Public // @ game+0x5290ab0
	void DisplayLandmarkNames(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames // Final|Exec|Native|Public // @ game+0x5290a90
	void DisplayFallDamageDebug(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug // Final|Exec|Native|Public // @ game+0x5290a10
	void DisplayDrunkenness(bool Flag); // Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness // Final|Exec|Native|Public // @ game+0x5290980
	void DismissAllPickupPoints(); // Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints // Final|Exec|Native|Public // @ game+0x5290960
	void DisableStormEffects(char LockReason); // Function AthenaCheat.AthenaCheatManager.DisableStormEffects // Final|Exec|Native|Public // @ game+0x52908e0
	void DisableEmergentSirenSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning // Final|Exec|Native|Public // @ game+0x52908c0
	void DisableEmergentSharkSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning // Final|Exec|Native|Public // @ game+0x52908a0
	void DisableContextualTutorialAccessCounterLimits(bool Value); // Function AthenaCheat.AthenaCheatManager.DisableContextualTutorialAccessCounterLimits // Final|Exec|Native|Public // @ game+0x5290810
	void DisableConsoleLogging(); // Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging // Final|Exec|Native|Public // @ game+0x52907f0
	void DisableCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera // Final|Exec|Native|Protected // @ game+0x52907d0
	void DisableAllEmergentWaterSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning // Final|Exec|Native|Public // @ game+0x52907b0
	void DisableAIBehaviour(); // Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour // Final|Exec|Native|Public // @ game+0x5290790
	void DisableAIAbilities(); // Function AthenaCheat.AthenaCheatManager.DisableAIAbilities // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5290770
	void DioramaStartNearest(struct FString Spawner, struct FString DioramaDesc); // Function AthenaCheat.AthenaCheatManager.DioramaStartNearest // Final|Exec|Native|Public // @ game+0x5290670
	void DioramaStart(struct FString ActorName, struct FString Spawner, struct FString DioramaDesc); // Function AthenaCheat.AthenaCheatManager.DioramaStart // Final|Exec|Native|Public // @ game+0x5290510
	void DioramaKillAllDebug(); // Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug // Final|Exec|Native|Public // @ game+0x52904f0
	void DestroyShip(struct FString ShipActorIdConsoleString); // Function AthenaCheat.AthenaCheatManager.DestroyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5290450
	void DestroyNearestDebugReapersChestMarker(); // Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker // Final|Exec|Native|Public // @ game+0x5290430
	void DestroyMyShip(); // Function AthenaCheat.AthenaCheatManager.DestroyMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5290410
	void DestroyKraken(); // Function AthenaCheat.AthenaCheatManager.DestroyKraken // Final|Exec|Native|Public // @ game+0x52903f0
	void DestroyGlobalDigSpotService(); // Function AthenaCheat.AthenaCheatManager.DestroyGlobalDigSpotService // Final|Exec|Native|Public // @ game+0x52903d0
	void DestroyAllTreasureChests(); // Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests // Final|Exec|Native|Public // @ game+0x52903b0
	void DestroyAllTinySharks(); // Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks // Final|Exec|Native|Public // @ game+0x5290390
	void DestroyAllSirenStatues(); // Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues // Final|Exec|Native|Public // @ game+0x5290370
	void DestroyAllShips(); // Function AthenaCheat.AthenaCheatManager.DestroyAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x5290350
	void DespawnNumberOfAI(struct FString AITypeString, int32_t NumToDespawn); // Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI // Final|Exec|Native|Public // @ game+0x5290270
	void DespawnFirstAI(); // Function AthenaCheat.AthenaCheatManager.DespawnFirstAI // Final|Exec|Native|Public // @ game+0x5290250
	void DespawnAllAggressiveGhostShips(); // Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips // Final|Exec|Native|Public // @ game+0x5290230
	void DespawnAI(struct FString AITypeString); // Function AthenaCheat.AthenaCheatManager.DespawnAI // Final|Exec|Native|Public // @ game+0x5290190
	void DeleteVoyageHistory(); // Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory // Final|Exec|Native|Public // @ game+0x5290170
	void DeleteAllMermaids(); // Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids // Final|Exec|Native|Public // @ game+0x5290150
	void DecrementFactionStreak(); // Function AthenaCheat.AthenaCheatManager.DecrementFactionStreak // Final|Exec|Native|Public // @ game+0x5290130
	void DecrementDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage // Final|Exec|Native|Public // @ game+0x5290110
	void DebugLoadRowboat(struct FString WatercraftEntitlement, struct FString LiveryEntitlement); // Function AthenaCheat.AthenaCheatManager.DebugLoadRowboat // Final|Exec|Native|Public // @ game+0x5290010
	void DebugIslandDelta(); // Function AthenaCheat.AthenaCheatManager.DebugIslandDelta // Final|Exec|Native|Public // @ game+0x528fff0
	void DeactivateSkellyFort(struct FString FortName); // Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort // Final|Exec|Native|Public|HasOutParms // @ game+0x528ff40
	void DeactivateEmissaryFlagCompany(); // Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany // Final|Exec|Native|Public // @ game+0x528ff20
	void DeactivateDeathEffect(); // Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect // Final|Exec|Native|Public // @ game+0x528ff00
	void DamageShipFromRemoteActor(struct FString ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ); // Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor // Final|Exec|Native|Public // @ game+0x528fc80
	void DamageShip(float Strength); // Function AthenaCheat.AthenaCheatManager.DamageShip // Final|Exec|Native|Public // @ game+0x528fc00
	void DamagePlayerFromRemoteActor(struct FString ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ); // Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor // Final|Exec|Native|Public // @ game+0x528f980
	void DamagePlayer(float Strength); // Function AthenaCheat.AthenaCheatManager.DamagePlayer // Final|Exec|Native|Public // @ game+0x528f900
	void CustomiseNearestRowboat(struct FString* LiveryDescStringRef); // Function AthenaCheat.AthenaCheatManager.CustomiseNearestRowboat // Final|Exec|Native|Public // @ game+0x528f860
	void CureAllAilings(); // Function AthenaCheat.AthenaCheatManager.CureAllAilings // Final|Exec|Native|Public|BlueprintCallable // @ game+0x528f840
	void CreateScorpioFragmentationRepro(); // Function AthenaCheat.AthenaCheatManager.CreateScorpioFragmentationRepro // Final|Exec|Native|Public // @ game+0x528f820
	void CreateDebugReapersChestMarkerAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation // Final|Exec|Native|Public // @ game+0x528f800
	void CreateDebugAISpawnerAt(struct FString* SpawnerAssetName, struct FString* LocationActorName); // Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt // Final|Exec|Native|Public // @ game+0x528f700
	void CreateDebugAISpawner(struct FString* SpawnerAssetName); // Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner // Final|Exec|Native|Public // @ game+0x528f660
	void CreateCaptainsLogForCrew(); // Function AthenaCheat.AthenaCheatManager.CreateCaptainsLogForCrew // Final|Exec|Native|Public // @ game+0x528f640
	void CopyAllUserBasedIdsToClipboard(); // Function AthenaCheat.AthenaCheatManager.CopyAllUserBasedIdsToClipboard // Final|Exec|Native|Public // @ game+0x528f620
	void CoordinatedKrakenToggleAI(); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI // Final|Exec|Native|Public // @ game+0x528f600
	void CoordinatedKrakenRequestAction(struct FString* ActionName); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction // Final|Exec|Native|Public // @ game+0x528f560
	void CoordinatedKrakenEnableDebugging(int32_t* Enable); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging // Final|Exec|Native|Public // @ game+0x528f4e0
	void ContextualPromptCountersToggleDebugDraw(); // Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw // Final|Exec|Native|Public // @ game+0x528f4c0
	void CompleteVoyage(); // Function AthenaCheat.AthenaCheatManager.CompleteVoyage // Final|Exec|Native|Public // @ game+0x528f4a0
	void CompleteCurrentChecklistMap(); // Function AthenaCheat.AthenaCheatManager.CompleteCurrentChecklistMap // Final|Exec|Native|Public // @ game+0x528f480
	void CompleteClosestTreasuryRoomToPlayer(); // Function AthenaCheat.AthenaCheatManager.CompleteClosestTreasuryRoomToPlayer // Final|Exec|Native|Public // @ game+0x528f460
	void CompleteAllActivePuzzleVaults(); // Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults // Final|Exec|Native|Public // @ game+0x528f440
	void CompleteActiveQuests(); // Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests // Final|Exec|Native|Public // @ game+0x528f420
	void CloseSkeletonFortDoor(); // Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor // Final|Exec|Native|Public // @ game+0x528f400
	void CloseLoadingScreen(); // Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen // Final|Exec|Native|Public // @ game+0x528f3e0
	void ClearWorldSequences(); // Function AthenaCheat.AthenaCheatManager.ClearWorldSequences // Final|Exec|Native|Public // @ game+0x528f3c0
	void ClearVoiceChatMeters(); // Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters // Final|Exec|Native|Public // @ game+0x528f3a0
	void ClearStoryDisplayFilter(); // Function AthenaCheat.AthenaCheatManager.ClearStoryDisplayFilter // Final|Exec|Native|Public // @ game+0x528f380
	void ClearSlowMotionOverride(); // Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride // Final|Exec|Native|Public // @ game+0x528f360
	void ClearShipVoyages(); // Function AthenaCheat.AthenaCheatManager.ClearShipVoyages // Final|Exec|Native|Public|BlueprintCallable // @ game+0x528f340
	void ClearRitualTableRequiredPlayersOverride(); // Function AthenaCheat.AthenaCheatManager.ClearRitualTableRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x528f320
	void ClearGrogSecondary(); // Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary // Final|Exec|Native|Public // @ game+0x528f300
	void ClearGlitterbeardRequiredPlayersOverride(); // Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x528f2e0
	void ClearDebugStormLocation(); // Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation // Final|Exec|Native|Public // @ game+0x528f2c0
	void ClearCampaignOverrides(); // Function AthenaCheat.AthenaCheatManager.ClearCampaignOverrides // Final|Exec|Native|Public // @ game+0x528f2a0
	void ClearAxisBinding(struct FString* InBindingName); // Function AthenaCheat.AthenaCheatManager.ClearAxisBinding // Final|Exec|Native|Public // @ game+0x528f200
	void ClearAIAbilityTimeMultipliers(); // Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers // Final|Exec|Native|Public // @ game+0x528f1c0
	void ClearAdventureOnDemandCrewDiveCooldown(); // Function AthenaCheat.AthenaCheatManager.ClearAdventureOnDemandCrewDiveCooldown // Final|Exec|Native|Public // @ game+0x528f1e0
	void CheckLandmarkValidTreasureLocationsAtPlayerPos(); // Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos // Final|Exec|Native|Public // @ game+0x528f1a0
	void CheckLandmarkRelativeToIslandCalculation(); // Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation // Final|Exec|Native|Public // @ game+0x528f180
	void CapsizeShip(); // Function AthenaCheat.AthenaCheatManager.CapsizeShip // Final|Exec|Native|Public // @ game+0x528f160
	void CancelVoyage(); // Function AthenaCheat.AthenaCheatManager.CancelVoyage // Final|Exec|Native|Public // @ game+0x528f140
	void CancelTale(); // Function AthenaCheat.AthenaCheatManager.CancelTale // Final|Exec|Native|Public // @ game+0x528f120
	void CancelLeaveFactionCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelLeaveFactionCooldown // Final|Exec|Native|Public // @ game+0x528f100
	void CancelInvasionMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelInvasionMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x528f0e0
	void CancelInitialMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelInitialMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x528f0c0
	void CancelEmergentVoyages(); // Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages // Final|Exec|Native|Public // @ game+0x528f0a0
	void CancelDebugInvasion(struct FString* InCrewId); // Function AthenaCheat.AthenaCheatManager.CancelDebugInvasion // Final|Exec|Native|Public // @ game+0x528f000
	void CancelCurrentMatchmakingCooldownForAllCrews(); // Function AthenaCheat.AthenaCheatManager.CancelCurrentMatchmakingCooldownForAllCrews // Final|Exec|Native|Public // @ game+0x528efe0
	void CancelAllDebugInvasions(); // Function AthenaCheat.AthenaCheatManager.CancelAllDebugInvasions // Final|Exec|Native|Public // @ game+0x528efc0
	void CancelAllCrewVoyages(); // Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages // Final|Exec|Native|Public // @ game+0x528efa0
	void CancelActiveAIShipEncounters(); // Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters // Final|Exec|Native|Public // @ game+0x528ef80
	void BuryNearestBuriable(); // Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable // Final|Exec|Native|Public // @ game+0x528ef60
	void BuryItem(struct FString* NameOfItemToBury); // Function AthenaCheat.AthenaCheatManager.BuryItem // Final|Exec|Native|Public // @ game+0x528eec0
	void BreakLeg(); // Function AthenaCheat.AthenaCheatManager.BreakLeg // Final|Exec|Native|Public // @ game+0x528eea0
	void BlockMigrationForPlayer(bool* Enabled); // Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer // Final|Exec|Native|Public // @ game+0x528ee10
	void ApplyStatusToPlayer(struct FString* StatusIdentifier, float* Duration); // Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer // Final|Exec|Native|Public // @ game+0x528ed30
	void ApplyDamageToAllDamageZones(float* Damage); // Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones // Final|Exec|Native|Public // @ game+0x528ecb0
	void ApplyCursedCannonballStatusToShip(struct FString* CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip // Final|Exec|Native|Public // @ game+0x528ec10
	void ApplyCursedCannonballStatusToPlayer(struct FString* CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer // Final|Exec|Native|Public // @ game+0x528eb70
	void AllowTunnelMatchmakingForCrew(); // Function AthenaCheat.AthenaCheatManager.AllowTunnelMatchmakingForCrew // Final|Exec|Native|Public // @ game+0x528eb50
	void AllowTeleportWithItems(bool* CanTeleport); // Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems // Final|Exec|Native|Public|BlueprintCallable // @ game+0x528eac0
	void AllowShipMotion(); // Function AthenaCheat.AthenaCheatManager.AllowShipMotion // Final|Exec|Native|Public // @ game+0x528eaa0
	void AllocatePortalToTunnelOfTheDamned(struct FString* TunnelDescAssetPath); // Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned // Final|Exec|Native|Public // @ game+0x528ea00
	void AllJoinAlliance(); // Function AthenaCheat.AthenaCheatManager.AllJoinAlliance // Final|Exec|Native|Public // @ game+0x528e9e0
	void AIPlayerShip(); // Function AthenaCheat.AthenaCheatManager.AIPlayerShip // Final|Exec|Native|Public // @ game+0x528da70
	void AggressiveGhostShipRebuildSpline(); // Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline // Final|Exec|Native|Public // @ game+0x528e9c0
	void AdjustGhostShader(bool* Enabled, float* InStartingAmount, float* InTargetAmount, float* InVengeanceStartingAmount, float* InVengeanceTargetAmount, float* InDelayBeforeStart, float* InBlendDuration); // Function AthenaCheat.AthenaCheatManager.AdjustGhostShader // Final|Exec|Native|Public // @ game+0x528e7b0
	void AddVoyageToShip(struct FString* SourceAssetName); // Function AthenaCheat.AthenaCheatManager.AddVoyageToShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x528e710
	void AddUniquePetForAllPlayers(struct FString* PetTypeAndPartIndexes); // Function AthenaCheat.AthenaCheatManager.AddUniquePetForAllPlayers // Final|Exec|Native|Public // @ game+0x528e670
	void AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x528e650
	void AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x528e630
	void AddTradeRouteClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x528e610
	void AddTornMapPiece(); // Function AthenaCheat.AthenaCheatManager.AddTornMapPiece // Final|Exec|Native|Public // @ game+0x528e5f0
	void AddShipToCrew(struct FString* ActorIdString, struct FString* CrewId); // Function AthenaCheat.AthenaCheatManager.AddShipToCrew // Final|Exec|Native|Public // @ game+0x528e4f0
	void AddSelfAsFriend(); // Function AthenaCheat.AthenaCheatManager.AddSelfAsFriend // Final|Exec|Native|Public // @ game+0x528e4d0
	void AddRandomPetForAllPlayers(); // Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers // Final|Exec|Native|Public // @ game+0x528e4b0
	void AddPlayerToCrew(struct FString* ActorIdString, struct FString* CrewId); // Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew // Final|Exec|Native|Public // @ game+0x528e3b0
	void AddPetForPlayer(int32_t* PetTypeIndex, int32_t* PetPartIndex); // Function AthenaCheat.AthenaCheatManager.AddPetForPlayer // Final|Exec|Native|Public // @ game+0x528e2f0
	void AddPetForAllPlayers(int32_t* PetTypeIndex, int32_t* PetPartIndex); // Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers // Final|Exec|Native|Public // @ game+0x528e230
	void AddNoParameterEventLogEntryToCaptainsLog(); // Function AthenaCheat.AthenaCheatManager.AddNoParameterEventLogEntryToCaptainsLog // Final|Exec|Native|Public // @ game+0x528e210
	void AddMysteriousNote(struct FString* NoteType, struct FString* NoteTitle, struct FString* NoteBody, struct FString* CompletionStrings); // Function AthenaCheat.AthenaCheatManager.AddMysteriousNote // Final|Exec|Native|Public // @ game+0x528e060
	void AddLongEventLogEntryToCaptainsLog(); // Function AthenaCheat.AthenaCheatManager.AddLongEventLogEntryToCaptainsLog // Final|Exec|Native|Public // @ game+0x528e040
	void AddInvasionBattleBounds(); // Function AthenaCheat.AthenaCheatManager.AddInvasionBattleBounds // Final|Exec|Native|Public // @ game+0x528e020
	void AddInactiveCampaignOverride(struct FString* CampaignName); // Function AthenaCheat.AthenaCheatManager.AddInactiveCampaignOverride // Final|Exec|Native|Public // @ game+0x528df80
	void AddDrunkenness(int32_t* DrunkennessType, float* DrunkennessChange); // Function AthenaCheat.AthenaCheatManager.AddDrunkenness // Final|Exec|Native|Public // @ game+0x528dec0
	void AddAllKnownStories(); // Function AthenaCheat.AthenaCheatManager.AddAllKnownStories // Final|Exec|Native|Public // @ game+0x528dea0
	void AddAISpawnContext(struct FString* ContextName); // Function AthenaCheat.AthenaCheatManager.AddAISpawnContext // Final|Exec|Native|Public // @ game+0x528dc80
	void AddActiveStory(struct FString* StoryName, bool* AddIfNonExistentStory); // Function AthenaCheat.AthenaCheatManager.AddActiveStory // Final|Exec|Native|Public // @ game+0x528ddc0
	void AddActiveCampaignOverride(struct FString* CampaignName); // Function AthenaCheat.AthenaCheatManager.AddActiveCampaignOverride // Final|Exec|Native|Public // @ game+0x528dd20
	void ActivateSkellyFort(struct FString* FortEventName, struct FString* FortName); // Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort // Final|Exec|Native|Public|HasOutParms // @ game+0x528db50
	void ActivateEmissaryFlagCompany(struct FString* CompanyId); // Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany // Final|Exec|Native|Public // @ game+0x528dab0
	void ActivateDebugTeleportationDestinationService(); // Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService // Final|Exec|Native|Public // @ game+0x528da90
};

