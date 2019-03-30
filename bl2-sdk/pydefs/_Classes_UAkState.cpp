#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkState(py::module &m)
{
    py::class_< UAkState,  UAkObject   >(m, "UAkState")
		.def_static("StaticClass", &UAkState::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StateGroup", &UAkState::StateGroup)
          ;
}