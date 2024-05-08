// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t {
	Touch1,
	Touch2,
	Touch3,
	Touch4,
	Touch5,
	Touch6,
	Touch7,
	Touch8,
	Touch9,
	Touch10,
	ETouchIndex_MAX,
};

// Enum InputCore.ETouchType
enum class ETouchType : uint8_t {
	None,
	None,
	None,
	None,
	None,
	None,
};

// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t {
	None,
	None,
	None,
	None,
};

// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t {
	None,
	None,
	None,
};

// ScriptStruct InputCore.Key
// Size: 0x20 (Inherited: 0x00)
struct FKey {
	struct FName KeyName; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

