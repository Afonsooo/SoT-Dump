// Class CommunityEmissary.CommunityEmissaryFlagComponent
// Size: 0x660 (Inherited: 0x630)
struct UCommunityEmissaryFlagComponent : UStaticMeshComponent {
	struct UCommunityEmissaryFlagData* CommunityEmissaryDataAsset; // 0x630(0x08)
	char UnknownData_638[0x18]; // 0x638(0x18)
	int32_t ActiveFlagDataIndex; // 0x650(0x04)
	char UnknownData_654[0xc]; // 0x654(0x0c)

	void OnRep_ActiveFlagDataIndex(); // Function CommunityEmissary.CommunityEmissaryFlagComponent.OnRep_ActiveFlagDataIndex // Final|Native|Private // @ game+0x4cd1200
};

// Class CommunityEmissary.CommunityEmissaryFlagData
// Size: 0x38 (Inherited: 0x28)
struct UCommunityEmissaryFlagData : UDataAsset {
	struct TArray<struct FCommunityFlagGradeData> GradeData; // 0x28(0x10)
};

