#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AZoneInfo(py::module &m)
{
    py::class_< AZoneInfo,  AActor   >(m, "AZoneInfo")
		.def_static("StaticClass", &AZoneInfo::StaticClass, py::return_value_policy::reference)
        .def_readwrite("KillZ", &AZoneInfo::KillZ)
        .def_readwrite("SoftKill", &AZoneInfo::SoftKill)
        .def_readwrite("KillZDamageType", &AZoneInfo::KillZDamageType)
          ;
}