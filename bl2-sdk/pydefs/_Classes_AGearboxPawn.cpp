#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxPawn(py::module &m)
{
    py::class_< AGearboxPawn,  AGamePawn   >(m, "AGearboxPawn")
		.def_static("StaticClass", &AGearboxPawn::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_ISpecialMoveInterface", &AGearboxPawn::VfTable_ISpecialMoveInterface)
        .def_readwrite("VfTable_IGearboxDialogInterface", &AGearboxPawn::VfTable_IGearboxDialogInterface)
        .def_readwrite("NPCSightBone", &AGearboxPawn::NPCSightBone)
        .def_readwrite("SMComponent", &AGearboxPawn::SMComponent)
        .def_readwrite("ReplicatedSMData", &AGearboxPawn::ReplicatedSMData)
        .def_readwrite("HasBeenShotAtRecently", &AGearboxPawn::HasBeenShotAtRecently)
        .def_readwrite("CoverState", &AGearboxPawn::CoverState)
        .def_readwrite("CoverManager", &AGearboxPawn::CoverManager)
        .def_readwrite("DialogComponent", &AGearboxPawn::DialogComponent)
        .def_readwrite("DialogReplicatedData", &AGearboxPawn::DialogReplicatedData)
        .def_readwrite("DyingScream", &AGearboxPawn::DyingScream)
        .def("GetAimDirection", &AGearboxPawn::GetAimDirection)
        .def("SetDialogNameTag", &AGearboxPawn::SetDialogNameTag)
        .def("eventServerDialog_TriggerEvent", &AGearboxPawn::eventServerDialog_TriggerEvent)
        .def("GetReplicatedDialogData", &AGearboxPawn::GetReplicatedDialogData)
        .def("SetReplicatedDialogData", &AGearboxPawn::SetReplicatedDialogData)
        .def("GetDialogGroups", &AGearboxPawn::GetDialogGroups)
        .def("GetDialogComponent", &AGearboxPawn::GetDialogComponent, py::return_value_policy::reference)
        .def("GetDialogNameTag", &AGearboxPawn::GetDialogNameTag, py::return_value_policy::reference)
        .def("CanTalk", &AGearboxPawn::CanTalk)
        .def("OnCoverStateChanged", &AGearboxPawn::OnCoverStateChanged)
        .def("ServerSetCoverState", &AGearboxPawn::ServerSetCoverState)
        .def("eventSetCoverState", &AGearboxPawn::eventSetCoverState)
        .def("GetMountAnimDistanceForSpeed", &AGearboxPawn::GetMountAnimDistanceForSpeed)
        .def("eventGetSpotOthersShouldLookAt", &AGearboxPawn::eventGetSpotOthersShouldLookAt)
        .def("SetReplicatedSMData", &AGearboxPawn::SetReplicatedSMData)
        .def("eventServerSpecialMove_StopAny", &AGearboxPawn::eventServerSpecialMove_StopAny)
        .def("eventServerSpecialMove_Stop", &AGearboxPawn::eventServerSpecialMove_Stop)
        .def("eventServerSpecialMove_Queue", &AGearboxPawn::eventServerSpecialMove_Queue)
        .def("eventServerSpecialMove_Play", &AGearboxPawn::eventServerSpecialMove_Play)
        .def("GetDefaultRootMotionRotationMode", &AGearboxPawn::GetDefaultRootMotionRotationMode)
        .def("GetDefaultRootMotionMode", &AGearboxPawn::GetDefaultRootMotionMode)
        .def("GetSkelMesh", &AGearboxPawn::GetSkelMesh, py::return_value_policy::reference)
        .def("GetSMComponent", &AGearboxPawn::GetSMComponent, py::return_value_policy::reference)
        .def("GetActor", &AGearboxPawn::GetActor, py::return_value_policy::reference)
        .def("GetNavigationHandle", &AGearboxPawn::GetNavigationHandle, py::return_value_policy::reference)
        .def("PlayHit", &AGearboxPawn::PlayHit)
        .def("eventReplicatedEvent", &AGearboxPawn::eventReplicatedEvent)
        .def("Died", &AGearboxPawn::Died)
        .def("SetMovementPhysics", &AGearboxPawn::SetMovementPhysics)
        .def("eventPostBeginPlay", &AGearboxPawn::eventPostBeginPlay)
        .def("NotifyShotAtBy", &AGearboxPawn::NotifyShotAtBy)
        .def("HaveIBeenShotAtRecently", &AGearboxPawn::HaveIBeenShotAtRecently)
          ;
}