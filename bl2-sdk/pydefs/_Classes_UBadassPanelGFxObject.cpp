#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBadassPanelGFxObject(py::object m)
{
    py::class_< UBadassPanelGFxObject,  UBaseInventoryPanelGFxObject   >(m, "UBadassPanelGFxObject")
        .def_readwrite("BA_RankString", &UBadassPanelGFxObject::BA_RankString)
        .def_readwrite("BA_TokensString", &UBadassPanelGFxObject::BA_TokensString)
        .def_readwrite("BA_RedeemTokenButtonString", &UBadassPanelGFxObject::BA_RedeemTokenButtonString)
        .def_readwrite("TokenUpPct", &UBadassPanelGFxObject::TokenUpPct)
        .def_readwrite("RedeemButton", &UBadassPanelGFxObject::RedeemButton)
        .def_readwrite("TooltipsText_Cancel", &UBadassPanelGFxObject::TooltipsText_Cancel)
        .def_readwrite("TooltipsText_Close", &UBadassPanelGFxObject::TooltipsText_Close)
        .def_readwrite("TooltipsText_Redeem", &UBadassPanelGFxObject::TooltipsText_Redeem)
        .def_readwrite("TooltipsText_Reward", &UBadassPanelGFxObject::TooltipsText_Reward)
        .def_readwrite("BonusStatsHeader", &UBadassPanelGFxObject::BonusStatsHeader)
        .def_readwrite("BonusStatsDisabledHeader", &UBadassPanelGFxObject::BonusStatsDisabledHeader)
        .def_readwrite("RewardChoiceHeader", &UBadassPanelGFxObject::RewardChoiceHeader)
        .def_readwrite("RewardString", &UBadassPanelGFxObject::RewardString)
        .def_readwrite("TooltipsText_ActivateBonusStats", &UBadassPanelGFxObject::TooltipsText_ActivateBonusStats)
        .def_readwrite("TooltipsText_DeactivateBonusStats", &UBadassPanelGFxObject::TooltipsText_DeactivateBonusStats)
        .def("StaticClass", &UBadassPanelGFxObject::StaticClass, py::return_value_policy::reference)
        .def("UpdateTrainingBox", &UBadassPanelGFxObject::UpdateTrainingBox)
        .def("OnRewardFocused", &UBadassPanelGFxObject::OnRewardFocused)
        .def("OnRedeemTokensFocused", &UBadassPanelGFxObject::OnRedeemTokensFocused)
        .def("UpdateRedeemTokensFocusedTooltips", &UBadassPanelGFxObject::UpdateRedeemTokensFocusedTooltips)
        .def("ToggleBadassSkill", &UBadassPanelGFxObject::ToggleBadassSkill)
        .def("PanelOnInputKey", &UBadassPanelGFxObject::PanelOnInputKey)
        .def("BlockInput", &UBadassPanelGFxObject::BlockInput)
        .def("DeferInput", &UBadassPanelGFxObject::DeferInput)
        .def("UpdateCounters", &UBadassPanelGFxObject::UpdateCounters)
        .def("UpdateBars", &UBadassPanelGFxObject::UpdateBars)
        .def("Tick", &UBadassPanelGFxObject::Tick)
        .def("SetBonusStatsText", &UBadassPanelGFxObject::SetBonusStatsText)
        .def("OnRewardSelected", &UBadassPanelGFxObject::OnRewardSelected)
        .def("OnReward5Selected", &UBadassPanelGFxObject::OnReward5Selected)
        .def("OnReward4Selected", &UBadassPanelGFxObject::OnReward4Selected)
        .def("OnReward3Selected", &UBadassPanelGFxObject::OnReward3Selected)
        .def("OnReward2Selected", &UBadassPanelGFxObject::OnReward2Selected)
        .def("OnReward1Selected", &UBadassPanelGFxObject::OnReward1Selected)
        .def("OnRedeemTokensClicked", &UBadassPanelGFxObject::OnRedeemTokensClicked)
        .def("UpdatePercents", &UBadassPanelGFxObject::UpdatePercents)
        .def("HideCurrencies", &UBadassPanelGFxObject::HideCurrencies)
        .def("UpdateCurrencies", &UBadassPanelGFxObject::UpdateCurrencies)
        .def("SetUpBadassPanel", &UBadassPanelGFxObject::SetUpBadassPanel)
        .def("SetInitialButtonStates", &UBadassPanelGFxObject::SetInitialButtonStates)
        .def("extOnSetActive", &UBadassPanelGFxObject::extOnSetActive)
        .def("OnSetInactive", &UBadassPanelGFxObject::OnSetInactive)
        .def("Init", &UBadassPanelGFxObject::Init)
          ;
}