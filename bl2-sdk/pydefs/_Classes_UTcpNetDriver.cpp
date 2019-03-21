#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTcpNetDriver(py::object m)
{
    py::class_< UTcpNetDriver,  UNetDriver   >(m, "UTcpNetDriver")
        .def("StaticClass", &UTcpNetDriver::StaticClass, py::return_value_policy::reference)
          ;
}