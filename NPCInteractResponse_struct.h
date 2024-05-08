// Enum NPCInteractResponse.EInteractResponseTypeID
enum class EInteractResponseTypeID : uint8_t {
	None,
	None,
	None,
	None,
	None,
};

// ScriptStruct NPCInteractResponse.NPCInteractResponseStruct
// Size: 0x10 (Inherited: 0x00)
struct FNPCInteractResponseStruct {
	struct UClass* InteractResponseType; // 0x00(0x08)
	struct UAnimSequence* StateAnim; // 0x08(0x08)
};

