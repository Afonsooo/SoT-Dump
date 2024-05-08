// Class Counter.CountType
// Size: 0x28 (Inherited: 0x28)
struct UCountType : UObject {
};

// Class Counter.CountHolderProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UCountHolderProviderInterface : UInterface {
};

// Class Counter.CountHolderComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UCountHolderComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct FCountHolder> CountHolders; // 0xd0(0x10)
};

// Class Counter.CountPolicy
// Size: 0x28 (Inherited: 0x28)
struct UCountPolicy : UObject {

	void Execute(struct UWorld* InWorld); // Function Counter.CountPolicy.Execute // BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x19f67e0
};

