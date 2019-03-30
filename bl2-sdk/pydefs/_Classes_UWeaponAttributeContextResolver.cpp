#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponAttributeContextResolver(py::module &m)
{
    py::class_< UWeaponAttributeContextResolver,  UAttributeContextResolver   >(m, "UWeaponAttributeContextResolver")
		.def_static("StaticClass", &UWeaponAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}