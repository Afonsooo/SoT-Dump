// Class TaleNotes.TaleNote
// Size: 0xa50 (Inherited: 0x7f0)
struct ATaleNote : ASkeletalMeshWieldableItem {
	char UnknownData_7F0[0x8]; // 0x7f0(0x08)
	int32_t CanvasWidth; // 0x7f8(0x04)
	int32_t CanvasHeight; // 0x7fc(0x04)
	float FontScale; // 0x800(0x04)
	char UnknownData_804[0x4]; // 0x804(0x04)
	struct UFont* Font; // 0x808(0x08)
	struct FTreasureMapWidgetStreamedTexture Image; // 0x810(0x38)
	struct FTreasureMapWidgetText TitleWidgetText; // 0x848(0x3c)
	struct FTreasureMapWidgetText BodyWidgetText; // 0x884(0x3c)
	struct TArray<struct FTreasureMapWidgetText> AdditionalBodyWidgetText; // 0x8c0(0x10)
	float NoteWidth; // 0x8d0(0x04)
	float NoteLineSpacingMultiplier; // 0x8d4(0x04)
	struct FText Title; // 0x8d8(0x38)
	struct FText Body; // 0x910(0x38)
	struct TArray<struct FText> AdditionalBody; // 0x948(0x10)
	struct UMaybeCompressedCanvasRenderTarget2D* RenderTarget; // 0x958(0x08)
	struct UUsableWieldableComponent* UsableWieldableComponent; // 0x960(0x08)
	struct UInventoryItemComponent* InventoryItemComponent; // 0x968(0x08)
	struct UZoomInOnWieldableItemComponent* ZoomInOnWieldableComponent; // 0x970(0x08)
	char UnknownData_978[0xd8]; // 0x978(0xd8)

	void OnTextCanvasUpdate(struct UCanvas** InCanvas, int32_t* InWidth, int32_t* InHeight); // Function TaleNotes.TaleNote.OnTextCanvasUpdate // Final|Native|Protected // @ game+0x5019b90
};

