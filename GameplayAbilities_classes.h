// Class GameplayAbilities.AttributeSet
// Size: 0x30 (Inherited: 0x28)
struct UAttributeSet : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class GameplayAbilities.GameplayCueInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueInterface : UInterface {

	void ForwardGameplayCueToParent(); // Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent // BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x4e38120
	void BlueprintCustomHandler(char* EventType, struct FGameplayCueParameters* Parameters); // Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e25660
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle* TargetData, int32_t* Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e428c0
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle* HitResult, int32_t* Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e426b0
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle* TargetData, int32_t* Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e424a0
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle* TargetData, int32_t* Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e42290
	struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle* SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e41b20
	struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle* SpecHandle, int32_t* StackCount); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e418e0
	struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle* SpecHandle, float* Duration); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e41610
	void SendGameplayEventToActor(struct AActor** Actor, struct FGameplayTag* EventTag, struct FGameplayEventData* payload); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e3ff50
	struct FGameplayEffectSpecHandle MakeSpecHandle(struct UGameplayEffect** InGameplayEffect, struct AActor** InInstigator, struct AActor** InEffectCauser, float* InLevel); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e3cd20
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter* Filter, struct AActor** FilterActor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e3c7b0
	bool IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters* Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e3b320
	bool IsInstigatorLocallyControlled(struct FGameplayCueParameters* Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e3b130
	bool HasHitResult(struct FGameplayCueParameters* Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e3aeb0
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle* TargetData, int32_t* Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4e3ac30
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle* TargetData, int32_t* Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4e3a9e0
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle* TargetData, int32_t* Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4e3a7b0
	struct FVector GetOrigin(struct FGameplayCueParameters* Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4e3a230
	struct FTransform GetInstigatorTransform(struct FGameplayCueParameters* Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4e3a010
	struct AActor* GetInstigatorActor(struct FGameplayCueParameters* Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e39e20
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle* HitResult, int32_t* Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e39bf0
	struct FHitResult GetHitResult(struct FGameplayCueParameters* Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e399f0
	bool GetGameplayCueEndLocationAndNormal(struct AActor** TargetActor, struct FGameplayCueParameters* Parameters, struct FVector* Location, struct FVector* Normal); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4e39580
	bool GetGameplayCueDirection(struct AActor** TargetActor, struct FGameplayCueParameters* Parameters, struct FVector* Direction); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4e39300
	float GetFloatAttribute(struct AActor** Actor, struct FGameplayAttribute* Attribute, bool* bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x4e39200
	int32_t GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle* TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e38f90
	struct TArray<struct AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, int32_t* Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e38a60
	int32_t GetActorCount(struct FGameplayCueParameters* Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e387f0
	struct AActor* GetActorByIndex(struct FGameplayCueParameters* Parameters, int32_t* Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e385c0
	int32_t GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle* ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e38540
	struct UAbilitySystemComponent* GetAbilitySystemComponent(struct AActor** Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e384c0
	void ForwardGameplayCueToTarget(TScriptInterface<struct UGameplayCueInterface>* TargetCueInterface, char* EventType, struct FGameplayCueParameters* Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e38140
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle* TargetDataHandle, struct FGameplayTargetDataFilterHandle* ActorFilterClass); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e37a40
	bool EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle* EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e37670
	bool EffectContextHasHitResult(struct FGameplayEffectContextHandle* EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e37580
	struct UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle* EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e37490
	struct AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle* EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e373a0
	struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle* EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4e372a0
	struct AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle* EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e371b0
	struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle* EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e370a0
	struct AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle* EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e36fb0
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle* TargetData, int32_t* Index, struct AActor** Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e36d70
	bool DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters* Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x4e369d0
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle* SpecHandle, struct FName* DataName, float* Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e34990
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle* TargetHandle, struct FGameplayAbilityTargetDataHandle* HandleToAdd); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e34600
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle* SpecHandle, struct FGameplayEffectSpecHandle* LinkedGameplayEffectSpec); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e342e0
	struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle* SpecHandle, struct FGameplayTagContainer* NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e34040
	struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle* SpecHandle, struct FGameplayTag* NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e33df0
	struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle* SpecHandle, struct FGameplayTagContainer* NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e33b50
	struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle* SpecHandle, struct FGameplayTag* NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e33900
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo* SourceLocation, struct FGameplayAbilityTargetingLocationInfo* TargetLocation); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x4e33740
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult* HitResult); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e33590
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(struct TArray<struct AActor*>* ActorArray, bool* OneTargetPerHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e33430
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(struct AActor** Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4e33390
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x578 (Inherited: 0x28)
struct UGameplayEffect : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	char DurationPolicy; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct FGameplayEffectModifierMagnitude DurationMagnitude; // 0x38(0x170)
	struct FScalableFloat Period; // 0x1a8(0x20)
	bool bExecutePeriodicEffectOnApplication; // 0x1c8(0x01)
	char UnknownData_1C9[0x7]; // 0x1c9(0x07)
	struct TArray<struct FGameplayModifierInfo> Modifiers; // 0x1d0(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x1e0(0x10)
	struct FScalableFloat ChanceToApplyToTarget; // 0x1f0(0x20)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x210(0x10)
	struct TArray<struct UGameplayEffect*> TargetEffects; // 0x220(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x230(0x10)
	bool bDenyOverflowApplication; // 0x240(0x01)
	bool bClearStackOnOverflow; // 0x241(0x01)
	char UnknownData_242[0x6]; // 0x242(0x06)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x248(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x258(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
	struct TArray<struct FGameplayEffectCue> GameplayCues; // 0x270(0x10)
	struct UGameplayEffectUIData* UIData; // 0x280(0x08)
	struct FInheritedTagContainer InheritableGameplayEffectTags; // 0x288(0x78)
	struct FGameplayTagContainer GameplayEffectTags; // 0x300(0x28)
	struct FInheritedTagContainer InheritableOwnedTagsContainer; // 0x328(0x78)
	struct FGameplayTagContainer OwnedTagsContainer; // 0x3a0(0x28)
	struct FGameplayTagRequirements OngoingTagRequirements; // 0x3c8(0x50)
	struct FGameplayTagRequirements ApplicationTagRequirements; // 0x418(0x50)
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x468(0x78)
	struct FGameplayTagContainer ClearTagsContainer; // 0x4e0(0x28)
	struct FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x508(0x50)
	char StackingType; // 0x558(0x01)
	char UnknownData_559[0x3]; // 0x559(0x03)
	int32_t StackLimitCount; // 0x55c(0x04)
	char StackDurationRefreshPolicy; // 0x560(0x01)
	char StackPeriodResetPolicy; // 0x561(0x01)
	char UnknownData_562[0x6]; // 0x562(0x06)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities; // 0x568(0x10)
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x448 (Inherited: 0x28)
struct UGameplayAbility : UObject {
	char UnknownData_28[0x40]; // 0x28(0x40)
	struct FGameplayTagContainer AbilityTags; // 0x68(0x28)
	char UnknownData_90[0x18]; // 0x90(0x18)
	bool bReplicateInputDirectly; // 0xa8(0x01)
	char UnknownData_A9[0x27]; // 0xa9(0x27)
	char ReplicationPolicy; // 0xd0(0x01)
	char InstancingPolicy; // 0xd1(0x01)
	bool bServerRespectsRemoteAbilityCancellation; // 0xd2(0x01)
	bool bRetriggerInstancedAbility; // 0xd3(0x01)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xd8(0x20)
	struct FGameplayEventData CurrentEventData; // 0xf8(0xa0)
	char NetExecutionPolicy; // 0x198(0x01)
	char UnknownData_199[0x7]; // 0x199(0x07)
	struct UClass* CostGameplayEffectClass; // 0x1a0(0x08)
	struct UGameplayEffect* CostGameplayEffect; // 0x1a8(0x08)
	struct TArray<struct FAbilityTriggerData> AbilityTriggers; // 0x1b0(0x10)
	struct UClass* CooldownGameplayEffectClass; // 0x1c0(0x08)
	struct UGameplayEffect* CooldownGameplayEffect; // 0x1c8(0x08)
	struct FGameplayTagQuery CancelAbilitiesMatchingTagQuery; // 0x1d0(0x48)
	struct FGameplayTagQuery ConstTagQuery; // 0x218(0x48)
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x260(0x28)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x288(0x28)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x2b0(0x28)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x2d8(0x28)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x300(0x28)
	struct FGameplayTagContainer SourceRequiredTags; // 0x328(0x28)
	struct FGameplayTagContainer SourceBlockedTags; // 0x350(0x28)
	struct FGameplayTagContainer TargetRequiredTags; // 0x378(0x28)
	struct FGameplayTagContainer TargetBlockedTags; // 0x3a0(0x28)
	char UnknownData_3C8[0x70]; // 0x3c8(0x70)
	struct UAnimMontage* CurrentMontage; // 0x438(0x08)
	bool bIsActive; // 0x440(0x01)
	bool bIsCancelable; // 0x441(0x01)
	bool bIsBlockingOtherAbilities; // 0x442(0x01)
	char UnknownData_443[0x5]; // 0x443(0x05)

	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities); // Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities // Native|Public|BlueprintCallable // @ game+0x4e41850
	void SetCanBeCanceled(bool bCanBeCanceled); // Function GameplayAbilities.GameplayAbility.SetCanBeCanceled // Native|Public|BlueprintCallable // @ game+0x4e41580
	void SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData payload); // Function GameplayAbilities.GameplayAbility.SendGameplayEvent // Native|Protected|BlueprintCallable // @ game+0x4e3fd70
	void MontageStop(float OverrideBlendOutTime); // Function GameplayAbilities.GameplayAbility.MontageStop // Final|Native|Protected|BlueprintCallable // @ game+0x4e3d1d0
	void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName); // Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName // Final|Native|Protected|BlueprintCallable // @ game+0x4e3d110
	void MontageJumpToSection(struct FName SectionName); // Function GameplayAbilities.GameplayAbility.MontageJumpToSection // Final|Native|Protected|BlueprintCallable // @ game+0x4e3d090
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x4e3cfa0
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor(); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x4e3cf10
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(struct UClass* GameplayEffectClass, float Level); // Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e3c960
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData payload); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // Event|Protected|BlueprintEvent|Const // @ game+0x1e25660
	void K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue // Native|Protected|BlueprintCallable // @ game+0x4e3c730
	void K2_OnEndAbility(); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // Event|Protected|BlueprintEvent // @ game+0x1e25660
	void K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x4e3c4d0
	void K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue // Native|Protected|BlueprintCallable // @ game+0x4e3c390
	void K2_EndAbility(); // Function GameplayAbilities.GameplayAbility.K2_EndAbility // Native|Protected|BlueprintCallable // @ game+0x4e3c370
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // Event|Public|BlueprintEvent // @ game+0x1e25660
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost // Native|Public|BlueprintCallable // @ game+0x4e3c2d0
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown // Native|Public|BlueprintCallable // @ game+0x4e3c230
	bool K2_CommitAbility(); // Function GameplayAbilities.GameplayAbility.K2_CommitAbility // Native|Public|BlueprintCallable // @ game+0x4e3c200
	bool K2_CheckAbilityCost(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost // Native|Public|BlueprintCallable // @ game+0x4e3c1d0
	bool K2_CheckAbilityCooldown(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown // Native|Public|BlueprintCallable // @ game+0x4e3c1a0
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // Event|Protected|HasOutParms|BlueprintEvent|Const // @ game+0x1e25660
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, struct UGameplayEffect* GameplayEffect, int32_t GameplayEffectLevel); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget // Final|Native|Protected|BlueprintCallable // @ game+0x4e3bf00
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToOwner(struct UGameplayEffect* GameplayEffect, int32_t GameplayEffectLevel); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner // Final|Native|Protected|BlueprintCallable // @ game+0x4e3bb10
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget // Final|Native|Protected|BlueprintCallable // @ game+0x4e3b7d0
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner // Final|Native|Protected|BlueprintCallable // @ game+0x4e3b670
	void K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue // Native|Protected|BlueprintCallable // @ game+0x4e3b510
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x1e25660
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // Event|Protected|BlueprintEvent // @ game+0x1e25660
	struct USkeletalMeshComponent* GetOwningComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e3a780
	struct AActor* GetOwningActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e3a750
	struct FGameplayEffectSpecHandle GetOutgoingGameplayEffectSpec(struct UGameplayEffect* GameplayEffect, float Level); // Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e3a430
	struct UObject* GetCurrentSourceObject(); // Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x4e38f60
	struct UAnimMontage* GetCurrentMontage(); // Function GameplayAbilities.GameplayAbility.GetCurrentMontage // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e38f30
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData); // Function GameplayAbilities.GameplayAbility.GetContextFromOwner // Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x4e38cf0
	struct AActor* GetAvatarActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e38cc0
	struct FGameplayAbilityActorInfo GetActorInfo(); // Function GameplayAbilities.GameplayAbility.GetActorInfo // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e389e0
	int32_t GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x4e38490
	void EndTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName // Final|Native|Protected|BlueprintCallable // @ game+0x4e377e0
	void EndAbilityState(struct FName OptionalStateNameToEnd); // Function GameplayAbilities.GameplayAbility.EndAbilityState // Final|Native|Protected|BlueprintCallable // @ game+0x4e37760
	void ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask); // Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName // Final|Native|Protected|BlueprintCallable // @ game+0x4e365b0
	void CancelTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName // Final|Native|Protected|BlueprintCallable // @ game+0x4e35d40
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags // Final|Native|Protected|BlueprintCallable // @ game+0x4e35670
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags // Final|Native|Protected|BlueprintCallable // @ game+0x4e35550
	struct TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, struct UClass* GameplayEffectClass, int32_t GameplayEffectLevel); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget // Final|Native|Protected|BlueprintCallable // @ game+0x4e352b0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(struct UClass* GameplayEffectClass, int32_t GameplayEffectLevel); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner // Final|Native|Protected|BlueprintCallable // @ game+0x4e34ec0
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0xc98 (Inherited: 0x128)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char UnknownData_128[0x8]; // 0x128(0x08)
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // 0x130(0x10)
	struct TArray<struct UAttributeSet*> SpawnedAttributes; // 0x140(0x10)
	struct FPredictionKey ReplicatedPredictionKey; // 0x150(0x18)
	char UnknownData_168[0x78]; // 0x168(0x78)
	float OutgoingDuration; // 0x1e0(0x04)
	float IncomingDuration; // 0x1e4(0x04)
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // 0x1e8(0xc0)
	char UnknownData_2A8[0x50]; // 0x2a8(0x50)
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x2f8(0x10)
	char UnknownData_308[0x1b0]; // 0x308(0x1b0)
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x4b8(0x10)
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x4c8(0x30)
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x4f8(0x30)
	char UnknownData_528[0xa0]; // 0x528(0xa0)
	struct AActor* OwnerActor; // 0x5c8(0x08)
	struct AActor* AvatarActor; // 0x5d0(0x08)
	char UnknownData_5D8[0x18]; // 0x5d8(0x18)
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x5f0(0x368)
	struct FActiveGameplayCueContainer ActiveGameplayCues; // 0x958(0xc0)
	char UnknownData_A18[0x130]; // 0xa18(0x130)
	struct TArray<char> BlockedAbilityBindings; // 0xb48(0x10)
	char UnknownData_B58[0x140]; // 0xb58(0x140)

	bool TryActivateAbilityByClass(struct UClass** InAbilityToActivate, bool* bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass // Final|Native|Public|BlueprintCallable // @ game+0x4e42c40
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer* GameplayTagContainer, bool* bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4e42b10
	void TargetConfirm(); // Function GameplayAbilities.AbilitySystemComponent.TargetConfirm // Final|Native|Public|BlueprintCallable // @ game+0x4e42270
	void TargetCancel(); // Function GameplayAbilities.AbilitySystemComponent.TargetCancel // Final|Native|Public|BlueprintCallable // @ game+0x4e42250
	void SetUserAbilityActivationInhibited(bool* NewInhibit); // Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited // Final|Native|Public|BlueprintCallable // @ game+0x4e41d30
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle* ActiveHandle, int32_t* NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x4e414b0
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle* AbilityToActivate, bool* InputPressed, struct FPredictionKey* PredictionKey, struct FGameplayEventData* TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x4e41110
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle* AbilityToActivate, bool* InputPressed, struct FPredictionKey* PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x4e40fb0
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle* AbilityHandle, struct FPredictionKey* AbilityOriginalPredictionKey, struct FPredictionKey* CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x4e40e20
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle* AbilityHandle, struct FPredictionKey* AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle* ReplicatedTargetDataHandle, struct FGameplayTag* ApplicationTag, struct FPredictionKey* CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x4e40a00
	void ServerSetReplicatedEvent(char* EventType, struct FGameplayAbilitySpecHandle* AbilityHandle, struct FPredictionKey* AbilityOriginalPredictionKey, struct FPredictionKey* CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x4e40830
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle* AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x4e40780
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle* AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x4e406d0
	void ServerEndAbility(struct FGameplayAbilitySpecHandle* AbilityToEnd, struct FGameplayAbilityActivationInfo* ActivationInfo, struct FPredictionKey* PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x4e40520
	void ServerCurrentMontageSetNextSectionName(struct UAnimMontage** ClientAnimMontage, float* ClientPosition, struct FName* SectionName, struct FName* NextSectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x4e403a0
	void ServerCurrentMontageJumpToSectionName(struct UAnimMontage** ClientAnimMontage, struct FName* SectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x4e402a0
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle* AbilityToCancel, struct FGameplayAbilityActivationInfo* ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x4e40160
	void RemoveActiveGameplayEffectBySourceEffect(struct UClass** GameplayEffect, struct UAbilitySystemComponent** InstigatorAbilitySystemComponent, int32_t* StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x4e3fb80
	bool RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle* Handle, int32_t* StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x4e3fac0
	void RemoveActiveEffectsWithTags(struct FGameplayTagContainer* Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags // Final|Native|Public|BlueprintCallable // @ game+0x4e3f9f0
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // Final|Native|Protected // @ game+0x4e3f390
	void OnRep_PredictionKey(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey // Final|Native|Public // @ game+0x4e3f370
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // Final|Native|Public // @ game+0x4e3f350
	void OnRep_GameplayEffects(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects // Final|Native|Public // @ game+0x4e3f330
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // Final|Native|Protected // @ game+0x4e3f310
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag* GameplayCueTag, struct FPredictionKey* PredictionKey, struct FGameplayCueParameters* GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // Net|Native|Event|NetMulticast|Public // @ game+0x4e3da10
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC* Spec, struct FPredictionKey* PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // Net|Native|Event|NetMulticast|Public // @ game+0x4e3d830
	void NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag* GameplayCueTag, struct FPredictionKey* PredictionKey, struct FGameplayEffectContextHandle* EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted // Net|Native|Event|NetMulticast|Public // @ game+0x4e3d6a0
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC* Spec, struct FPredictionKey* PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec // Net|Native|Event|NetMulticast|Public // @ game+0x4e3d5a0
	void NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag* GameplayCueTag, struct FPredictionKey* PredictionKey, struct FGameplayEffectContextHandle* EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded // Net|Native|Event|NetMulticast|Public // @ game+0x4e3d410
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(struct UClass** GameplayEffectClass, float* Level, struct FGameplayEffectContextHandle* Context); // Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e3caf0
	void K2_InitStats(struct UClass** Attributes, struct UDataTable** DataTable); // Function GameplayAbilities.AbilitySystemComponent.K2_InitStats // Final|Native|Public|BlueprintCallable // @ game+0x4e3c670
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToTarget(struct UGameplayEffect** GameplayEffect, struct UAbilitySystemComponent** Target, float* Level, struct FGameplayEffectContextHandle* Context); // Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget // Final|Native|Public|BlueprintCallable // @ game+0x4e3bd50
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToSelf(struct UGameplayEffect** GameplayEffect, float* Level, struct FGameplayEffectContextHandle* EffectContext); // Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf // Final|Native|Public|BlueprintCallable // @ game+0x4e3bbe0
	bool IsGameplayCueActive(struct FGameplayTag* GameplayCueTag); // Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e3b0a0
	bool GetUserAbilityActivationInhibited(); // Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e3ae80
	struct FGameplayEffectSpecHandle GetOutgoingSpec(struct UGameplayEffect* GameplayEffect, float Level); // Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e3a5c0
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e39920
	int32_t GetGameplayEffectCount(struct UClass* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x4e39860
	struct FGameplayEffectContextHandle GetEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.GetEffectContext // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4e39180
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate); // Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x4e36510
	void ClientSetReplicatedEvent(char EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent // Net|NetReliableNative|Event|Public|NetClient // @ game+0x4e363e0
	void ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x4e362d0
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x4e361c0
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x4e35f80
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x4e35e90
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x4e35dc0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(struct UClass* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget // Final|Native|Public|BlueprintCallable // @ game+0x4e35100
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(struct UClass* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf // Final|Native|Public|BlueprintCallable // @ game+0x4e34f90
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle SpecHandle, struct UAbilitySystemComponent* Target); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4e34d50
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4e34c10
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e25660
	void AbilityAbilityKey__DelegateSignature(int32_t InputID); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e25660
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x4c0 (Inherited: 0x4c0)
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x130 (Inherited: 0x28)
struct UAbilitySystemGlobals : UObject {
	struct FStringClassReference AbilitySystemGlobalsClassName; // 0x28(0x10)
	struct FGameplayTag ActivateFailCooldownTag; // 0x38(0x08)
	struct FName ActivateFailCooldownName; // 0x40(0x08)
	struct FGameplayTag ActivateFailCostTag; // 0x48(0x08)
	struct FName ActivateFailCostName; // 0x50(0x08)
	struct FGameplayTag ActivateFailTagsBlockedTag; // 0x58(0x08)
	struct FName ActivateFailTagsBlockedName; // 0x60(0x08)
	struct FGameplayTag ActivateFailTagsMissingTag; // 0x68(0x08)
	struct FName ActivateFailTagsMissingName; // 0x70(0x08)
	struct FGameplayTag ActivateFailNetworkingTag; // 0x78(0x08)
	struct FName ActivateFailNetworkingName; // 0x80(0x08)
	struct FString GlobalCurveTableName; // 0x88(0x10)
	struct FString GlobalAttributeMetaDataTableName; // 0x98(0x10)
	struct FString GlobalAttributeSetDefaultsTableName; // 0xa8(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerName; // 0xb8(0x10)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0xc8(0x10)
	struct FStringAssetReference GameplayTagResponseTableName; // 0xd8(0x10)
	struct UGameplayTagReponseTable* GameplayTagResponseTable; // 0xe8(0x08)
	bool PredictTargetGameplayEffects; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
	struct UCurveTable* GlobalCurveTable; // 0xf8(0x08)
	struct UCurveTable* GlobalAttributeDefaultsTable; // 0x100(0x08)
	struct UDataTable* GlobalAttributeMetaDataTable; // 0x108(0x08)
	struct UGameplayCueManager* GlobalGameplayCueManager; // 0x110(0x08)
	char UnknownData_118[0x18]; // 0x118(0x18)

	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // Exec|Native|Public // @ game+0x4e42af0
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // Exec|Native|Public // @ game+0x4e42ad0
};

// Class GameplayAbilities.AbilitySystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemInterface : UInterface {
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x488 (Inherited: 0x468)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char UnknownData_468[0x18]; // 0x468(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x480(0x08)
};

// Class GameplayAbilities.AbilityTask
// Size: 0x68 (Inherited: 0x58)
struct UAbilityTask : UGameplayTask {
	char UnknownData_58[0x10]; // 0x58(0x10)
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xb0 (Inherited: 0x68)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastDelegate OnTargetLocationReached; // 0x68(0x10)
	char UnknownData_78[0x4]; // 0x78(0x04)
	struct FVector StartLocation; // 0x7c(0x0c)
	struct FVector TargetLocation; // 0x88(0x0c)
	float DurationOfMovement; // 0x94(0x04)
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct UCurveFloat* LerpCurve; // 0xa0(0x08)
	struct UCurveVector* LerpCurveVector; // 0xa8(0x08)

	struct UAbilityTask_MoveToLocation* MoveToLocation(struct UObject* WorldContextObject, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve); // Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x4e3d250
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x80 (Inherited: 0x68)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastDelegate OnSync; // 0x68(0x10)
	char UnknownData_78[0x8]; // 0x78(0x08)

	struct UAbilityTask_NetworkSyncPoint* WaitNetSync(struct UObject* WorldContextObject, char SyncType); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e44560
	void OnSignalCallback(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback // Final|Native|Public // @ game+0x4e3f3b0
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0xc0 (Inherited: 0x68)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastDelegate OnComplete; // 0x68(0x10)
	struct FMulticastDelegate OnInterrupted; // 0x78(0x10)
	struct FMulticastDelegate OnCancelled; // 0x88(0x10)
	char UnknownData_98[0x28]; // 0x98(0x28)

	void OnMontageInterrupted(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted // Final|Native|Public // @ game+0x4e3eb70
	void OnMontageBlendingOut(struct UAnimMontage** Montage, bool* bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut // Final|Native|Public // @ game+0x4e3eaa0
	struct UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(struct UObject** WorldContextObject, struct FName* TaskInstanceName, struct UAnimMontage** MontageToPlay, float* Rate, struct FName* StartSection); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e36680
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0x98 (Inherited: 0x68)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastDelegate OnPerformAction; // 0x68(0x10)
	struct FMulticastDelegate OnFinished; // 0x78(0x10)
	char UnknownData_88[0x10]; // 0x88(0x10)

	struct UAbilityTask_Repeat* RepeatAction(struct UObject** WorldContextObject, float* TimeBetweenActions, int32_t* TotalActionCount); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e3fc80
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0x98 (Inherited: 0x68)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastDelegate Success; // 0x68(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x78(0x10)
	char UnknownData_88[0x10]; // 0x88(0x10)

	struct UAbilityTask_SpawnActor* SpawnActor(struct UObject** WorldContextObject, struct FGameplayAbilityTargetDataHandle* TargetData, struct UClass** Class); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e41dc0
	void FinishSpawningActor(struct UObject** WorldContextObject, struct FGameplayAbilityTargetDataHandle* TargetData, struct AActor** SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x4e37d50
	bool BeginSpawningActor(struct UObject** WorldContextObject, struct FGameplayAbilityTargetDataHandle* TargetData, struct UClass** Class, struct AActor** SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4e35790
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xa0 (Inherited: 0x68)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastDelegate OnStateEnded; // 0x68(0x10)
	struct FMulticastDelegate OnStateInterrupted; // 0x78(0x10)
	char UnknownData_88[0x18]; // 0x88(0x18)

	struct UAbilityTask_StartAbilityState* StartAbilityState(struct UObject** WorldContextObject, struct FName* StateName, bool* bEndCurrentState); // Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e42000
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x3e8 (Inherited: 0x3c8)
struct AGameplayAbilityWorldReticle : AActor {
	struct FWorldReticleParameters Parameters; // 0x3c8(0x0c)
	bool bFaceOwnerFlat; // 0x3d4(0x01)
	bool bSnapToTargetedActor; // 0x3d5(0x01)
	bool bIsTargetValid; // 0x3d6(0x01)
	bool bIsTargetAnActor; // 0x3d7(0x01)
	struct APlayerController* MasterPC; // 0x3d8(0x08)
	struct AActor* TargetingActor; // 0x3e0(0x08)

	void SetReticleMaterialParamVector(struct FName* ParamName, struct FVector* Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // Event|Public|HasDefaults|BlueprintEvent // @ game+0x1e25660
	void SetReticleMaterialParamFloat(struct FName* ParamName, float* Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // Event|Public|BlueprintEvent // @ game+0x1e25660
	void OnValidTargetChanged(bool* bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // Event|Public|BlueprintEvent // @ game+0x1e25660
	void OnTargetingAnActor(bool* bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // Event|Public|BlueprintEvent // @ game+0x1e25660
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // Event|Public|BlueprintEvent // @ game+0x1e25660
	void FaceTowardSource(bool* bFaceIn2D); // Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource // Final|Native|Public|BlueprintCallable // @ game+0x4e379b0
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x4e0 (Inherited: 0x3c8)
struct AGameplayAbilityTargetActor : AActor {
	bool ShouldProduceTargetDataOnServer; // 0x3c8(0x01)
	char UnknownData_3C9[0x7]; // 0x3c9(0x07)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0x3d0(0x70)
	char UnknownData_440[0x30]; // 0x440(0x30)
	struct APlayerController* MasterPC; // 0x470(0x08)
	struct UGameplayAbility* OwningAbility; // 0x478(0x08)
	bool bDestroyOnConfirmation; // 0x480(0x01)
	char UnknownData_481[0x7]; // 0x481(0x07)
	struct AActor* SourceActor; // 0x488(0x08)
	struct FWorldReticleParameters ReticleParams; // 0x490(0x0c)
	char UnknownData_49C[0x4]; // 0x49c(0x04)
	struct UClass* ReticleClass; // 0x4a0(0x08)
	struct FGameplayTargetDataFilterHandle Filter; // 0x4a8(0x18)
	bool bDebug; // 0x4c0(0x01)
	char UnknownData_4C1[0x1f]; // 0x4c1(0x1f)

	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // Native|Public // @ game+0x4e36590
	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // Native|Public // @ game+0x4e35d20
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0x90 (Inherited: 0x68)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastDelegate TimeElapsed; // 0x68(0x10)
	char UnknownData_78[0x18]; // 0x78(0x18)

	struct UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(struct UObject** WorldContextObject, struct AGameplayAbilityTargetActor** TargetActor, struct FName* TaskInstanceName, float* Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e42e30
	struct UAbilityTask_VisualizeTargeting* VisualizeTargeting(struct UObject** WorldContextObject, struct UClass** Class, struct FName* TaskInstanceName, float* Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e42d00
	void FinishSpawningActor(struct UObject** WorldContextObject, struct AGameplayAbilityTargetActor** SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x4e37fa0
	bool BeginSpawningActor(struct UObject** WorldContextObject, struct UClass** Class, struct AGameplayAbilityTargetActor** SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4e35a30
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x98 (Inherited: 0x68)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastDelegate OnActivate; // 0x68(0x10)
	char UnknownData_78[0x20]; // 0x78(0x20)

	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(struct UObject** WorldContextObject, struct FGameplayTag* WithTag, struct FGameplayTag* WithoutTag, bool* IncludeTriggeredAbilities, bool* TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e431a0
	void OnAbilityActivate(struct UGameplayAbility** ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate // Final|Native|Public // @ game+0x4e3dcb0
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0x98 (Inherited: 0x68)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastDelegate OnCommit; // 0x68(0x10)
	char UnknownData_78[0x20]; // 0x78(0x20)

	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(struct UObject** WorldContextObject, struct FGameplayTag* WithTag, struct FGameplayTag* WithoutTage, bool* TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e43330
	void OnAbilityCommit(struct UGameplayAbility** ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit // Final|Native|Public // @ game+0x4e3dd30
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xa8 (Inherited: 0x68)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x68(0x10)
	char UnknownData_78[0x30]; // 0x78(0x30)

	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(struct UObject** WorldContextObject, struct FGameplayAttribute* InAttribute, struct FGameplayTag* InWithTag, struct FGameplayTag* InWithoutTag, char* InComparisonType, float* InComparisonValue, bool* TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e435f0
	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChange(struct UObject** WorldContextObject, struct FGameplayAttribute* Attribute, struct FGameplayTag* WithSrcTag, struct FGameplayTag* WithoutSrcTag, bool* TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e43470
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x80 (Inherited: 0x68)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastDelegate OnCancel; // 0x68(0x10)
	char UnknownData_78[0x8]; // 0x78(0x08)

	struct UAbilityTask_WaitCancel* WaitCancel(struct UObject** WorldContextObject); // Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e42f60
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x4e3ea40
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback // Final|Native|Public // @ game+0x4e3e360
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0x88 (Inherited: 0x68)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x68(0x10)
	char UnknownData_78[0x10]; // 0x78(0x10)

	struct UAbilityTask_WaitConfirm* WaitConfirm(struct UObject** WorldContextObject); // Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e42fe0
	void OnConfirmCallback(struct UGameplayAbility** Ability); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // Final|Native|Public // @ game+0x4e3e3a0
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0x90 (Inherited: 0x68)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x68(0x10)
	struct FMulticastDelegate OnCancel; // 0x78(0x10)
	char UnknownData_88[0x8]; // 0x88(0x08)

	struct UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(struct UObject** WorldContextObject); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e43060
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // Final|Native|Public // @ game+0x4e3ea80
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x4e3ea60
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // Final|Native|Public // @ game+0x4e3e420
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback // Final|Native|Public // @ game+0x4e3e380
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x80 (Inherited: 0x68)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastDelegate OnFinish; // 0x68(0x10)
	char UnknownData_78[0x8]; // 0x78(0x08)

	struct UAbilityTask_WaitDelay* WaitDelay(struct UObject** WorldContextObject, float* Time); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e430e0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x130 (Inherited: 0x68)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char UnknownData_68[0xc8]; // 0x68(0xc8)

	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent** Target, struct FGameplayEffectSpec* SpecApplied, struct FActiveGameplayEffectHandle* ActiveHandle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback // Final|Native|Public|HasOutParms // @ game+0x4e3e210
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x148 (Inherited: 0x130)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x130(0x10)
	char UnknownData_140[0x8]; // 0x140(0x08)

	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(struct UObject** WorldContextObject, struct FGameplayTargetDataFilterHandle* SourceFilter, struct FGameplayTagRequirements* SourceTagRequirements, struct FGameplayTagRequirements* TargetTagRequirements, bool* TriggerOnce, struct AActor** OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e43940
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x148 (Inherited: 0x130)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x130(0x10)
	char UnknownData_140[0x8]; // 0x140(0x08)

	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(struct UObject** WorldContextObject, struct FGameplayTargetDataFilterHandle* TargetFilter, struct FGameplayTagRequirements* SourceTagRequirements, struct FGameplayTagRequirements* TargetTagRequirements, bool* TriggerOnce, struct AActor** OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e43d50
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0x98 (Inherited: 0x68)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastDelegate OnRemoved; // 0x68(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x78(0x10)
	char UnknownData_88[0x10]; // 0x88(0x10)

	struct UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(struct UObject** WorldContextObject, struct FActiveGameplayEffectHandle* Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e437f0
	void OnGameplayEffectRemoved(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved // Final|Native|Public // @ game+0x4e3e8a0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0x88 (Inherited: 0x68)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char UnknownData_68[0x20]; // 0x68(0x20)

	void GameplayTagCallback(struct FGameplayTag* Tag, int32_t* NewCount); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback // Native|Public // @ game+0x4e383c0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0x98 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Added; // 0x88(0x10)

	struct UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(struct UObject** WorldContextObject, struct FGameplayTag* Tag, struct AActor** OptionalExternalTarget, bool* OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e44160
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0x98 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Removed; // 0x88(0x10)

	struct UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(struct UObject** WorldContextObject, struct FGameplayTag* Tag, struct AActor** OptionalExternalTarget, bool* OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e442a0
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0x88 (Inherited: 0x68)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastDelegate OnPress; // 0x68(0x10)
	char UnknownData_78[0x10]; // 0x78(0x10)

	struct UAbilityTask_WaitInputPress* WaitInputPress(struct UObject** WorldContextObject, bool* bTestAlreadyPressed); // Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e443e0
	void OnPressCallback(); // Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback // Final|Native|Public // @ game+0x4e3ee70
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0x88 (Inherited: 0x68)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastDelegate OnRelease; // 0x68(0x10)
	char UnknownData_78[0x10]; // 0x78(0x10)

	struct UAbilityTask_WaitInputRelease* WaitInputRelease(struct UObject** WorldContextObject, bool* bTestAlreadyReleased); // Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e444a0
	void OnReleaseCallback(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback // Final|Native|Public // @ game+0x4e3ee90
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0x88 (Inherited: 0x68)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x68(0x10)
	char UnknownData_78[0x10]; // 0x78(0x10)

	void OnMovementModeChange(struct ACharacter** Character, char* PrevMovementMode, char* PreviousCustomMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // Final|Native|Public // @ game+0x4e3eb90
	struct UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(struct UObject** WorldContextObject, char* NewMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e36800
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x78 (Inherited: 0x68)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastDelegate OnOverlap; // 0x68(0x10)

	struct UAbilityTask_WaitOverlap* WaitForOverlap(struct UObject* WorldContextObject); // Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e438c0
	void OnOverlapCallback(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback // Final|Native|Public|HasOutParms // @ game+0x4e3ec90
	void OnHitCallback(struct AActor** OtherActor, struct UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // Final|Native|Public|HasOutParms|HasDefaults // @ game+0x4e3e8c0
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xa8 (Inherited: 0x68)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastDelegate ValidData; // 0x68(0x10)
	struct FMulticastDelegate Cancelled; // 0x78(0x10)
	char UnknownData_88[0x20]; // 0x88(0x20)

	struct UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(struct UObject* WorldContextObject, struct FName TaskInstanceName, char ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e44760
	struct UAbilityTask_WaitTargetData* WaitTargetData(struct UObject* WorldContextObject, struct FName TaskInstanceName, char ConfirmationType, struct UClass* Class); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData // Final|Native|Static|Public|BlueprintCallable // @ game+0x4e44620
	void OnTargetDataReplicatedCancelledCallback(); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback // Final|Native|Public // @ game+0x4e3f9d0
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle Data, struct FGameplayTag ActivationTag); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback // Final|Native|Public // @ game+0x4e3f7b0
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback // Final|Native|Public // @ game+0x4e3f5c0
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback // Final|Native|Public // @ game+0x4e3f3d0
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x4e38060
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct UClass* Class, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4e35b40
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0x90 (Inherited: 0x68)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastDelegate OnVelocityChage; // 0x68(0x10)
	struct UMovementComponent* CachedMovementComponent; // 0x78(0x08)
	char UnknownData_80[0x10]; // 0x80(0x10)

	struct UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(struct UObject* WorldContextObject, struct FVector Direction, float MinimumMagnitude); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x4e368c0
};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x70 (Inherited: 0x30)
struct UAbilitySystemTestAttributeSet : UAttributeSet {
	float MaxHealth; // 0x30(0x04)
	float Health; // 0x34(0x04)
	float Mana; // 0x38(0x04)
	float MaxMana; // 0x3c(0x04)
	float Damage; // 0x40(0x04)
	float SpellDamage; // 0x44(0x04)
	float PhysicalDamage; // 0x48(0x04)
	float CritChance; // 0x4c(0x04)
	float CritMultiplier; // 0x50(0x04)
	float ArmorDamageReduction; // 0x54(0x04)
	float DodgeChance; // 0x58(0x04)
	float LifeSteal; // 0x5c(0x04)
	float Strength; // 0x60(0x04)
	float StackingAttribute1; // 0x64(0x04)
	float StackingAttribute2; // 0x68(0x04)
	float NoStackAttribute; // 0x6c(0x04)
};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x448 (Inherited: 0x448)
struct UGameplayAbility_CharacterJump : UGameplayAbility {
};

// Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x480 (Inherited: 0x448)
struct UGameplayAbility_Montage : UGameplayAbility {
	struct UAnimMontage* MontageToPlay; // 0x448(0x08)
	float PlayRate; // 0x450(0x04)
	struct FName SectionName; // 0x454(0x08)
	char UnknownData_45C[0x4]; // 0x45c(0x04)
	struct TArray<struct UClass*> GameplayEffectClassesWhileAnimating; // 0x460(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x470(0x10)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xd8 (Inherited: 0xd8)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilityBlueprintGeneratedClass
// Size: 0x228 (Inherited: 0x228)
struct UGameplayAbilityBlueprintGeneratedClass : UBlueprintGeneratedClass {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x38 (Inherited: 0x28)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct FGameplayAbilityBindInfo> Abilities; // 0x28(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x4e0 (Inherited: 0x4e0)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x4d8(0x04)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x4f0 (Inherited: 0x4e0)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x4d8(0x04)
	struct FCollisionProfileName TraceProfile; // 0x4dc(0x08)
	bool bTraceAffectsAimPitch; // 0x4e4(0x01)
	char UnknownData_4ED[0x3]; // 0x4ed(0x03)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x510 (Inherited: 0x4f0)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x4f0(0x04)
	float CollisionHeight; // 0x4f4(0x04)
	char UnknownData_4F8[0x18]; // 0x4f8(0x18)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x530 (Inherited: 0x510)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	struct UClass* PlacedActorClass; // 0x510(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x518(0x08)
	char UnknownData_520[0x10]; // 0x520(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x4f0 (Inherited: 0x4f0)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x400 (Inherited: 0x3e8)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x3e8(0x08)
	struct TArray<struct UActorComponent*> VisualizationComponents; // 0x3f0(0x10)
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x180 (Inherited: 0x28)
struct UGameplayCueManager : UDataAsset {
	struct UGameplayCueSet* GlobalCueSet; // 0x28(0x08)
	struct UObjectLibrary* GameplayCueNotifyActorObjectLibrary; // 0x30(0x08)
	struct UObjectLibrary* GameplayCueNotifyStaticObjectLibrary; // 0x38(0x08)
	struct FStreamableManager StreamableManager; // 0x40(0xc0)
	char UnknownData_100[0x60]; // 0x100(0x60)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // 0x160(0x10)
	int32_t GameplayCueSendContextCount; // 0x170(0x04)
	char UnknownData_174[0xc]; // 0x174(0x0c)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x3e8 (Inherited: 0x3c8)
struct AGameplayCueNotify_Actor : AActor {
	struct FGameplayTag GameplayCueTag; // 0x3c8(0x08)
	struct FName GameplayCueName; // 0x3d0(0x08)
	bool bAutoDestroyOnRemove; // 0x3d8(0x01)
	char UnknownData_3D9[0x3]; // 0x3d9(0x03)
	float AutoDestroyDelay; // 0x3dc(0x04)
	bool IsOverride; // 0x3e0(0x01)
	bool bUniqueInstancePerInstigator; // 0x3e1(0x01)
	bool bUniqueInstancePerSourceObject; // 0x3e2(0x01)
	char UnknownData_3E3[0x5]; // 0x3e3(0x05)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // Native|Event|Public|BlueprintEvent // @ game+0x4e448a0
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // Native|Event|Public|BlueprintEvent // @ game+0x4e3eeb0
	void OnOwnerDestroyed(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // Native|Public // @ game+0x4e3ee50
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // Native|Event|Public|BlueprintEvent // @ game+0x4e3e440
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // Native|Event|Public|BlueprintEvent // @ game+0x4e3ddb0
	void K2_HandleGameplayCue(struct AActor* MyTarget, char EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // Event|Public|BlueprintEvent // @ game+0x1e25660
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x40 (Inherited: 0x28)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x28(0x08)
	struct FName GameplayCueName; // 0x30(0x08)
	bool IsOverride; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x4e44ad0
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x4e3f0e0
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x4e3e670
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x4e3dfe0
	void K2_HandleGameplayCue(struct AActor* MyTarget, char EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // Event|Public|BlueprintEvent|Const // @ game+0x1e25660
};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x50 (Inherited: 0x40)
struct UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x40(0x08)
	struct UParticleSystem* ParticleSystem; // 0x48(0x08)
};

// Class GameplayAbilities.GameplayCueSet
// Size: 0x88 (Inherited: 0x28)
struct UGameplayCueSet : UDataAsset {
	struct TArray<struct FGameplayCueNotifyData> GameplayCueData; // 0x28(0x10)
	char UnknownData_38[0x50]; // 0x38(0x50)
};

// Class GameplayAbilities.GameplayEffectTemplate
// Size: 0x578 (Inherited: 0x578)
struct UGameplayEffectTemplate : UGameplayEffect {
};

// Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x38 (Inherited: 0x28)
struct UGameplayEffectCalculation : UObject {
	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // 0x28(0x10)
};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayEffectExecutionCalculation : UGameplayEffectCalculation {
	bool bRequiresPassedInTags; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)

	void Execute(struct FGameplayEffectCustomExecutionParameters ExecutionParams, struct FGameplayEffectCustomExecutionOutput OutExecutionOutput); // Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x4e37860
};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x38 (Inherited: 0x38)
struct UGameplayModMagnitudeCalculation : UGameplayEffectCalculation {

	float CalculateBaseMagnitude(struct FGameplayEffectSpec Spec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x4e35c50
};

// Class GameplayAbilities.GameplayEffectExtension
// Size: 0x48 (Inherited: 0x28)
struct UGameplayEffectExtension : UObject {
	struct TArray<struct FGameplayAttribute> RelevantSourceAttributes; // 0x28(0x10)
	struct TArray<struct FGameplayAttribute> RelevantTargetAttributes; // 0x38(0x10)
};

// Class GameplayAbilities.GameplayEffectExtension_LifestealTest
// Size: 0x50 (Inherited: 0x48)
struct UGameplayEffectExtension_LifestealTest : UGameplayEffectExtension {
	struct UGameplayEffect* HealthRestoreGameplayEffect; // 0x48(0x08)
};

// Class GameplayAbilities.GameplayEffectExtension_ShieldTest
// Size: 0x50 (Inherited: 0x48)
struct UGameplayEffectExtension_ShieldTest : UGameplayEffectExtension {
	struct UGameplayEffect* ShieldRemoveGameplayEffect; // 0x48(0x08)
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x60 (Inherited: 0x28)
struct UGameplayEffectUIData_TextOnly : UGameplayEffectUIData {
	struct FText Description; // 0x28(0x38)
};

// Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x88 (Inherited: 0x28)
struct UGameplayTagReponseTable : UDataAsset {
	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // 0x28(0x10)
	char UnknownData_38[0x50]; // 0x38(0x50)

	void TagResponseEvent(struct FGameplayTag Tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t Idx); // Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent // Final|Native|Protected // @ game+0x4e42100
};

// Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x28 (Inherited: 0x28)
struct UTickableAttributeSetInterface : UInterface {
};

