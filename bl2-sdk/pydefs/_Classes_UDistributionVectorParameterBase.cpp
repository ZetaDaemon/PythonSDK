#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorParameterBase(py::module &m)
{
    py::class_< UDistributionVectorParameterBase,  UDistributionVectorConstant   >(m, "UDistributionVectorParameterBase")
		.def_static("StaticClass", &UDistributionVectorParameterBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ParameterName", &UDistributionVectorParameterBase::ParameterName)
        .def_readwrite("MinInput", &UDistributionVectorParameterBase::MinInput)
        .def_readwrite("MaxInput", &UDistributionVectorParameterBase::MaxInput)
        .def_readwrite("MinOutput", &UDistributionVectorParameterBase::MinOutput)
        .def_readwrite("MaxOutput", &UDistributionVectorParameterBase::MaxOutput)
          ;
}