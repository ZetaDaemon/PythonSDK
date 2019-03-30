#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxTornadoAngularForceFieldCapsule(py::module &m)
{
    py::class_< ANxTornadoAngularForceFieldCapsule,  ANxTornadoAngularForceField   >(m, "ANxTornadoAngularForceFieldCapsule")
		.def_static("StaticClass", &ANxTornadoAngularForceFieldCapsule::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RenderComponent", &ANxTornadoAngularForceFieldCapsule::RenderComponent)
          ;
}