#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerK(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerK,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerK")
		.def_static("StaticClass", &UCustomizationUsage_ExtraPlayerK::StaticClass, py::return_value_policy::reference)
          ;
}