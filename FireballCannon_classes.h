// Class FireballCannon.FireballCannonActivationLever
// Size: 0x5b0 (Inherited: 0x400)
struct AFireballCannonActivationLever : AInteractableBase {
	struct USceneComponent* Root; // 0x400(0x08)
	struct USceneComponent* Pivot; // 0x408(0x08)
	struct FText CanActivateDisplayText; // 0x410(0x38)
	struct FText CannotActivateDisplayText; // 0x448(0x38)
	struct UClass* NotificationStartInputID; // 0x480(0x08)
	struct UClass* NotificationReleaseInputID; // 0x488(0x08)
	char DisplayPriority; // 0x490(0x01)
	char UnknownData_491[0x3]; // 0x491(0x03)
	float HoldTime; // 0x494(0x04)
	struct FRuntimeFloatCurve Curve; // 0x498(0x80)
	char UnknownData_518[0x8]; // 0x518(0x08)
	struct FTransform LeverStartingTransform; // 0x520(0x30)
	struct FTransform LeverEndingTransform; // 0x550(0x30)
	char LeverActivationState; // 0x580(0x01)
	char UnknownData_581[0x3]; // 0x581(0x03)
	float ReplicatedAnimationTime; // 0x584(0x04)
	char UnknownData_588[0x28]; // 0x588(0x28)

	void OnRep_LeverActivationState(); // Function FireballCannon.FireballCannonActivationLever.OnRep_LeverActivationState // Final|Native|Private // @ game+0x1a0bf40
};

// Class FireballCannon.FireballCannonInterface
// Size: 0x28 (Inherited: 0x28)
struct UFireballCannonInterface : UInterface {

	float GetFireballCannonCooldownTime(); // Function FireballCannon.FireballCannonInterface.GetFireballCannonCooldownTime // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x1a0be20
	bool CanFireFireballCannon(); // Function FireballCannon.FireballCannonInterface.CanFireFireballCannon // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x1a0bd90
	void BeginFiring(); // Function FireballCannon.FireballCannonInterface.BeginFiring // Native|Public|BlueprintCallable // @ game+0x1a0bd40
};

// Class FireballCannon.FireballCannonComponent
// Size: 0x1d0 (Inherited: 0xc8)
struct UFireballCannonComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct FFireballCannonProjectileFirePoint> FireballCannonProjectileFirePoints; // 0xd0(0x10)
	struct UClass* LaunchableProjectileClass; // 0xe0(0x08)
	float ProjectileLaunchVelocity; // 0xe8(0x04)
	float FireballCannonStartUpTime; // 0xec(0x04)
	float FireballCannonCooldownTime; // 0xf0(0x04)
	char UnknownData_F4[0x4]; // 0xf4(0x04)
	struct TArray<struct ALaunchableProjectile*> ActiveProjectiles; // 0xf8(0x10)
	char FireballCannonFiringState; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
	struct TMap<struct AActor*, struct FActorInsideFlameInformation> ActorsInsideFlame; // 0x110(0x50)
	char FireRadiusCollisionChannel; // 0x160(0x01)
	struct FCollisionResponseContainer FireRadiusCollisionResponse; // 0x161(0x20)
	char UnknownData_181[0x7]; // 0x181(0x07)
	struct UFireGridCellSelectionParamsDataAsset* FlamethrowerFirePropagationIgnitionParams; // 0x188(0x08)
	struct FStatus FlamethrowerCollisionStatusEffect; // 0x190(0x18)
	float FlameCollisionRadius; // 0x1a8(0x04)
	float TimeUntilApplyStatusEffect; // 0x1ac(0x04)
	float TimeUntilIgniteFirePropagation; // 0x1b0(0x04)
	float TimeToConsiderActorOutsideFlame; // 0x1b4(0x04)
	float FlamethrowerCollisionDamageAmount; // 0x1b8(0x04)
	float DamagePerSecondInsideFlame; // 0x1bc(0x04)
	struct UClass* DamagerTypeClass; // 0x1c0(0x08)
	char HealthChangedReason; // 0x1c8(0x01)
	char UnknownData_1C9[0x7]; // 0x1c9(0x07)

	void Multicast_FireProjectile(struct FVector ProjectileLaunchLocation, struct FRotator ProjectileLaunchRotation); // Function FireballCannon.FireballCannonComponent.Multicast_FireProjectile // Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults // @ game+0x1a0be90
	float GetFireballCannonCooldownTime(); // Function FireballCannon.FireballCannonComponent.GetFireballCannonCooldownTime // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x1a0be50
	void EndCooldown(); // Function FireballCannon.FireballCannonComponent.EndCooldown // Final|Native|Private // @ game+0x1a0be00
	bool CanFireFireballCannon(); // Function FireballCannon.FireballCannonComponent.CanFireFireballCannon // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x1a0bdc0
	void BeginFiring(); // Function FireballCannon.FireballCannonComponent.BeginFiring // Native|Public|BlueprintCallable // @ game+0x1a0bd60
};

