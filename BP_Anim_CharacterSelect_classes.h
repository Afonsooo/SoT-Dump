// AnimBlueprintGeneratedClass BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C
// Size: 0x655a (Inherited: 0x5f00)
struct UBP_Anim_CharacterSelect_C : UThirdPersonAnimationInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f00(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_BA91E2B046589C64ABB3C4B5BE37EC7B; // 0x5f08(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_825AF7F342BA122C410073BB53F7B2B6; // 0x5f50(0x60)
	struct FAnimNode_HIKSetProperty AnimGraphNode_HIKSetProperty_4604515E42DFC0F4924E188A084526D1; // 0x5fb0(0x50)
	struct FAnimNode_HIKSetProperty AnimGraphNode_HIKSetProperty_0CE9150E4A30CA1A847B44BC7F2741F3; // 0x6000(0x50)
	struct FAnimNode_HIKSetProperty AnimGraphNode_HIKSetProperty_EA6626534F1ED0DA4F1BB8828E8B6CAE; // 0x6050(0x50)
	struct FAnimNode_HIKSetProperty AnimGraphNode_HIKSetProperty_1F623FE647338998F9EE7CBDBB8482F4; // 0x60a0(0x50)
	struct FAnimNode_HIKSetProperty AnimGraphNode_HIKSetProperty_5BA33F0B4645CABA9462E8BAA46CB848; // 0x60f0(0x50)
	struct FAnimNode_HIKSetProperty AnimGraphNode_HIKSetProperty_8FC28E084F5D06B070B8288538ED49C5; // 0x6140(0x50)
	struct FAnimNode_HIKSetProperty AnimGraphNode_HIKSetProperty_072A4898420FB56E779F299322CD5C89; // 0x6190(0x50)
	struct FAnimNode_HIKSolve AnimGraphNode_HIKSolve_028FECB44A1A59FD42DE59B062889CCC; // 0x61e0(0x80)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_FB2C5171490F4C8D7764D4B0E0F1823B; // 0x6260(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_FE35BD5549FB1F4A9B701DA3AAB144D5; // 0x62a8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DBF34E9449BF8343E7B3A5883F6C2E2B; // 0x62f0(0x60)
	struct FAnimNode_HIKReach AnimGraphNode_HIKReach_0D88BFB0467B089C1B1D3BA07601E4AC; // 0x6350(0x80)
	struct FAnimNode_HIKReach AnimGraphNode_HIKReach_654DE6BC4364BCDD4E8F239EF6E25C82; // 0x63d0(0x80)
	struct FAnimNode_HIKReach AnimGraphNode_HIKReach_B4AE38804A30A76C481C54AE8393F6E4; // 0x6450(0x80)
	struct FAnimNode_HIKReach AnimGraphNode_HIKReach_695B73B24FFE4232EBB796AB28A56B6B; // 0x64d0(0x80)
	struct UAnimSequenceBase* FallBackAnimation; // 0x6550(0x08)
	bool Selected; // 0x6558(0x01)
	bool BeginFade; // 0x6559(0x01)

	void BlueprintInitializeAnimation(); // Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x1e25660
	void AnimNotify_SelectedCameraZoom(); // Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_SelectedCameraZoom // BlueprintCallable|BlueprintEvent // @ game+0x1e25660
	void AnimNotify_BeginFade(); // Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_BeginFade // BlueprintCallable|BlueprintEvent // @ game+0x1e25660
	void ExecuteUbergraph_BP_Anim_CharacterSelect(int32_t EntryPoint); // Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.ExecuteUbergraph_BP_Anim_CharacterSelect //  // @ game+0x1e25660
};

