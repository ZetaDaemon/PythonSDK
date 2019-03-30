#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULANServerBrowserGFxMovie(py::module &m)
{
    py::class_< ULANServerBrowserGFxMovie,  UWillowGFxMovie3D   >(m, "ULANServerBrowserGFxMovie")
		.def_static("StaticClass", &ULANServerBrowserGFxMovie::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ServerBrowserObj", &ULANServerBrowserGFxMovie::ServerBrowserObj)
        .def_readwrite("HeaderTextPath", &ULANServerBrowserGFxMovie::HeaderTextPath)
        .def_readwrite("TooltipTextPath", &ULANServerBrowserGFxMovie::TooltipTextPath)
        .def_readwrite("MatchmakingResult", &ULANServerBrowserGFxMovie::MatchmakingResult)
        .def_readwrite("TimerPauseTicker", &ULANServerBrowserGFxMovie::TimerPauseTicker)
        .def_readwrite("IncompatibleGameVersionsServerIndex", &ULANServerBrowserGFxMovie::IncompatibleGameVersionsServerIndex)
        .def_readwrite("SortType", &ULANServerBrowserGFxMovie::SortType)
        .def_readwrite("SortDirection", &ULANServerBrowserGFxMovie::SortDirection)
        .def_readwrite("SortedResults", &ULANServerBrowserGFxMovie::SortedResults)
        .def("GetFriendlyGameVersionString", &ULANServerBrowserGFxMovie::GetFriendlyGameVersionString)
        .def("extLANServerBrowserOnLoad", &ULANServerBrowserGFxMovie::extLANServerBrowserOnLoad)
        .def("HandleServerBrowserSortDirectionButtonClick", &ULANServerBrowserGFxMovie::HandleServerBrowserSortDirectionButtonClick)
        .def("HandleServerBrowserSortTypeButtonClick", &ULANServerBrowserGFxMovie::HandleServerBrowserSortTypeButtonClick)
        .def("GetSortDirectionString", &ULANServerBrowserGFxMovie::GetSortDirectionString)
        .def("GetSortString", &ULANServerBrowserGFxMovie::GetSortString)
        .def("SetTooltips", &ULANServerBrowserGFxMovie::SetTooltips)
        .def("SetSearchingForGames", &ULANServerBrowserGFxMovie::SetSearchingForGames)
        .def("SetHeaderText", &ULANServerBrowserGFxMovie::SetHeaderText)
        .def("SetBrowserType", &ULANServerBrowserGFxMovie::SetBrowserType)
        .def("SortResults", &ULANServerBrowserGFxMovie::SortResults)
        .def("PopulateSearchResults", &ULANServerBrowserGFxMovie::PopulateSearchResults)
        .def("DebugGenerateSearchResults", &ULANServerBrowserGFxMovie::DebugGenerateSearchResults)
        .def("SetSort", &ULANServerBrowserGFxMovie::SetSort)
        .def("FilterResults", &ULANServerBrowserGFxMovie::FilterResults)
        .def("OnFindGamesComplete", &ULANServerBrowserGFxMovie::OnFindGamesComplete)
        .def("CancelGameSearch", &ULANServerBrowserGFxMovie::CancelGameSearch)
        .def("FindGames", &ULANServerBrowserGFxMovie::FindGames)
        .def("OnJoinMatchComplete", &ULANServerBrowserGFxMovie::OnJoinMatchComplete)
        .def("OnDestroyGameForMatchJoinComplete", &ULANServerBrowserGFxMovie::OnDestroyGameForMatchJoinComplete)
        .def("JoinMatchmakingSession", &ULANServerBrowserGFxMovie::JoinMatchmakingSession)
        .def("HandleServerBrowserItemClick", &ULANServerBrowserGFxMovie::HandleServerBrowserItemClick)
        .def("GetNextSortType", &ULANServerBrowserGFxMovie::GetNextSortType)
        .def("HandleInputKey", &ULANServerBrowserGFxMovie::HandleInputKey)
        .def("BeginClose", &ULANServerBrowserGFxMovie::BeginClose)
        .def("eventOnClose", &ULANServerBrowserGFxMovie::eventOnClose)
        .def("Start", &ULANServerBrowserGFxMovie::Start)
          ;
}