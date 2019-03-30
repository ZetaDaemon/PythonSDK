#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_CameraAnim(py::module &m)
{
    py::class_< UPlayerBehavior_CameraAnim,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_CameraAnim")
		.def_static("StaticClass", &UPlayerBehavior_CameraAnim::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Anim", &UPlayerBehavior_CameraAnim::Anim)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_CameraAnim::ApplyBehaviorToContext)
          ;
}