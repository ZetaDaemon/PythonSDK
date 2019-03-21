#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillTreeGFxObject(py::object m)
{
    py::class_< USkillTreeGFxObject,  UGFxObject   >(m, "USkillTreeGFxObject")
        .def_readwrite("Artifacts", &USkillTreeGFxObject::Artifacts)
        .def_readwrite("NoArtifactsDescription", &USkillTreeGFxObject::NoArtifactsDescription)
        .def_readwrite("ArtifactsDescription", &USkillTreeGFxObject::ArtifactsDescription)
        .def_readwrite("EquipArtifact", &USkillTreeGFxObject::EquipArtifact)
        .def_readwrite("NoArtifactEquippedDescription", &USkillTreeGFxObject::NoArtifactEquippedDescription)
        .def_readwrite("NoArtifactOption", &USkillTreeGFxObject::NoArtifactOption)
        .def_readwrite("AdrenalineRush", &USkillTreeGFxObject::AdrenalineRush)
        .def_readwrite("Level", &USkillTreeGFxObject::Level)
        .def_readwrite("SkillModifierNextLevel", &USkillTreeGFxObject::SkillModifierNextLevel)
        .def_readwrite("ClassModBonusString", &USkillTreeGFxObject::ClassModBonusString)
        .def_readwrite("SkillPoints_Sing", &USkillTreeGFxObject::SkillPoints_Sing)
        .def_readwrite("SkillPoints_Plur", &USkillTreeGFxObject::SkillPoints_Plur)
        .def_readwrite("ClassModUntrainedString", &USkillTreeGFxObject::ClassModUntrainedString)
        .def_readwrite("SkillPointsRemainingString", &USkillTreeGFxObject::SkillPointsRemainingString)
        .def_readwrite("MovieDef", &USkillTreeGFxObject::MovieDef)
        .def_readwrite("Movie", &USkillTreeGFxObject::Movie)
        .def_readwrite("WPCOwner", &USkillTreeGFxObject::WPCOwner)
        .def_readwrite("NumSkillPoints", &USkillTreeGFxObject::NumSkillPoints)
        .def_readwrite("ProgressionMaskSpeed", &USkillTreeGFxObject::ProgressionMaskSpeed)
        .def_readwrite("FinalFirstBranchProgressionMask", &USkillTreeGFxObject::FinalFirstBranchProgressionMask)
        .def_readwrite("CurrentFirstBranchProgressionMask", &USkillTreeGFxObject::CurrentFirstBranchProgressionMask)
        .def_readwrite("FinalLeftBranchProgressionMask", &USkillTreeGFxObject::FinalLeftBranchProgressionMask)
        .def_readwrite("CurrentLeftBranchProgressionMask", &USkillTreeGFxObject::CurrentLeftBranchProgressionMask)
        .def_readwrite("FinalMiddleBranchProgressionMask", &USkillTreeGFxObject::FinalMiddleBranchProgressionMask)
        .def_readwrite("CurrentMiddleBranchProgressionMask", &USkillTreeGFxObject::CurrentMiddleBranchProgressionMask)
        .def_readwrite("FinalRightBranchProgressionMask", &USkillTreeGFxObject::FinalRightBranchProgressionMask)
        .def_readwrite("CurrentRightBranchProgressionMask", &USkillTreeGFxObject::CurrentRightBranchProgressionMask)
        .def_readwrite("EquippedArtifactIndex", &USkillTreeGFxObject::EquippedArtifactIndex)
        .def_readwrite("ArtifactList", &USkillTreeGFxObject::ArtifactList)
        .def_readwrite("CurrentArtifactIndex", &USkillTreeGFxObject::CurrentArtifactIndex)
        .def_readwrite("PreviousSkillNameColor", &USkillTreeGFxObject::PreviousSkillNameColor)
        .def_readwrite("SkillIntermediateGradeColor", &USkillTreeGFxObject::SkillIntermediateGradeColor)
        .def_readwrite("SkillMaxGradeColor", &USkillTreeGFxObject::SkillMaxGradeColor)
        .def_readwrite("SkillLockedTextColor", &USkillTreeGFxObject::SkillLockedTextColor)
        .def_readwrite("SkillNextGradeModifierTextHTML", &USkillTreeGFxObject::SkillNextGradeModifierTextHTML)
        .def_readwrite("SkillLockedModifierTextHTML", &USkillTreeGFxObject::SkillLockedModifierTextHTML)
        .def_readwrite("CurrentSkill", &USkillTreeGFxObject::CurrentSkill)
        .def_readwrite("CurrentSkill_Rollover", &USkillTreeGFxObject::CurrentSkill_Rollover)
        .def_readwrite("CellNavPref", &USkillTreeGFxObject::CellNavPref)
        .def_readwrite("BranchNavPref", &USkillTreeGFxObject::BranchNavPref)
        .def_readwrite("OverrideBranchNum", &USkillTreeGFxObject::OverrideBranchNum)
        .def_readwrite("Tooltips_SpendPoints", &USkillTreeGFxObject::Tooltips_SpendPoints)
        .def_readwrite("Tooltips_Overview", &USkillTreeGFxObject::Tooltips_Overview)
        .def_readwrite("Tooltips_Cancel", &USkillTreeGFxObject::Tooltips_Cancel)
        .def_readwrite("InformationBox", &USkillTreeGFxObject::InformationBox)
        .def_readwrite("HACK_PrevBranchForClick", &USkillTreeGFxObject::HACK_PrevBranchForClick)
        .def_readwrite("bSetProgressTree1", &USkillTreeGFxObject::bSetProgressTree1)
        .def_readwrite("bSetProgressTree2", &USkillTreeGFxObject::bSetProgressTree2)
        .def_readwrite("bSetProgressTree3", &USkillTreeGFxObject::bSetProgressTree3)
        .def_readwrite("bTree1Init", &USkillTreeGFxObject::bTree1Init)
        .def_readwrite("bTree2Init", &USkillTreeGFxObject::bTree2Init)
        .def_readwrite("bTree3Init", &USkillTreeGFxObject::bTree3Init)
        .def("StaticClass", &USkillTreeGFxObject::StaticClass, py::return_value_policy::reference)
        .def("eventOnCellRolledOver", &USkillTreeGFxObject::eventOnCellRolledOver)
        .def("CellRolledOver", &USkillTreeGFxObject::CellRolledOver)
        .def("eventOnCellClicked", &USkillTreeGFxObject::eventOnCellClicked)
        .def("CellClicked", &USkillTreeGFxObject::CellClicked)
        .def("GetPlayerClassMod", &USkillTreeGFxObject::GetPlayerClassMod, py::return_value_policy::reference)
        .def("Flash_UpdateArtifactSelection", &USkillTreeGFxObject::Flash_UpdateArtifactSelection)
        .def("Flash_PopulateArtifactList", &USkillTreeGFxObject::Flash_PopulateArtifactList)
        .def("BuildArtifactList", &USkillTreeGFxObject::BuildArtifactList)
        .def("GetSkillDescriptionForGrade", &USkillTreeGFxObject::GetSkillDescriptionForGrade)
        .def("SetSkillNameColorToUnlocked", &USkillTreeGFxObject::SetSkillNameColorToUnlocked)
        .def("SetSkillNameColorToLocked", &USkillTreeGFxObject::SetSkillNameColorToLocked)
        .def("GetSkillNameColorPath", &USkillTreeGFxObject::GetSkillNameColorPath)
        .def("Flash_SetSkillPointProperties_AS", &USkillTreeGFxObject::Flash_SetSkillPointProperties_AS)
        .def("Flash_SetSkillPointProperties", &USkillTreeGFxObject::Flash_SetSkillPointProperties)
        .def("Flash_SetCharacter_AS", &USkillTreeGFxObject::Flash_SetCharacter_AS)
        .def("Flash_SetCharacter", &USkillTreeGFxObject::Flash_SetCharacter)
        .def("EquipSelectedArtifact", &USkillTreeGFxObject::EquipSelectedArtifact)
        .def("RequestRespec", &USkillTreeGFxObject::RequestRespec)
        .def("HandleArtifactChange", &USkillTreeGFxObject::HandleArtifactChange)
        .def("HandleSkillTreeReset", &USkillTreeGFxObject::HandleSkillTreeReset)
        .def("HandleSkillPointsChange", &USkillTreeGFxObject::HandleSkillPointsChange)
        .def("PlaySpendFlourish", &USkillTreeGFxObject::PlaySpendFlourish)
        .def("HandleSkillGradeChange", &USkillTreeGFxObject::HandleSkillGradeChange)
        .def("RequestSkillUpgrade", &USkillTreeGFxObject::RequestSkillUpgrade)
        .def("CanUpgradeSkill", &USkillTreeGFxObject::CanUpgradeSkill)
        .def("Nav_Back", &USkillTreeGFxObject::Nav_Back)
        .def("ToggleOverviewMode", &USkillTreeGFxObject::ToggleOverviewMode)
        .def("Reset", &USkillTreeGFxObject::Reset)
        .def("HoverSkillCell", &USkillTreeGFxObject::HoverSkillCell)
        .def("Activate", &USkillTreeGFxObject::Activate)
        .def("ArtifactSelect", &USkillTreeGFxObject::ArtifactSelect)
        .def("Nav_DownArtifact", &USkillTreeGFxObject::Nav_DownArtifact)
        .def("Nav_UpArtifact", &USkillTreeGFxObject::Nav_UpArtifact)
        .def("UpdateSkillIcon", &USkillTreeGFxObject::UpdateSkillIcon)
        .def("UpdateAllSkillIcons_Branch", &USkillTreeGFxObject::UpdateAllSkillIcons_Branch)
        .def("UpdateAllSkillIcons", &USkillTreeGFxObject::UpdateAllSkillIcons)
        .def("SetSkillIconVisibility", &USkillTreeGFxObject::SetSkillIconVisibility)
        .def("UpdateInfoBox", &USkillTreeGFxObject::UpdateInfoBox)
        .def("UpdateBranchLocations", &USkillTreeGFxObject::UpdateBranchLocations)
        .def("UpdateBranchDepths", &USkillTreeGFxObject::UpdateBranchDepths)
        .def("eventGetEffectiveCurrentBranchNumber", &USkillTreeGFxObject::eventGetEffectiveCurrentBranchNumber)
        .def("UpdateTooltips", &USkillTreeGFxObject::UpdateTooltips)
        .def("PostNav", &USkillTreeGFxObject::PostNav)
        .def("GetHighlightClip", &USkillTreeGFxObject::GetHighlightClip, py::return_value_policy::reference)
        .def("GetCellClip", &USkillTreeGFxObject::GetCellClip, py::return_value_policy::reference)
        .def("GetUICell", &USkillTreeGFxObject::GetUICell)
        .def("Navigate", &USkillTreeGFxObject::Navigate, py::return_value_policy::reference)
        .def("Nav_Right", &USkillTreeGFxObject::Nav_Right)
        .def("Nav_Left", &USkillTreeGFxObject::Nav_Left)
        .def("Nav_Down", &USkillTreeGFxObject::Nav_Down)
        .def("Nav_Up", &USkillTreeGFxObject::Nav_Up)
        .def("HandleInputKey", &USkillTreeGFxObject::HandleInputKey)
        .def("extInitTree", &USkillTreeGFxObject::extInitTree)
        .def("ClearCellMap", &USkillTreeGFxObject::ClearCellMap)
        .def("HandleClose", &USkillTreeGFxObject::HandleClose)
        .def("Init", &USkillTreeGFxObject::Init)
        .def("HandleOpen", &USkillTreeGFxObject::HandleOpen)
        .def("CalculateBranchProgression", &USkillTreeGFxObject::CalculateBranchProgression)
        .def("Flash_SendInitialSkillData", &USkillTreeGFxObject::Flash_SendInitialSkillData)
          ;
}