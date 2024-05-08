// Enum FireballCannon.EFireballCannonActivationLeverState
enum class EFireballCannonActivationLeverState : uint8_t {
	None,
	None,
	None,
	None,
	None,
};

// Enum FireballCannon.EFireballCannonFiringState
enum class EFireballCannonFiringState : uint8_t {
	None,
	None,
	None,
	None,
	None,
	None,
};

// ScriptStruct FireballCannon.FireballCannonProjectileFirePoint
// Size: 0x1c (Inherited: 0x00)
struct FFireballCannonProjectileFirePoint {
	struct FVector FireFromLocation; // 0x00(0x0c)
	struct FRotator FireFromRotation; // 0x0c(0x0c)
	float FireDelay; // 0x18(0x04)
};

// ScriptStruct FireballCannon.EventFireballCannonHasStartedToCooldown
// Size: 0x01 (Inherited: 0x00)
struct FEventFireballCannonHasStartedToCooldown {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FireballCannon.EventFireballCannonIsReadyToFire
// Size: 0x01 (Inherited: 0x00)
struct FEventFireballCannonIsReadyToFire {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FireballCannon.EventShootFireballCannon
// Size: 0x01 (Inherited: 0x00)
struct FEventShootFireballCannon {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

