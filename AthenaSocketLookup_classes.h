// Class AthenaSocketLookup.SocketIdTestFunctions
// Size: 0x28 (Inherited: 0x28)
struct USocketIdTestFunctions : UBlueprintFunctionLibrary {

	struct FSocketId MakeSocketIdWithInvalidName(struct FString InPath); // Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3974e90
	struct FSocketId MakeSocketIdWithEmptyPath(struct FName InSocketName); // Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3974df0
	struct FSocketId MakeSocketId(struct FString InPath, struct FName InSocketName); // Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3974cb0
};

// Class AthenaSocketLookup.SocketLookupCacheTestFunctions
// Size: 0x28 (Inherited: 0x28)
struct USocketLookupCacheTestFunctions : UBlueprintFunctionLibrary {

	bool IsInCache(struct FSocketLookupCache InCache, struct FSocketId InSocketId); // Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3974b40
	bool AddToCache(struct FSocketLookupCache InCache, struct FSocketId InSocketId, struct USceneComponent* InSceneComponent); // Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3974990
};

// Class AthenaSocketLookup.SocketLookupFunctions
// Size: 0x28 (Inherited: 0x28)
struct USocketLookupFunctions : UBlueprintFunctionLibrary {

	bool TryGetSocketTransformWithCache(struct FSocketLookupCache Cache, struct AActor* InActor, struct FSocketId InSocketId, struct FTransform OutTransform); // Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3975450
	bool TryGetSocketTransform(struct AActor* InActor, struct FSocketId InSocketId, struct FTransform OutTransform, char Space); // Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3975270
	bool TryGetRelativeSocketTransform(struct AActor* InActor, struct FSocketId InSocketId, struct USceneComponent* RelativeTo, struct FTransform OutTransform); // Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x39750a0
	struct USceneComponent* TryFindSocketOwner(struct AActor* InActor, struct FSocketId InSocketId); // Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3974fb0
};

// Class AthenaSocketLookup.SocketLookupInterface
// Size: 0x28 (Inherited: 0x28)
struct USocketLookupInterface : UInterface {

	bool FindSocket(struct FSocketId InSocketId, struct FTransform OutTransform); // Function AthenaSocketLookup.SocketLookupInterface.FindSocket // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e25660
};

