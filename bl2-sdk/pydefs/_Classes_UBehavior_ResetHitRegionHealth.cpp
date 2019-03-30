#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ResetHitRegionHealth(py::module &m)
{
    py::class_< UBehavior_ResetHitRegionHealth,  UBehaviorBase   >(m, "UBehavior_ResetHitRegionHealth")
		.def_static("StaticClass", &UBehavior_ResetHitRegionHealth::StaticClass, py::return_value_policy::reference)
        .def_readwrite("HitRegion", &UBehavior_ResetHitRegionHealth::HitRegion)
        .def("ApplyBehaviorToContext", &UBehavior_ResetHitRegionHealth::ApplyBehaviorToContext)
          ;
}