#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCameraConeComponent(py::module &m)
{
    py::class_< UCameraConeComponent,  UPrimitiveComponent   >(m, "UCameraConeComponent")
		.def_static("StaticClass", &UCameraConeComponent::StaticClass, py::return_value_policy::reference)
          ;
}