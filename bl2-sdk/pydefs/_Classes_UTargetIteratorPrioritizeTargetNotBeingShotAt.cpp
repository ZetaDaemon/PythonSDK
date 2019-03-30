#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeTargetNotBeingShotAt(py::module &m)
{
    py::class_< UTargetIteratorPrioritizeTargetNotBeingShotAt,  UTI_Prioritize   >(m, "UTargetIteratorPrioritizeTargetNotBeingShotAt")
		.def_static("StaticClass", &UTargetIteratorPrioritizeTargetNotBeingShotAt::StaticClass, py::return_value_policy::reference)
          ;
}