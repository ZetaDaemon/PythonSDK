#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_CameraFade(py::module &m)
{
    py::class_< USeqAct_CameraFade,  USequenceAction   >(m, "USeqAct_CameraFade")
		.def_static("StaticClass", &USeqAct_CameraFade::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FadeColor", &USeqAct_CameraFade::FadeColor)
        .def_readwrite("FadeAlpha", &USeqAct_CameraFade::FadeAlpha)
        .def_readwrite("FadeOpacity", &USeqAct_CameraFade::FadeOpacity)
        .def_readwrite("FadeTime", &USeqAct_CameraFade::FadeTime)
        .def_readwrite("FadeTimeRemaining", &USeqAct_CameraFade::FadeTimeRemaining)
        .def_readwrite("CachedPCs", &USeqAct_CameraFade::CachedPCs)
        .def("eventGetObjClassVersion", &USeqAct_CameraFade::eventGetObjClassVersion)
          ;
}