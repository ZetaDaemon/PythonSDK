#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowPlayerCamera(py::module &m)
{
    py::class_< AWillowPlayerCamera,  AGearboxCameraBasic   >(m, "AWillowPlayerCamera")
		.def_static("StaticClass", &AWillowPlayerCamera::StaticClass, py::return_value_policy::reference)
        .def("UpdateViewTarget", &AWillowPlayerCamera::UpdateViewTarget)
        .def("PostBeginPlay", &AWillowPlayerCamera::PostBeginPlay)
          ;
}