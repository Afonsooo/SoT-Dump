// Class UtilityVoyage.DispatchUtilityVoyageTaleStep
// Size: 0xa0 (Inherited: 0x98)
struct UDispatchUtilityVoyageTaleStep : UTaleQuestStep {
	struct UDispatchUtilityVoyageTaleStepDesc* StepDesc; // 0x98(0x08)
};

// Class UtilityVoyage.DispatchUtilityVoyageTaleStepDesc
// Size: 0x90 (Inherited: 0x80)
struct UDispatchUtilityVoyageTaleStepDesc : UTaleQuestStepDesc {
	struct UVoyageDescDataAsset* UtilityVoyageDesc; // 0x80(0x08)
	bool Migratable; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class UtilityVoyage.UtilityVoyageService
// Size: 0xd8 (Inherited: 0x28)
struct UUtilityVoyageService : UObject {
	char UnknownData_28[0x90]; // 0x28(0x90)
	struct TArray<struct UCrewVoyageParticipant*> Participants; // 0xb8(0x10)
	struct TArray<struct FUtilityVoyageData> Voyages; // 0xc8(0x10)
};

