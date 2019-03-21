#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameViewportClient(py::object m)
{
    py::class_< UGameViewportClient,  UObject   >(m, "UGameViewportClient")
        .def_readwrite("VfTable_FViewportClient", &UGameViewportClient::VfTable_FViewportClient)
        .def_readwrite("VfTable_FExec", &UGameViewportClient::VfTable_FExec)
        .def_readwrite("Viewport", &UGameViewportClient::Viewport)
        .def_readwrite("ViewportFrame", &UGameViewportClient::ViewportFrame)
        .def_readwrite("GlobalInteractions", &UGameViewportClient::GlobalInteractions)
        .def_readwrite("UIControllerClass", &UGameViewportClient::UIControllerClass)
        .def_readwrite("UIController", &UGameViewportClient::UIController)
        .def_readwrite("ViewportConsole", &UGameViewportClient::ViewportConsole)
        .def_readwrite("pShowFlags", &UGameViewportClient::pShowFlags)
        .def_readwrite("LoadingMessage", &UGameViewportClient::LoadingMessage)
        .def_readwrite("SavingMessage", &UGameViewportClient::SavingMessage)
        .def_readwrite("ConnectingMessage", &UGameViewportClient::ConnectingMessage)
        .def_readwrite("PausedMessage", &UGameViewportClient::PausedMessage)
        .def_readwrite("PrecachingMessage", &UGameViewportClient::PrecachingMessage)
        .def_readwrite("TitleSafeZone", &UGameViewportClient::TitleSafeZone)
        .def_readwrite("SplitscreenInfo", &UGameViewportClient::SplitscreenInfo)
        .def_readwrite("DesiredSplitscreenType", &UGameViewportClient::DesiredSplitscreenType)
        .def_readwrite("ActiveSplitscreenType", &UGameViewportClient::ActiveSplitscreenType)
        .def_readwrite("Default2PSplitType", &UGameViewportClient::Default2PSplitType)
        .def_readwrite("Default3PSplitType", &UGameViewportClient::Default3PSplitType)
        .def_readwrite("ProgressTimeOut", &UGameViewportClient::ProgressTimeOut)
        .def_readwrite("ProgressFadeTime", &UGameViewportClient::ProgressFadeTime)
        .def_readwrite("DebugProperties", &UGameViewportClient::DebugProperties)
        .def_readwrite("ScaleformInteraction", &UGameViewportClient::ScaleformInteraction)
        .def("StaticClass", &UGameViewportClient::StaticClass, py::return_value_policy::reference)
        .def("DebugSetUISystemEnabled", &UGameViewportClient::DebugSetUISystemEnabled)
        .def("BecomePrimaryPlayer", &UGameViewportClient::BecomePrimaryPlayer)
        .def("OnPrimaryPlayerSwitch", &UGameViewportClient::OnPrimaryPlayerSwitch)
        .def("FixupOwnerReferences", &UGameViewportClient::FixupOwnerReferences)
        .def("GetPlayerOwner", &UGameViewportClient::GetPlayerOwner, py::return_value_policy::reference)
        .def("ClearProgressMessages", &UGameViewportClient::ClearProgressMessages)
        .def("SetProgressTime", &UGameViewportClient::SetProgressTime)
        .def("NotifyConnectionError", &UGameViewportClient::NotifyConnectionError)
        .def("eventSetProgressMessage", &UGameViewportClient::eventSetProgressMessage)
        .def("RemoveLocalPlayer", &UGameViewportClient::RemoveLocalPlayer)
        .def("AddLocalPlayer", &UGameViewportClient::AddLocalPlayer)
        .def("NotifyPlayerRemoved", &UGameViewportClient::NotifyPlayerRemoved)
        .def("NotifyPlayerAdded", &UGameViewportClient::NotifyPlayerAdded)
        .def("DisplayProgressMessage", &UGameViewportClient::DisplayProgressMessage)
        .def("eventPostRender", &UGameViewportClient::eventPostRender)
        .def("DrawTitleSafeArea", &UGameViewportClient::DrawTitleSafeArea)
        .def("eventTick", &UGameViewportClient::eventTick)
        .def("CalculateDeadZoneForAllSides", &UGameViewportClient::CalculateDeadZoneForAllSides)
        .def("CalculateSafeZoneValues", &UGameViewportClient::CalculateSafeZoneValues)
        .def("GetPixelSizeOfScreen", &UGameViewportClient::GetPixelSizeOfScreen)
        .def("HasRightSafeZone", &UGameViewportClient::HasRightSafeZone)
        .def("HasLeftSafeZone", &UGameViewportClient::HasLeftSafeZone)
        .def("HasBottomSafeZone", &UGameViewportClient::HasBottomSafeZone)
        .def("HasTopSafeZone", &UGameViewportClient::HasTopSafeZone)
        .def("ConvertLocalPlayerToGamePlayerIndex", &UGameViewportClient::ConvertLocalPlayerToGamePlayerIndex)
        .def("eventGetSubtitleRegion", &UGameViewportClient::eventGetSubtitleRegion)
        .def("eventLayoutPlayers", &UGameViewportClient::eventLayoutPlayers)
        .def("UpdateActiveSplitscreenType", &UGameViewportClient::UpdateActiveSplitscreenType)
        .def("GetSplitscreenConfiguration", &UGameViewportClient::GetSplitscreenConfiguration)
        .def("eventSetSplitscreenConfiguration", &UGameViewportClient::eventSetSplitscreenConfiguration)
        .def("eventGameSessionEnded", &UGameViewportClient::eventGameSessionEnded)
        .def("eventInsertInteraction", &UGameViewportClient::eventInsertInteraction)
        .def("CreateInitialPlayer", &UGameViewportClient::CreateInitialPlayer)
        .def("eventInit", &UGameViewportClient::eventInit)
        .def("eventFindPlayerByControllerId", &UGameViewportClient::eventFindPlayerByControllerId, py::return_value_policy::reference)
        .def("eventRemovePlayer", &UGameViewportClient::eventRemovePlayer)
        .def("eventCreatePlayer", &UGameViewportClient::eventCreatePlayer, py::return_value_policy::reference)
        .def("NotifySplitscreenLayoutChanged", &UGameViewportClient::NotifySplitscreenLayoutChanged)
        .def("SetCustomInteractionObject", &UGameViewportClient::SetCustomInteractionObject)
        .def("GetCustomInteractionClass", &UGameViewportClient::GetCustomInteractionClass, py::return_value_policy::reference)
        .def("GetNumCustomInteractions", &UGameViewportClient::GetNumCustomInteractions)
        .def("ShouldForceFullscreenViewport", &UGameViewportClient::ShouldForceFullscreenViewport)
        .def("IsFullScreenViewport", &UGameViewportClient::IsFullScreenViewport)
        .def("GetViewportSize", &UGameViewportClient::GetViewportSize)
        .def("ConsoleCommand", &UGameViewportClient::ConsoleCommand)
        .def("HandleInputChar", &UGameViewportClient::HandleInputChar)
        .def("HandleInputAxis", &UGameViewportClient::HandleInputAxis)
        .def("HandleInputKey", &UGameViewportClient::HandleInputKey)
          ;
}