#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t2171372499;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_NavMeshAgent2171372499.h"

// System.Boolean UnityEngine.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C"  bool NavMeshAgent_SetDestination_m2242640013 (NavMeshAgent_t2171372499 * __this, Vector3_t2243707580  ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C"  bool NavMeshAgent_INTERNAL_CALL_SetDestination_m2967457926 (Il2CppObject * __this /* static, unused */, NavMeshAgent_t2171372499 * ___self0, Vector3_t2243707580 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.NavMeshAgent::get_stoppingDistance()
extern "C"  float NavMeshAgent_get_stoppingDistance_m2328047288 (NavMeshAgent_t2171372499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_desiredVelocity()
extern "C"  Vector3_t2243707580  NavMeshAgent_get_desiredVelocity_m1521476650 (NavMeshAgent_t2171372499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_get_desiredVelocity_m2770023923 (NavMeshAgent_t2171372499 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.NavMeshAgent::get_remainingDistance()
extern "C"  float NavMeshAgent_get_remainingDistance_m3227869012 (NavMeshAgent_t2171372499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_updatePosition(System.Boolean)
extern "C"  void NavMeshAgent_set_updatePosition_m2235541086 (NavMeshAgent_t2171372499 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_updateRotation(System.Boolean)
extern "C"  void NavMeshAgent_set_updateRotation_m3369189441 (NavMeshAgent_t2171372499 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
