#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawLightConeComponent(py::module &m)
{
    py::class_< UDrawLightConeComponent,  UPrimitiveComponent   >(m, "UDrawLightConeComponent")
		.def_static("StaticClass", &UDrawLightConeComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ConeColor", &UDrawConeComponent::ConeColor)
        .def_readwrite("ConeRadius", &UDrawConeComponent::ConeRadius)
        .def_readwrite("ConeAngle", &UDrawConeComponent::ConeAngle)
        .def_readwrite("ConeSides", &UDrawConeComponent::ConeSides)
          ;
}