// Class AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAthenaLoadingScreenBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsLoadingScreenVisible(); // Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenVisible // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3b0a0a0
	bool IsLoadingScreenRegistered(); // Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenRegistered // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3b0a070
};

// Class AthenaLoadingScreen.SlateLoadingScreenParams
// Size: 0x238 (Inherited: 0x28)
struct USlateLoadingScreenParams : UDataAsset {
	bool DrawBackground; // 0x28(0x01)
	bool DrawBackgroundImage; // 0x29(0x01)
	bool DrawTips; // 0x2a(0x01)
	bool DrawSpinner; // 0x2b(0x01)
	float ViewportWidth; // 0x2c(0x04)
	float ViewportHeight; // 0x30(0x04)
	float FooterHeight; // 0x34(0x04)
	bool DrawSpinnerText; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct FStringAssetReference PlaceholderSpinnerTexture; // 0x40(0x10)
	struct FLinearColor BackgroundColour; // 0x50(0x10)
	struct FSlateLoadingScreenImageParams PrimaryImage; // 0x60(0x30)
	struct TArray<struct FSlateLoadingScreenImageParams> RandomisedPrimaryImages; // 0x90(0x10)
	struct TArray<struct FSlateLoadingScreenImageParams> CyclingImages; // 0xa0(0x10)
	int32_t MaxNumImagesPerLoad; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
	struct FText SpinnerText; // 0xb8(0x38)
	struct FSlateColor SpinnerTextColour; // 0xf0(0x30)
	struct FSlateFontInfo SpinnerTextFont; // 0x120(0x40)
	float SpinnerSize; // 0x160(0x04)
	struct FMargin SpinnerMargin; // 0x164(0x10)
	float SpinnerPadding; // 0x174(0x04)
	struct FStringAssetReference SpinnerIcon; // 0x178(0x10)
	struct FMargin TipsMargin; // 0x188(0x10)
	float TipWrapLength; // 0x198(0x04)
	float TipDisplayDuration; // 0x19c(0x04)
	float TipDurationBetweenTips; // 0x1a0(0x04)
	int32_t NumTipsPerImage; // 0x1a4(0x04)
	struct FSlateFontInfo LoadingTipFont; // 0x1a8(0x40)
	float LoadingTipFontLineHeightPercentage; // 0x1e8(0x04)
	char UnknownData_1EC[0x4]; // 0x1ec(0x04)
	struct TArray<struct FText> LoadingScreenTips; // 0x1f0(0x10)
	struct FSlateColor LoadingScreenTipColour; // 0x200(0x30)
	bool AllowSyncronousAssetLoad; // 0x230(0x01)
	char UnknownData_231[0x7]; // 0x231(0x07)
};

// Class AthenaLoadingScreen.AthenaLoadingScreenParams
// Size: 0x68 (Inherited: 0x38)
struct UAthenaLoadingScreenParams : UDeveloperSettings {
	struct FStringAssetReference BootLoadingScreen; // 0x38(0x10)
	struct FStringAssetReference TeleportLoadingScreen; // 0x48(0x10)
	struct FStringAssetReference AdventureLoadingScreens; // 0x58(0x10)
};

// Class AthenaLoadingScreen.LoadingUtilities
// Size: 0x28 (Inherited: 0x28)
struct ULoadingUtilities : UBlueprintFunctionLibrary {

	bool IsStreaming(struct UObject* WorldContextObject); // Function AthenaLoadingScreen.LoadingUtilities.IsStreaming // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3b0a0d0
};

