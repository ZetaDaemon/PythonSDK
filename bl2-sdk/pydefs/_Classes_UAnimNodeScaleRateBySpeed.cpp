#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeScaleRateBySpeed(py::module &m)
{
    py::class_< UAnimNodeScaleRateBySpeed,  UAnimNodeBlendBase   >(m, "UAnimNodeScaleRateBySpeed")
		.def_static("StaticClass", &UAnimNodeScaleRateBySpeed::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BaseSpeed", &UAnimNodeScaleRateBySpeed::BaseSpeed)
        .def_readwrite("ScaleByValue", &UAnimNodeScalePlayRate::ScaleByValue)
          ;
}