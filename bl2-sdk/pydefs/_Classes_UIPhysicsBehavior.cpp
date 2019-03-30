#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIPhysicsBehavior(py::module &m)
{
    py::class_< UIPhysicsBehavior,  UInterface   >(m, "UIPhysicsBehavior")
		.def_static("StaticClass", &UIPhysicsBehavior::StaticClass, py::return_value_policy::reference)
        .def("GetDamageVector", &UIPhysicsBehavior::GetDamageVector)
        .def("GetRigidBodyMesh", &UIPhysicsBehavior::GetRigidBodyMesh, py::return_value_policy::reference)
          ;
}