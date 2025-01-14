// Enum PrioritisedPrompts.EPromptEvaluatedType
enum class EPromptEvaluatedType : uint8_t {
	None,
	None,
	None,
	None,
};

// Enum PrioritisedPrompts.EPromptStartStop
enum class EPromptStartStop : uint8_t {
	None,
	None,
	None,
};

// ScriptStruct PrioritisedPrompts.PrioritisedPromptWithHandle
// Size: 0x70 (Inherited: 0x00)
struct FPrioritisedPromptWithHandle {
	struct FPrioritisedPromptHandle PromptHandle; // 0x00(0x10)
	struct FPrioritisedPrompt Prompt; // 0x10(0x60)
};

// ScriptStruct PrioritisedPrompts.PrioritisedPrompt
// Size: 0x60 (Inherited: 0x00)
struct FPrioritisedPrompt {
	bool UsePopupMessageDescForText; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FText Message; // 0x08(0x38)
	struct FString Key; // 0x40(0x10)
	struct UPopUpMessageDesc* PopUpMessageDesc; // 0x50(0x08)
	char BasePriority; // 0x58(0x01)
	char MenuNavigation; // 0x59(0x01)
	char UnknownData_5A[0x6]; // 0x5a(0x06)
};

// ScriptStruct PrioritisedPrompts.PrioritisedPromptHandle
// Size: 0x10 (Inherited: 0x00)
struct FPrioritisedPromptHandle {
	struct FGuid Id; // 0x00(0x10)
};

// ScriptStruct PrioritisedPrompts.PromptEvaluation
// Size: 0x78 (Inherited: 0x00)
struct FPromptEvaluation {
	char PromptType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FPrioritisedPromptWithHandle Prompt; // 0x08(0x70)
};

// ScriptStruct PrioritisedPrompts.PermanentPromptNetworkEvent
// Size: 0x88 (Inherited: 0x10)
struct FPermanentPromptNetworkEvent : FNetworkEventStruct {
	struct FPrioritisedPromptWithHandle Prompt; // 0x10(0x70)
	char StartOrStop; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// ScriptStruct PrioritisedPrompts.PromptsCounterIncrementEvent
// Size: 0x08 (Inherited: 0x00)
struct FPromptsCounterIncrementEvent {
	struct UClass* AccessKey; // 0x00(0x08)
};

// ScriptStruct PrioritisedPrompts.PromptsServiceSetupEvent
// Size: 0x01 (Inherited: 0x00)
struct FPromptsServiceSetupEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct PrioritisedPrompts.PlayerPromptTelemetryEvent
// Size: 0x20 (Inherited: 0x00)
struct FPlayerPromptTelemetryEvent {
	struct FString Message; // 0x00(0x10)
	struct FString Key; // 0x10(0x10)
};

