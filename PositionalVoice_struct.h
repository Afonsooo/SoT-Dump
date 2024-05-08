// Enum PositionalVoice.ETalkingStatus
enum class ETalkingStatus : uint8_t {
	Silent,
	Talking,
	ETalkingStatus_MAX,
};

// Enum PositionalVoice.EVoiceChatState
enum class EVoiceChatState : uint8_t {
	None,
	None,
	None,
	None,
	None,
};

// ScriptStruct PositionalVoice.TalkingIndicatorUpdateEvent
// Size: 0x28 (Inherited: 0x00)
struct FTalkingIndicatorUpdateEvent {
	struct FTalkingIndicatorState TalkingIndicatorState; // 0x00(0x28)
};

// ScriptStruct PositionalVoice.TalkingIndicatorState
// Size: 0x28 (Inherited: 0x00)
struct FTalkingIndicatorState {
	struct FString GamerTag; // 0x00(0x10)
	char TalkingStatus; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct FString Xuid; // 0x18(0x10)
};

