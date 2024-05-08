// Class Repair.RepairTypeId
// Size: 0x60 (Inherited: 0x28)
struct URepairTypeId : UObject {
	struct FText DisplayName; // 0x28(0x38)
};

// Class Repair.RepairableInterface
// Size: 0x28 (Inherited: 0x28)
struct URepairableInterface : UInterface {

	void HandleDestroy(); // Function Repair.RepairableInterface.HandleDestroy // Native|Public // @ game+0x4478860
	float GetUndoRepairTime(struct AActor** Interactor); // Function Repair.RepairableInterface.GetUndoRepairTime // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x44787c0
	struct UClass* GetRepairType(); // Function Repair.RepairableInterface.GetRepairType // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4478710
	float GetRepairTime(); // Function Repair.RepairableInterface.GetRepairTime // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x44786e0
	char GetRepairableState(); // Function Repair.RepairableInterface.GetRepairableState // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4478790
};

// Class Repair.RepairingInterface
// Size: 0x28 (Inherited: 0x28)
struct URepairingInterface : UInterface {

	struct UClass* GetRepairType(); // Function Repair.RepairingInterface.GetRepairType // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4478750
};

// Class Repair.RepairObjectActionStateId
// Size: 0x28 (Inherited: 0x28)
struct URepairObjectActionStateId : UActionStateId {

	void PushCharacterIntoRepairObjectActionState(struct FNetSubObjectPtr* Repairable, struct AActor** Character, struct UClass** InputID); // Function Repair.RepairObjectActionStateId.PushCharacterIntoRepairObjectActionState // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x4478930
	void PopCharacterOutOfRepairObjectActionState(struct AActor** Character); // Function Repair.RepairObjectActionStateId.PopCharacterOutOfRepairObjectActionState // Final|Native|Static|Public|BlueprintCallable // @ game+0x44788c0
};

// Class Repair.WoodRepairTypeId
// Size: 0x60 (Inherited: 0x60)
struct UWoodRepairTypeId : URepairTypeId {
};

// Class Repair.ShipRepairInterface
// Size: 0x28 (Inherited: 0x28)
struct UShipRepairInterface : UInterface {
};

