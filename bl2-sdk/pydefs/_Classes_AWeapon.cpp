#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWeapon(py::module &m)
{
    py::class_< AWeapon,  AWillowInventory   >(m, "AWeapon")
		.def_static("StaticClass", &AWeapon::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CurrentFireMode", &AWeapon::CurrentFireMode)
        .def_readwrite("bOffHand", &AWeapon::bOffHand)
        .def_readwrite("FiringStatesArray", &AWeapon::FiringStatesArray)
        .def_readwrite("WeaponFireTypes", &AWeapon::WeaponFireTypes)
        .def_readwrite("WeaponProjectiles", &AWeapon::WeaponProjectiles)
        .def_readwrite("FireInterval", &AWeapon::FireInterval)
        .def_readwrite("FireIntervalBaseValue", &AWeapon::FireIntervalBaseValue)
        .def_readwrite("FireIntervalModifierStack", &AWeapon::FireIntervalModifierStack)
        .def_readwrite("Spread", &AWeapon::Spread)
        .def_readwrite("SpreadBaseValue", &AWeapon::SpreadBaseValue)
        .def_readwrite("SpreadModifierStack", &AWeapon::SpreadModifierStack)
        .def_readwrite("InstantHitDamage", &AWeapon::InstantHitDamage)
        .def_readwrite("InstantHitDamageBaseValue", &AWeapon::InstantHitDamageBaseValue)
        .def_readwrite("InstantHitDamageModifierStack", &AWeapon::InstantHitDamageModifierStack)
        .def_readwrite("InstantHitMomentum", &AWeapon::InstantHitMomentum)
        .def_readwrite("InstantHitMomentumBaseValue", &AWeapon::InstantHitMomentumBaseValue)
        .def_readwrite("InstantHitMomentumModifierStack", &AWeapon::InstantHitMomentumModifierStack)
        .def_readwrite("InstantHitDamageTypes", &AWeapon::InstantHitDamageTypes)
        .def_readwrite("InstantHitDamageTypeDefinitions", &AWeapon::InstantHitDamageTypeDefinitions)
        .def_readwrite("InstantHitImpactDefinitions", &AWeapon::InstantHitImpactDefinitions)
        .def_readwrite("EquipTime", &AWeapon::EquipTime)
        .def_readwrite("EquipTimeBaseValue", &AWeapon::EquipTimeBaseValue)
        .def_readwrite("EquipTimeModifierStack", &AWeapon::EquipTimeModifierStack)
        .def_readwrite("PutDownTime", &AWeapon::PutDownTime)
        .def_readwrite("PutDownTimeBaseValue", &AWeapon::PutDownTimeBaseValue)
        .def_readwrite("PutDownTimeModifierStack", &AWeapon::PutDownTimeModifierStack)
        .def_readwrite("FireOffset", &AWeapon::FireOffset)
        .def_readwrite("WeaponRange", &AWeapon::WeaponRange)
        .def_readwrite("WeaponRangeBaseValue", &AWeapon::WeaponRangeBaseValue)
        .def_readwrite("WeaponRangeModifierStack", &AWeapon::WeaponRangeModifierStack)
        .def_readwrite("ClothImpulseRadius", &AWeapon::ClothImpulseRadius)
        .def_readwrite("ClothImpulseScale", &AWeapon::ClothImpulseScale)
        .def_readwrite("FirstPersonMesh", &AWeapon::FirstPersonMesh)
        .def_readwrite("DefaultAnimSpeed", &AWeapon::DefaultAnimSpeed)
        .def_readwrite("Priority", &AWeapon::Priority)
        .def_readwrite("AIController", &AWeapon::AIController)
        .def_readwrite("ShouldFireOnRelease", &AWeapon::ShouldFireOnRelease)
        .def_readwrite("AIRating", &AWeapon::AIRating)
        .def_readwrite("CachedMaxRange", &AWeapon::CachedMaxRange)
        .def("Unreadied", &AWeapon::Unreadied)
        .def("Readied", &AWeapon::Readied)
        .def("GetTargetDistance", &AWeapon::GetTargetDistance)
        .def("CacheAIController", &AWeapon::CacheAIController)
        .def("UninitializeAfterPutDown", &AWeapon::UninitializeAfterPutDown)
        .def("WeaponIsDown", &AWeapon::WeaponIsDown)
        .def("StillFiring", &AWeapon::StillFiring)
        .def("ShouldRefire", &AWeapon::ShouldRefire)
        .def("NotifyWeaponFinishedFiring", &AWeapon::NotifyWeaponFinishedFiring)
        .def("NotifyWeaponFired", &AWeapon::NotifyWeaponFired)
        .def("HandleFinishedFiring", &AWeapon::HandleFinishedFiring)
        .def("TryPutDownEx", &AWeapon::TryPutDownEx)
        .def("TryPutDown", &AWeapon::TryPutDown)
        .def("eventGetPhysicalFireStartLoc", &AWeapon::eventGetPhysicalFireStartLoc)
        .def("eventGetMuzzleLoc", &AWeapon::eventGetMuzzleLoc)
        .def("CustomFire", &AWeapon::CustomFire)
        .def("ProjectileFire", &AWeapon::ProjectileFire, py::return_value_policy::reference)
        .def("eventProcessInstantHit", &AWeapon::eventProcessInstantHit)
        .def("InstantFire", &AWeapon::InstantFire)
        .def("PassThroughDamage", &AWeapon::PassThroughDamage)
        .def("CalcWeaponFire", &AWeapon::CalcWeaponFire)
        .def("GetTraceOwner", &AWeapon::GetTraceOwner, py::return_value_policy::reference)
        .def("eventGetTraceRange", &AWeapon::eventGetTraceRange)
        .def("GetAdjustedAim", &AWeapon::GetAdjustedAim)
        .def("FireAmmunition", &AWeapon::FireAmmunition)
        .def("FireModeUpdated", &AWeapon::FireModeUpdated)
        .def("SetCurrentFireMode", &AWeapon::SetCurrentFireMode)
        .def("SendToFiringState", &AWeapon::SendToFiringState)
        .def("ForceEndFire", &AWeapon::ForceEndFire)
        .def("EndFire", &AWeapon::EndFire)
        .def("ServerStopFire", &AWeapon::ServerStopFire)
        .def("StopFire", &AWeapon::StopFire)
        .def("BeginFire", &AWeapon::BeginFire)
        .def("ServerStartFire", &AWeapon::ServerStartFire)
        .def("StartFire", &AWeapon::StartFire)
        .def("ClientWeaponSet", &AWeapon::ClientWeaponSet)
        .def("ClientGivenTo", &AWeapon::ClientGivenTo)
        .def("DetachWeapon", &AWeapon::DetachWeapon)
        .def("AttachWeaponTo", &AWeapon::AttachWeaponTo)
        .def("ClearFlashLocation", &AWeapon::ClearFlashLocation)
        .def("SetFlashLocation", &AWeapon::SetFlashLocation)
        .def("ClearFlashCount", &AWeapon::ClearFlashCount)
        .def("IncrementFlashCount", &AWeapon::IncrementFlashCount)
        .def("WeaponEmpty", &AWeapon::WeaponEmpty)
        .def("DenyPickupQuery", &AWeapon::DenyPickupQuery)
        .def("PutDownWeapon", &AWeapon::PutDownWeapon)
        .def("Activate", &AWeapon::Activate)
        .def("TimeWeaponEquipping", &AWeapon::TimeWeaponEquipping)
        .def("GetEquipTime", &AWeapon::GetEquipTime)
        .def("eventTimeWeaponPutDown", &AWeapon::eventTimeWeaponPutDown)
        .def("GetPutDownTime", &AWeapon::GetPutDownTime)
        .def("RefireCheckTimer", &AWeapon::RefireCheckTimer)
        .def("TimeWeaponFiring", &AWeapon::TimeWeaponFiring)
        .def("GetFireInterval", &AWeapon::GetFireInterval)
        .def("StopFireEffects", &AWeapon::StopFireEffects)
        .def("PlayFireEffects", &AWeapon::PlayFireEffects)
        .def("StopWeaponAnimation", &AWeapon::StopWeaponAnimation)
        .def("PlayWeaponAnimation", &AWeapon::PlayWeaponAnimation)
        .def("WeaponPlayAkEvent", &AWeapon::WeaponPlayAkEvent)
        .def("GetWeaponAnimNodeSeq", &AWeapon::GetWeaponAnimNodeSeq, py::return_value_policy::reference)
        .def("FireOnRelease", &AWeapon::FireOnRelease)
        .def("CanAttack", &AWeapon::CanAttack)
        .def("GetWeaponRating", &AWeapon::GetWeaponRating)
        .def("GetAIRating", &AWeapon::GetAIRating)
        .def("MaxRange", &AWeapon::MaxRange)
        .def("AddSpread", &AWeapon::AddSpread)
        .def("GetProjectileClass", &AWeapon::GetProjectileClass, py::return_value_policy::reference)
        .def("ClearPendingFire", &AWeapon::ClearPendingFire)
        .def("SetPendingFire", &AWeapon::SetPendingFire)
        .def("PendingFire", &AWeapon::PendingFire)
        .def("GetPendingFireLength", &AWeapon::GetPendingFireLength)
        .def("HasAnyAmmo", &AWeapon::HasAnyAmmo)
        .def("HasActiveAmmo", &AWeapon::HasActiveAmmo)
        .def("eventHasAmmo", &AWeapon::eventHasAmmo)
        .def("AddAmmo", &AWeapon::AddAmmo)
        .def("ConsumeAmmo", &AWeapon::ConsumeAmmo)
        .def("DenyClientWeaponSet", &AWeapon::DenyClientWeaponSet)
        .def("eventIsFiring", &AWeapon::eventIsFiring)
        .def("ClientWeaponThrown", &AWeapon::ClientWeaponThrown)
        .def("CanThrow", &AWeapon::CanThrow)
        .def("DropFrom", &AWeapon::DropFrom, py::return_value_policy::reference)
        .def("DoOverridePrevWeapon", &AWeapon::DoOverridePrevWeapon)
        .def("DoOverrideNextWeapon", &AWeapon::DoOverrideNextWeapon)
        .def("HolderDied", &AWeapon::HolderDied)
        .def("ItemRemovedFromInvManager", &AWeapon::ItemRemovedFromInvManager)
        .def("eventDestroyed", &AWeapon::eventDestroyed)
        .def("ForceWeaponToBeEquipped", &AWeapon::ForceWeaponToBeEquipped)
          ;
}