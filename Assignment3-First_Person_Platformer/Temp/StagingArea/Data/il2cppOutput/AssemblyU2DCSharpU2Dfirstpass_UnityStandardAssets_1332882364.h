#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t2171372499;
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t1249311527;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.ThirdPerson.AICharacterControl
struct  AICharacterControl_t1332882364  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.NavMeshAgent UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::<agent>k__BackingField
	NavMeshAgent_t2171372499 * ___U3CagentU3Ek__BackingField_3;
	// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::<character>k__BackingField
	ThirdPersonCharacter_t1249311527 * ___U3CcharacterU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(AICharacterControl_t1332882364, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_U3CagentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AICharacterControl_t1332882364, ___U3CagentU3Ek__BackingField_3)); }
	inline NavMeshAgent_t2171372499 * get_U3CagentU3Ek__BackingField_3() const { return ___U3CagentU3Ek__BackingField_3; }
	inline NavMeshAgent_t2171372499 ** get_address_of_U3CagentU3Ek__BackingField_3() { return &___U3CagentU3Ek__BackingField_3; }
	inline void set_U3CagentU3Ek__BackingField_3(NavMeshAgent_t2171372499 * value)
	{
		___U3CagentU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CagentU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CcharacterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AICharacterControl_t1332882364, ___U3CcharacterU3Ek__BackingField_4)); }
	inline ThirdPersonCharacter_t1249311527 * get_U3CcharacterU3Ek__BackingField_4() const { return ___U3CcharacterU3Ek__BackingField_4; }
	inline ThirdPersonCharacter_t1249311527 ** get_address_of_U3CcharacterU3Ek__BackingField_4() { return &___U3CcharacterU3Ek__BackingField_4; }
	inline void set_U3CcharacterU3Ek__BackingField_4(ThirdPersonCharacter_t1249311527 * value)
	{
		___U3CcharacterU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcharacterU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
