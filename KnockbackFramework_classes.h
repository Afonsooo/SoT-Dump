// Class KnockbackFramework.KnockbackInterface
// Size: 0x28 (Inherited: 0x28)
struct UKnockbackInterface : UInterface {
};

// Class KnockbackFramework.KnockbackColliderComponent
// Size: 0x680 (Inherited: 0x600)
struct UKnockbackColliderComponent : UBoxComponent {
	struct FCollisionProfileName SolidCollisionProfile; // 0x5f8(0x08)
	struct FCollisionProfileName KnockbackTraceProfile; // 0x600(0x08)
	char KnockbackType; // 0x608(0x01)
	struct FKnockBackInfo KnockbackParams; // 0x60c(0x50)
	struct AActor* ActorToTarget; // 0x65c(0x08)
	struct UClass* KnockbackDamageType; // 0x668(0x08)
	float KnockbackInterval; // 0x670(0x04)
	char UnknownData_675[0x3]; // 0x675(0x03)
	char SolidState; // 0x678(0x01)
	char UnknownData_679[0x7]; // 0x679(0x07)

	void OnRep_SolidState(); // Function KnockbackFramework.KnockbackColliderComponent.OnRep_SolidState // Final|Native|Private // @ game+0x442d240
};

