// Class SafeZoneReservationFramework.SafeZoneComponent
// Size: 0x740 (Inherited: 0x5f0)
struct USafeZoneComponent : UCapsuleComponent {
	struct FMulticastDelegate OnSafeZoneIsEmptyDelegate; // 0x5f0(0x10)
	float ExclusionRadius; // 0x600(0x04)
	char UnknownData_604[0x4]; // 0x604(0x04)
	float ExclusionHeight; // 0x608(0x04)
	struct FName SafeZoneEmptyCollisionProfile; // 0x60c(0x08)
	bool AutoActivateSafeZone; // 0x614(0x01)
	bool DeactivateSafeZoneAfterExclusionRadiusIsEmpty; // 0x615(0x01)
	bool UsePlayerTeleport; // 0x616(0x01)
	char UnknownData_617[0x1]; // 0x617(0x01)
	float PlayerTeleportRadius; // 0x618(0x04)
	char UnknownData_61C[0x4]; // 0x61c(0x04)
	bool UseRepelForce; // 0x620(0x01)
	char UnknownData_621[0x3]; // 0x621(0x03)
	float RepelForceRadius; // 0x624(0x04)
	char UnknownData_628[0x4]; // 0x628(0x04)
	float RepelForceExtents; // 0x62c(0x04)
	float RepelForceMin; // 0x630(0x04)
	float RepelForceMax; // 0x634(0x04)
	bool ApplyRepelForceAtCentreOfMass; // 0x638(0x01)
	char UnknownData_639[0x7]; // 0x639(0x07)
	struct FRuntimeFloatCurve RepelForceGradientCurve; // 0x640(0x80)
	bool UseAngularImpulse; // 0x6c0(0x01)
	char UnknownData_6C1[0x3]; // 0x6c1(0x03)
	float AngularImpulseRadius; // 0x6c4(0x04)
	char UnknownData_6C8[0x4]; // 0x6c8(0x04)
	float AngularImpulseForce; // 0x6cc(0x04)
	float TargetDeflectionAngle; // 0x6d0(0x04)
	bool IsSafeZoneEmpty; // 0x6d4(0x01)
	bool StopAISpawning; // 0x6d5(0x01)
	char UnknownData_6D6[0x2]; // 0x6d6(0x02)
	struct FName CurrentCollisionProfile; // 0x6d8(0x08)
	char SafeZoneState; // 0x6e0(0x01)
	char UnknownData_6E1[0x5f]; // 0x6e1(0x5f)

	void SafeZoneIsEmpty__DelegateSignature(); // DelegateFunction SafeZoneReservationFramework.SafeZoneComponent.SafeZoneIsEmpty__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e25660
	void OnRep_UpdateCollisionProfile(); // Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile // Final|Native|Private // @ game+0x4fcb440
	void OnRep_EmptyStateChanged(); // Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged // Final|Native|Private // @ game+0x4fcb420
	void DeactivateSafeZone(); // Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x4fcb400
	void DeactivateCollider(); // Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x4fcb3e0
	void ActivateSafeZone(); // Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x4fcb3c0
};

