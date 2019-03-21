#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULeviathanChannel(py::object m)
{
    py::class_< ULeviathanChannel,  UChannel   >(m, "ULeviathanChannel")
        .def("StaticClass", &ULeviathanChannel::StaticClass, py::return_value_policy::reference)
          ;
}