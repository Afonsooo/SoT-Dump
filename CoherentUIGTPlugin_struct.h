// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8_t {
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
	None,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t {
	None,
	None,
	None,
	None,
	None,
};

// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8_t {
	ResetState,
	UseCurrentState,
	UseStateBeforeReset,
	EGamepadBehaviourOnFocusLost_MAX,
};

// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8_t {
	GTInputLineTrace_Single,
	GTInputLineTrace_Multi,
	GTInputLineTrace_MAX,
};

// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8_t {
	RaycastQuality_Fast,
	RaycastQuality_Balanced,
	RaycastQuality_Accurate,
	RaycastQuality_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8_t {
	MSAA_1x,
	MSAA_2x,
	MSAA_4x,
	MSAA_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t {
	None,
	None,
	None,
	None,
	None,
	None,
	None,
};

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTLoadingScreenSettings
// Size: 0x18 (Inherited: 0x00)
struct FCoherentUIGTLoadingScreenSettings {
	float MinimumLoadingScreenDisplayTime; // 0x00(0x04)
	bool bAutoCompleteWhenLoadingCompletes; // 0x04(0x01)
	bool bWaitForManualStop; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTViewInfo
// Size: 0x14 (Inherited: 0x00)
struct FCoherentUIGTViewInfo {
	int32_t Width; // 0x00(0x04)
	int32_t Height; // 0x04(0x04)
	bool IsTransparent; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float ClickThroughAlphaThreshold; // 0x0c(0x04)
	float AnimationFrameDefer; // 0x10(0x04)
};

