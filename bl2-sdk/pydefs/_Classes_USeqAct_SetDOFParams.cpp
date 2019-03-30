#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetDOFParams(py::module &m)
{
    py::class_< USeqAct_SetDOFParams,  USeqAct_Latent   >(m, "USeqAct_SetDOFParams")
		.def_static("StaticClass", &USeqAct_SetDOFParams::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FalloffExponent", &USeqAct_SetDOFParams::FalloffExponent)
        .def_readwrite("BlurKernelSize", &USeqAct_SetDOFParams::BlurKernelSize)
        .def_readwrite("MaxNearBlurAmount", &USeqAct_SetDOFParams::MaxNearBlurAmount)
        .def_readwrite("MinBlurAmount", &USeqAct_SetDOFParams::MinBlurAmount)
        .def_readwrite("MaxFarBlurAmount", &USeqAct_SetDOFParams::MaxFarBlurAmount)
        .def_readwrite("FocusInnerRadius", &USeqAct_SetDOFParams::FocusInnerRadius)
        .def_readwrite("FocusDistance", &USeqAct_SetDOFParams::FocusDistance)
        .def_readwrite("FocusPosition", &USeqAct_SetDOFParams::FocusPosition)
        .def_readwrite("InterpolateSeconds", &USeqAct_SetDOFParams::InterpolateSeconds)
        .def_readwrite("InterpolateElapsed", &USeqAct_SetDOFParams::InterpolateElapsed)
        .def_readwrite("OldFalloffExponent", &USeqAct_SetDOFParams::OldFalloffExponent)
        .def_readwrite("OldBlurKernelSize", &USeqAct_SetDOFParams::OldBlurKernelSize)
        .def_readwrite("OldMaxNearBlurAmount", &USeqAct_SetDOFParams::OldMaxNearBlurAmount)
        .def_readwrite("OldMinBlurAmount", &USeqAct_SetDOFParams::OldMinBlurAmount)
        .def_readwrite("OldMaxFarBlurAmount", &USeqAct_SetDOFParams::OldMaxFarBlurAmount)
        .def_readwrite("OldFocusInnerRadius", &USeqAct_SetDOFParams::OldFocusInnerRadius)
        .def_readwrite("OldFocusDistance", &USeqAct_SetDOFParams::OldFocusDistance)
        .def_readwrite("OldFocusPosition", &USeqAct_SetDOFParams::OldFocusPosition)
          ;
}