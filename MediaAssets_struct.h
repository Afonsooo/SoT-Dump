// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	None,
	None,
	None,
	None,
	None,
	None,
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	None,
	None,
	None,
	None,
	None,
	None,
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	None,
	None,
	None,
	None,
	None,
	None,
};

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t {
	Audio,
	Caption,
	Metadata,
	Script,
	Subtitle,
	Text,
	Video,
	EMediaPlayerTrack_MAX,
};

// Enum MediaAssets.MediaTextureOrientation
enum class MediaTextureOrientation : uint8_t {
	None,
	None,
	None,
	None,
	None,
};

// Enum MediaAssets.MediaTextureOutputFormat
enum class MediaTextureOutputFormat : uint8_t {
	None,
	None,
	None,
};

// ScriptStruct MediaAssets.MediaCaptureDevice
// Size: 0x48 (Inherited: 0x00)
struct FMediaCaptureDevice {
	struct FText DisplayName; // 0x00(0x38)
	struct FString URL; // 0x38(0x10)
};

// ScriptStruct MediaAssets.PlatformPlayerEntry
// Size: 0x18 (Inherited: 0x00)
struct FPlatformPlayerEntry {
	struct FString Key; // 0x00(0x10)
	struct FName Value; // 0x10(0x08)
};

