// Class BoneCaller.BoneCallerCannonProjectile
// Size: 0x6d8 (Inherited: 0x6d8)
struct ABoneCallerCannonProjectile : ACannonProjectile {
};

// Class BoneCaller.BoneCallerExplosionListenerComponent
// Size: 0x148 (Inherited: 0xc8)
struct UBoneCallerExplosionListenerComponent : UActorComponent {
	char UnknownData_C8[0x80]; // 0xc8(0x80)
};

// Class BoneCaller.BoneCallerOwnershipComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UBoneCallerOwnershipComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct FGuid OwningCrewID; // 0xd0(0x10)
};

// Class BoneCaller.BoneCallerServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UBoneCallerServiceInterface : UInterface {
};

// Class BoneCaller.BoneCallerService
// Size: 0x5a8 (Inherited: 0x3c8)
struct ABoneCallerService : AActor {
	char UnknownData_3C8[0x168]; // 0x3c8(0x168)
	struct UBoneCallerServiceParams* ServiceParams; // 0x530(0x08)
	struct TMap<struct AActor*, struct FPlayerBoneCallerData> PlayerBoneCallerData; // 0x538(0x50)
	char UnknownData_588[0x20]; // 0x588(0x20)
};

// Class BoneCaller.BoneCallerServiceParams
// Size: 0x48 (Inherited: 0x28)
struct UBoneCallerServiceParams : UDataAsset {
	struct TArray<struct FBoneCallerImpactIdToSpawner> IDToSpawnerData; // 0x28(0x10)
	struct UNamedAIDataAsset* NamedAIDataAsset; // 0x38(0x08)
	char ReplacedDeathType; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

