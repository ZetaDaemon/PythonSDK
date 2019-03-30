#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleSpawnStationGFxMovie(py::module &m)
{
    py::class_< UVehicleSpawnStationGFxMovie,  UWillowGFxMovie3D   >(m, "UVehicleSpawnStationGFxMovie")
		.def_static("StaticClass", &UVehicleSpawnStationGFxMovie::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIStreamingDataEvent", &UVehicleSpawnStationGFxMovie::VfTable_IIStreamingDataEvent)
        .def_readwrite("VSSWrapperObj", &UVehicleSpawnStationGFxMovie::VSSWrapperObj)
        .def_readwrite("VehicleFamilySelector", &UVehicleSpawnStationGFxMovie::VehicleFamilySelector)
        .def_readwrite("VehicleChoiceInfoCard", &UVehicleSpawnStationGFxMovie::VehicleChoiceInfoCard)
        .def_readwrite("MyVehicleSpawnStationDefinition", &UVehicleSpawnStationGFxMovie::MyVehicleSpawnStationDefinition)
        .def_readwrite("AvailableVehicleFamilyDefinitions", &UVehicleSpawnStationGFxMovie::AvailableVehicleFamilyDefinitions)
        .def_readwrite("DesiredFamilyDefinition", &UVehicleSpawnStationGFxMovie::DesiredFamilyDefinition)
        .def_readwrite("TimeStartedWaitingForFamilyChange", &UVehicleSpawnStationGFxMovie::TimeStartedWaitingForFamilyChange)
        .def_readwrite("ChangeFamilyRequestMinWaitDuration", &UVehicleSpawnStationGFxMovie::ChangeFamilyRequestMinWaitDuration)
        .def_readwrite("ChangeFamilyRequestTimeOutDuration", &UVehicleSpawnStationGFxMovie::ChangeFamilyRequestTimeOutDuration)
        .def_readwrite("AvailableVehicleUIDefinitions", &UVehicleSpawnStationGFxMovie::AvailableVehicleUIDefinitions)
        .def_readwrite("AvailableVehicleSkinDefinitions", &UVehicleSpawnStationGFxMovie::AvailableVehicleSkinDefinitions)
        .def_readwrite("SeenVehicleSkinDefinitions", &UVehicleSpawnStationGFxMovie::SeenVehicleSkinDefinitions)
        .def_readwrite("CurrentStage", &UVehicleSpawnStationGFxMovie::CurrentStage)
        .def_readwrite("VehicleCellCount", &UVehicleSpawnStationGFxMovie::VehicleCellCount)
        .def_readwrite("SelectedModuleIndex", &UVehicleSpawnStationGFxMovie::SelectedModuleIndex)
        .def_readwrite("ClientPawnLocationAtTeleportTime", &UVehicleSpawnStationGFxMovie::ClientPawnLocationAtTeleportTime)
        .def_readwrite("SpawnVehicleLabel", &UVehicleSpawnStationGFxMovie::SpawnVehicleLabel)
        .def_readwrite("RespawnVehicleLabel", &UVehicleSpawnStationGFxMovie::RespawnVehicleLabel)
        .def_readwrite("TeleportLabel", &UVehicleSpawnStationGFxMovie::TeleportLabel)
        .def_readwrite("NoSkinAvailableLabel", &UVehicleSpawnStationGFxMovie::NoSkinAvailableLabel)
        .def_readwrite("NoSkinSelectedLabel", &UVehicleSpawnStationGFxMovie::NoSkinSelectedLabel)
        .def_readwrite("UnlockedText", &UVehicleSpawnStationGFxMovie::UnlockedText)
        .def_readwrite("WaitingOnDataDlg", &UVehicleSpawnStationGFxMovie::WaitingOnDataDlg)
        .def_readwrite("StartTimeWaitingOnReplicatedData", &UVehicleSpawnStationGFxMovie::StartTimeWaitingOnReplicatedData)
        .def_readwrite("StartTime", &UVehicleSpawnStationGFxMovie::StartTime)
        .def_readwrite("StartFOV", &UVehicleSpawnStationGFxMovie::StartFOV)
        .def_readwrite("PreviewIndex", &UVehicleSpawnStationGFxMovie::PreviewIndex)
        .def("eventRunStreamingDataEvent", &UVehicleSpawnStationGFxMovie::eventRunStreamingDataEvent)
        .def("CloseOrReturnToFamilySelection", &UVehicleSpawnStationGFxMovie::CloseOrReturnToFamilySelection)
        .def("extGenericButtonClicked", &UVehicleSpawnStationGFxMovie::extGenericButtonClicked)
        .def("InitForConsole", &UVehicleSpawnStationGFxMovie::InitForConsole)
        .def("InitForPC", &UVehicleSpawnStationGFxMovie::InitForPC)
        .def("HandleInputAxis", &UVehicleSpawnStationGFxMovie::HandleInputAxis)
        .def("UpdatePreview", &UVehicleSpawnStationGFxMovie::UpdatePreview)
        .def("CancelCustomization", &UVehicleSpawnStationGFxMovie::CancelCustomization)
        .def("CommitCustomization", &UVehicleSpawnStationGFxMovie::CommitCustomization)
        .def("extOnSkinCellClick", &UVehicleSpawnStationGFxMovie::extOnSkinCellClick)
        .def("UsingGamepad", &UVehicleSpawnStationGFxMovie::UsingGamepad)
        .def("extOnVehicleFamilyCellClick", &UVehicleSpawnStationGFxMovie::extOnVehicleFamilyCellClick)
        .def("extOnVehicleCellHighlight", &UVehicleSpawnStationGFxMovie::extOnVehicleCellHighlight)
        .def("extOnVehicleCellClick", &UVehicleSpawnStationGFxMovie::extOnVehicleCellClick)
        .def("extOnSkinTypeButtonClick", &UVehicleSpawnStationGFxMovie::extOnSkinTypeButtonClick)
        .def("extOnVehicleTypeButtonClick", &UVehicleSpawnStationGFxMovie::extOnVehicleTypeButtonClick)
        .def("extOnTeleportButtonClick", &UVehicleSpawnStationGFxMovie::extOnTeleportButtonClick)
        .def("extOnSpawnVehicleButtonClick", &UVehicleSpawnStationGFxMovie::extOnSpawnVehicleButtonClick)
        .def("extOnVehicleChoiceInfoCardLoad", &UVehicleSpawnStationGFxMovie::extOnVehicleChoiceInfoCardLoad)
        .def("extOnVehicleChoiceModuleLoad", &UVehicleSpawnStationGFxMovie::extOnVehicleChoiceModuleLoad)
        .def("extOnVehicleFamilySelectorLoad", &UVehicleSpawnStationGFxMovie::extOnVehicleFamilySelectorLoad)
        .def("extCacheVSSClip", &UVehicleSpawnStationGFxMovie::extCacheVSSClip)
        .def("VehicleFamilyInputKey", &UVehicleSpawnStationGFxMovie::VehicleFamilyInputKey)
        .def("SharedInfoCardInputKey", &UVehicleSpawnStationGFxMovie::SharedInfoCardInputKey)
        .def("SkinChoiceInfoCardInputKey", &UVehicleSpawnStationGFxMovie::SkinChoiceInfoCardInputKey)
        .def("VehicleChoiceInfoCardInputKey", &UVehicleSpawnStationGFxMovie::VehicleChoiceInfoCardInputKey)
        .def("HandleKeyDefaults", &UVehicleSpawnStationGFxMovie::HandleKeyDefaults)
        .def("eventTrySetFocus", &UVehicleSpawnStationGFxMovie::eventTrySetFocus)
        .def("eventRefreshFocus", &UVehicleSpawnStationGFxMovie::eventRefreshFocus)
        .def("eventConfigureTooltips", &UVehicleSpawnStationGFxMovie::eventConfigureTooltips)
        .def("ConfigureTooltipsInternal", &UVehicleSpawnStationGFxMovie::ConfigureTooltipsInternal)
        .def("eventConfigureVSSWrapper", &UVehicleSpawnStationGFxMovie::eventConfigureVSSWrapper)
        .def("HideSkinInfoCard", &UVehicleSpawnStationGFxMovie::HideSkinInfoCard)
        .def("ShowSkinInfoCard", &UVehicleSpawnStationGFxMovie::ShowSkinInfoCard)
        .def("HideVehicleInfoCard", &UVehicleSpawnStationGFxMovie::HideVehicleInfoCard)
        .def("ShowVehicleInfoCard", &UVehicleSpawnStationGFxMovie::ShowVehicleInfoCard)
        .def("ConfigureSkinTypeChoices", &UVehicleSpawnStationGFxMovie::ConfigureSkinTypeChoices)
        .def("ConfigureVehicleTypeChoices", &UVehicleSpawnStationGFxMovie::ConfigureVehicleTypeChoices)
        .def("AddVehicleChoices", &UVehicleSpawnStationGFxMovie::AddVehicleChoices)
        .def("eventRefreshVehicleChoiceModule", &UVehicleSpawnStationGFxMovie::eventRefreshVehicleChoiceModule)
        .def("GetVehicleChoiceModule", &UVehicleSpawnStationGFxMovie::GetVehicleChoiceModule, py::return_value_policy::reference)
        .def("VehicleExistsAndIsOccupied", [](UVehicleSpawnStationGFxMovie &self ) { class UVehicleFamilyDefinition** pyOutSpawnedVehicleFamilyDef = 0 ;  bool ret =  self.VehicleExistsAndIsOccupied(pyOutSpawnedVehicleFamilyDef); return py::make_tuple(ret, *pyOutSpawnedVehicleFamilyDef); })
        .def("eventOnClose", &UVehicleSpawnStationGFxMovie::eventOnClose)
        .def("eventUpdatePreviewFromVSSUIDef", &UVehicleSpawnStationGFxMovie::eventUpdatePreviewFromVSSUIDef)
        .def("DestroyPreviewMeshes", &UVehicleSpawnStationGFxMovie::DestroyPreviewMeshes)
        .def("DestroyPreviewActors", &UVehicleSpawnStationGFxMovie::DestroyPreviewActors)
        .def("CreatePreviewActors", &UVehicleSpawnStationGFxMovie::CreatePreviewActors)
        .def("eventShowPlayersMustExitMessage", &UVehicleSpawnStationGFxMovie::eventShowPlayersMustExitMessage)
        .def("eventShowProcessingRequestMessage", &UVehicleSpawnStationGFxMovie::eventShowProcessingRequestMessage)
        .def("eventShowPleaseWaitMessage", &UVehicleSpawnStationGFxMovie::eventShowPleaseWaitMessage)
        .def("eventShowNoVehiclesMessage", &UVehicleSpawnStationGFxMovie::eventShowNoVehiclesMessage)
        .def("eventStart", &UVehicleSpawnStationGFxMovie::eventStart)
        .def("GetCurrentMeshScale", &UVehicleSpawnStationGFxMovie::GetCurrentMeshScale)
        .def("IntroAlpha", &UVehicleSpawnStationGFxMovie::IntroAlpha)
        .def("PlayingIntro", &UVehicleSpawnStationGFxMovie::PlayingIntro)
        .def("GetBoundsFor", &UVehicleSpawnStationGFxMovie::GetBoundsFor)
        .def("InitVehicleChoiceModules", &UVehicleSpawnStationGFxMovie::InitVehicleChoiceModules)
        .def("HandleVehicleFamilySelection", &UVehicleSpawnStationGFxMovie::HandleVehicleFamilySelection)
        .def("SetCurrentStage", &UVehicleSpawnStationGFxMovie::SetCurrentStage)
        .def("UpdateSkinsOnVehicleTypeChange", &UVehicleSpawnStationGFxMovie::UpdateSkinsOnVehicleTypeChange)
        .def("CacheDefinitions", &UVehicleSpawnStationGFxMovie::CacheDefinitions)
        .def("CacheVehicleFamilies", &UVehicleSpawnStationGFxMovie::CacheVehicleFamilies)
          ;
}