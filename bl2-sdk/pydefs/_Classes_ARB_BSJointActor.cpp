#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_BSJointActor(py::module &m)
{
    py::class_< ARB_BSJointActor,  ARB_ConstraintActor   >(m, "ARB_BSJointActor")
		.def_static("StaticClass", &ARB_BSJointActor::StaticClass, py::return_value_policy::reference)
          ;
}