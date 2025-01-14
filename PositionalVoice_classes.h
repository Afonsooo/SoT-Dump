// Class PositionalVoice.VoiceChatEmitterInterface
// Size: 0x28 (Inherited: 0x28)
struct UVoiceChatEmitterInterface : UInterface {

	struct FVector GetVoiceLocation(); // Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x40cc960
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter EmitterProxy); // Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy // Native|Public|HasOutParms|BlueprintCallable // @ game+0x40cc820
	float GetVoiceAttenuationScaler(TScriptInterface<struct UVoiceChatEmitterInterface> RelativeToThisEmitter); // Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x40cc770
};

// Class PositionalVoice.VoiceChatRendererInterface
// Size: 0x28 (Inherited: 0x28)
struct UVoiceChatRendererInterface : UInterface {
};

// Class PositionalVoice.VoiceChatRenderer
// Size: 0x1c0 (Inherited: 0x28)
struct UVoiceChatRenderer : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct UWwiseEvent* AttenuatedVoiceEvent; // 0x38(0x08)
	struct UWwiseEvent* AttenuatedAndSpatialisedVoiceEvent; // 0x40(0x08)
	struct UWwiseEvent* UnattenuatedVoiceEvent; // 0x48(0x08)
	int32_t PreBufferInMilliseconds; // 0x50(0x04)
	int32_t ChatRoutingListenerIndex; // 0x54(0x04)
	float EmitterHoldInSeconds; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FString UnattenuatedWwiseBusName; // 0x60(0x10)
	struct URareAudioHardwareDeviceService* HardwareDeviceService; // 0x70(0x08)
	char UnknownData_78[0x148]; // 0x78(0x148)
};

// Class PositionalVoice.VoiceChatRendererRetreivalInterface
// Size: 0x28 (Inherited: 0x28)
struct UVoiceChatRendererRetreivalInterface : UInterface {
};

