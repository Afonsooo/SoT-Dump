// ScriptStruct Damage.TriggerPlayerControllerHitNotificationNetworkEvent
// Size: 0x28 (Inherited: 0x10)
struct FTriggerPlayerControllerHitNotificationNetworkEvent : FNetworkEventStruct {
	bool IsKillingHit; // 0x10(0x01)
	bool IsHitClientPredictable; // 0x11(0x01)
	char UnknownData_12[0x2]; // 0x12(0x02)
	struct FGuid OptionalClientAttackId; // 0x14(0x10)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

