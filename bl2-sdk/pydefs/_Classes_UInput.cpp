#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInput(py::object m)
{
    py::class_< UInput,  UObject   >(m, "UInput")
        .def_readwrite("Bindings", &UInput::Bindings)
        .def_readwrite("PressedKeys", &UInput::PressedKeys)
        .def_readwrite("CurrentEvent", &UInput::CurrentEvent)
        .def_readwrite("CurrentDelta", &UInput::CurrentDelta)
        .def_readwrite("CurrentDeltaTime", &UInput::CurrentDeltaTime)
        .def_readwrite("AxisArray", &UInput::AxisArray)
        .def_readwrite("BadCapsLocContexts", &UUIRoot::BadCapsLocContexts)
        .def("StaticClass", &UInput::StaticClass, py::return_value_policy::reference)
        .def("SetBind", &UInput::SetBind)
        .def("GetBind", &UInput::GetBind)
        .def("ResetInput", &UInput::ResetInput)
        .def("NotifyPlayerRemoved", &UInteraction::NotifyPlayerRemoved)
        .def("NotifyPlayerAdded", &UInteraction::NotifyPlayerAdded)
        .def("NotifyGameSessionEnded", &UInteraction::NotifyGameSessionEnded)
        .def("Initialized", &UInteraction::Initialized)
        .def("Oninitialize", &UInteraction::Oninitialize)
        .def("Init", &UInteraction::Init)
        .def("eventPostRender", &UInteraction::eventPostRender)
        .def("eventTick", &UInteraction::eventTick)
        .def("OnReceivedNativeInputChar", &UInteraction::OnReceivedNativeInputChar)
        .def("OnReceivedNativeInputAxis", &UInteraction::OnReceivedNativeInputAxis)
        .def("OnReceivedNativeInputKey", &UInteraction::OnReceivedNativeInputKey)
        .def("SafeCaps", &UUIRoot::SafeCaps)
        .def("GetOnlinePlayerInterfaceEx", &UUIRoot::GetOnlinePlayerInterfaceEx, py::return_value_policy::reference)
        .def("GetOnlinePlayerInterface", &UUIRoot::GetOnlinePlayerInterface, py::return_value_policy::reference)
        .def("GetOnlineGameInterface", &UUIRoot::GetOnlineGameInterface, py::return_value_policy::reference)
        .def("GetDataStoreStringValue", &UUIRoot::GetDataStoreStringValue)
        .def("GetDataStoreFieldValue", &UUIRoot::GetDataStoreFieldValue)
        .def("SetDataStoreStringValue", &UUIRoot::SetDataStoreStringValue)
        .def("SetDataStoreFieldValue", &UUIRoot::SetDataStoreFieldValue)
        .def("StaticResolveDataStore", &UUIRoot::StaticResolveDataStore, py::return_value_policy::reference)
        .def("GetSceneClient", &UUIRoot::GetSceneClient, py::return_value_policy::reference)
        .def("GetCurrentUIController", &UUIRoot::GetCurrentUIController, py::return_value_policy::reference)
        .def("GetInputPlatformType", &UUIRoot::GetInputPlatformType)
          ;
}