// Enum LightExposureFramework.ELightType
enum class ELightType : uint8_t {
	None,
	None,
	None,
};

// ScriptStruct LightExposureFramework.LightBeamParams
// Size: 0x24 (Inherited: 0x00)
struct FLightBeamParams {
	struct FVector ApexWorldPosition; // 0x00(0x0c)
	struct FVector ForwardVector; // 0x0c(0x0c)
	float Length; // 0x18(0x04)
	float CosTheta; // 0x1c(0x04)
	char Type; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
};

