// ScriptStruct GenericStatusVFX.StatusAudioChangedEvent
// Size: 0x20 (Inherited: 0x00)
struct FStatusAudioChangedEvent {
	struct FStatus StatusApplied; // 0x00(0x18)
	bool IsActive; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct GenericStatusVFX.StatusVFXChangedEvent
// Size: 0x01 (Inherited: 0x00)
struct FStatusVFXChangedEvent {
	bool HasSource; // 0x00(0x01)
};

