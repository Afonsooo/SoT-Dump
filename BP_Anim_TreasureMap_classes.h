// AnimBlueprintGeneratedClass BP_Anim_TreasureMap.BP_Anim_TreasureMap_C
// Size: 0x771 (Inherited: 0x670)
struct UBP_Anim_TreasureMap_C : UWieldableItemAnimationInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x670(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_667F3EDC42EB32D9D7A19E894D19591E; // 0x678(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_040CD025499C9070540FEB8FA7C91FFA; // 0x6c0(0x60)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_BA293D36463FC656319A29828C9B119D; // 0x720(0x50)
	char ObjectAnimationState; // 0x770(0x01)

	void OnUseStarted(struct UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals); // Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.OnUseStarted // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e25660
	void OnUseStopped(struct UClass** InputID); // Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.OnUseStopped // Event|Public|BlueprintEvent // @ game+0x1e25660
	void ExecuteUbergraph_BP_Anim_TreasureMap(int32_t* EntryPoint); // Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.ExecuteUbergraph_BP_Anim_TreasureMap // HasDefaults // @ game+0x1e25660
};

