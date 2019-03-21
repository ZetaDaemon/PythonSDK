#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTwoPanelInterfaceGFxObject(py::object m)
{
    py::class_< UTwoPanelInterfaceGFxObject,  UBaseTopLevelPanelGFxObject   >(m, "UTwoPanelInterfaceGFxObject")
        .def_readwrite("TwoPanelInterface", &UTwoPanelInterfaceGFxObject::TwoPanelInterface)
        .def_readwrite("StoragePanel", &UTwoPanelInterfaceGFxObject::StoragePanel)
        .def_readwrite("PlayerPanel", &UTwoPanelInterfaceGFxObject::PlayerPanel)
        .def_readwrite("frameNum", &UTwoPanelInterfaceGFxObject::frameNum)
        .def_readwrite("TransferringThing", &UTwoPanelInterfaceGFxObject::TransferringThing)
        .def_readwrite("DynamicCardName", &UTwoPanelInterfaceGFxObject::DynamicCardName)
        .def_readwrite("HeaderNavLeftTooltip", &UTwoPanelInterfaceGFxObject::HeaderNavLeftTooltip)
        .def_readwrite("HeaderNavRightTooltip", &UTwoPanelInterfaceGFxObject::HeaderNavRightTooltip)
        .def_readwrite("StoragePanelLabel", &UTwoPanelInterfaceGFxObject::StoragePanelLabel)
        .def_readwrite("PlayerPanelLabel", &UTwoPanelInterfaceGFxObject::PlayerPanelLabel)
        .def_readwrite("bCanAcceptInput", &UTwoPanelInterfaceGFxObject::bCanAcceptInput)
        .def("StaticClass", &UTwoPanelInterfaceGFxObject::StaticClass, py::return_value_policy::reference)
        .def("OnCellPressed", &UTwoPanelInterfaceGFxObject::OnCellPressed)
        .def("InitForConsole", &UTwoPanelInterfaceGFxObject::InitForConsole)
        .def("InitForPC", &UTwoPanelInterfaceGFxObject::InitForPC)
        .def("OnValidCell", &UTwoPanelInterfaceGFxObject::OnValidCell)
        .def("GetCurrentCellObject", &UTwoPanelInterfaceGFxObject::GetCurrentCellObject, py::return_value_policy::reference)
        .def("GetCurrentPanel", &UTwoPanelInterfaceGFxObject::GetCurrentPanel, py::return_value_policy::reference)
        .def("GetInspectedItemCurrencyType", &UTwoPanelInterfaceGFxObject::GetInspectedItemCurrencyType)
        .def("GetInspectedItemOverridePrice", &UTwoPanelInterfaceGFxObject::GetInspectedItemOverridePrice)
        .def("SetActivePanelSelectIndexByThing", &UTwoPanelInterfaceGFxObject::SetActivePanelSelectIndexByThing)
        .def("SetActivePanelSortConfiguration", &UTwoPanelInterfaceGFxObject::SetActivePanelSortConfiguration)
        .def("SetTabIconFrame", &UTwoPanelInterfaceGFxObject::SetTabIconFrame)
        .def("SetActiveTab", &UTwoPanelInterfaceGFxObject::SetActiveTab)
        .def("SetNavTooltips", &UTwoPanelInterfaceGFxObject::SetNavTooltips)
        .def("SetTooltipText", &UTwoPanelInterfaceGFxObject::SetTooltipText)
        .def("Cleanup", &UTwoPanelInterfaceGFxObject::Cleanup)
        .def("SetStorageInfoCardVisible", &UTwoPanelInterfaceGFxObject::SetStorageInfoCardVisible)
        .def("SetStorageInfoCardData", &UTwoPanelInterfaceGFxObject::SetStorageInfoCardData)
        .def("SetStorageInfoCardTitle", &UTwoPanelInterfaceGFxObject::SetStorageInfoCardTitle)
        .def("CycleSelectedThingAsTrashOrFavorite", &UTwoPanelInterfaceGFxObject::CycleSelectedThingAsTrashOrFavorite)
        .def("TweenCards", &UTwoPanelInterfaceGFxObject::TweenCards)
        .def("FinishTransfer", &UTwoPanelInterfaceGFxObject::FinishTransfer)
        .def("CancelTransfer", &UTwoPanelInterfaceGFxObject::CancelTransfer)
        .def("ConfirmTransfer", &UTwoPanelInterfaceGFxObject::ConfirmTransfer)
        .def("TransferInputKey", &UTwoPanelInterfaceGFxObject::TransferInputKey)
        .def("StartTransfer", &UTwoPanelInterfaceGFxObject::StartTransfer)
        .def("IsTransferring", &UTwoPanelInterfaceGFxObject::IsTransferring)
        .def("NormalInputKey", &UTwoPanelInterfaceGFxObject::NormalInputKey)
        .def("PanelInputKey", &UTwoPanelInterfaceGFxObject::PanelInputKey)
        .def("OnItemSelected", &UTwoPanelInterfaceGFxObject::OnItemSelected)
        .def("InitItemCards", &UTwoPanelInterfaceGFxObject::InitItemCards)
        .def("AssignItemCards", &UTwoPanelInterfaceGFxObject::AssignItemCards)
        .def("SetHeader", &UTwoPanelInterfaceGFxObject::SetHeader)
        .def("GetSelectedThing", &UTwoPanelInterfaceGFxObject::GetSelectedThing, py::return_value_policy::reference)
        .def("GetEquippedAnalogueThroughInterface", &UTwoPanelInterfaceGFxObject::GetEquippedAnalogueThroughInterface, py::return_value_policy::reference)
        .def("GetSelectedThingThroughInterface", &UTwoPanelInterfaceGFxObject::GetSelectedThingThroughInterface, py::return_value_policy::reference)
        .def("UpdateDynamicCard", &UTwoPanelInterfaceGFxObject::UpdateDynamicCard)
        .def("RefreshItemCards", &UTwoPanelInterfaceGFxObject::RefreshItemCards)
        .def("SetUpCard", &UTwoPanelInterfaceGFxObject::SetUpCard)
        .def("SetActive", &UTwoPanelInterfaceGFxObject::SetActive)
        .def("SwitchPanelsForComparing", &UTwoPanelInterfaceGFxObject::SwitchPanelsForComparing)
        .def("TrySwitchToRightPanel", &UTwoPanelInterfaceGFxObject::TrySwitchToRightPanel)
        .def("TrySwitchToLeftPanel", &UTwoPanelInterfaceGFxObject::TrySwitchToLeftPanel)
        .def("SwitchToRightPanel", &UTwoPanelInterfaceGFxObject::SwitchToRightPanel)
        .def("SwitchToLeftPanel", &UTwoPanelInterfaceGFxObject::SwitchToLeftPanel)
        .def("OnListSort", &UTwoPanelInterfaceGFxObject::OnListSort)
        .def("ConfigureForPlayer", &UTwoPanelInterfaceGFxObject::ConfigureForPlayer)
        .def("OnTick", &UTwoPanelInterfaceGFxObject::OnTick)
        .def("Refresh", &UTwoPanelInterfaceGFxObject::Refresh)
        .def("RefreshRightPanel", &UTwoPanelInterfaceGFxObject::RefreshRightPanel)
        .def("RefreshLeftPanel", &UTwoPanelInterfaceGFxObject::RefreshLeftPanel)
        .def("SetActiveHeaderIcon", &UTwoPanelInterfaceGFxObject::SetActiveHeaderIcon)
        .def("SetHeaderLabel", &UTwoPanelInterfaceGFxObject::SetHeaderLabel)
        .def("SetPlayerPanelHidden", &UTwoPanelInterfaceGFxObject::SetPlayerPanelHidden)
        .def("SetNavHeaderIconCount", &UTwoPanelInterfaceGFxObject::SetNavHeaderIconCount)
        .def("extInitRightPanel", &UTwoPanelInterfaceGFxObject::extInitRightPanel)
        .def("extInitLeftPanel", &UTwoPanelInterfaceGFxObject::extInitLeftPanel)
        .def("Init", &UTwoPanelInterfaceGFxObject::Init)
        .def("OnDynamicCardUpdated", &UTwoPanelInterfaceGFxObject::OnDynamicCardUpdated)
        .def("SwitchToStartingPanel", &UTwoPanelInterfaceGFxObject::SwitchToStartingPanel)
          ;
}