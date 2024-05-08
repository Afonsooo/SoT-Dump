// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x5f0 (Inherited: 0x5e0)
struct UCustomMeshComponent : UMeshComponent {
	char UnknownData_5E0[0x10]; // 0x5e0(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6f54a0
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles // Final|Native|Public|BlueprintCallable // @ game+0x6f5480
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6f53d0
};

