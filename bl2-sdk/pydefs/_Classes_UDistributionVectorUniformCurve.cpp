#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorUniformCurve(py::object m)
{
    py::class_< UDistributionVectorUniformCurve,  UDistributionVector   >(m, "UDistributionVectorUniformCurve")
        .def_readwrite("ConstantCurve", &UDistributionVectorUniformCurve::ConstantCurve)
        .def("StaticClass", &UDistributionVectorUniformCurve::StaticClass, py::return_value_policy::reference)
          ;
}