#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXNavMeshPathModifier_SmoothTurns(py::module &m)
{
    py::class_< UGBXNavMeshPathModifier_SmoothTurns,  UGBXNavMeshPathModifier   >(m, "UGBXNavMeshPathModifier_SmoothTurns")
		.def_static("StaticClass", &UGBXNavMeshPathModifier_SmoothTurns::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TooSharpThreshold", &UGBXNavMeshPathModifier_SmoothTurns::TooSharpThreshold)
        .def_readwrite("MaxAdjustThreshold", &UGBXNavMeshPathModifier_SmoothTurns::MaxAdjustThreshold)
        .def_readwrite("CornerLengthModifier", &UGBXNavMeshPathModifier_SmoothTurns::CornerLengthModifier)
        .def_readwrite("TestInterval", &UGBXNavMeshPathModifier_SmoothTurns::TestInterval)
          ;
}