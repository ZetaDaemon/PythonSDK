#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_InterpPawn(py::module &m)
{
    py::class_< UWillowSeqAct_InterpPawn,  USeqAct_Latent   >(m, "UWillowSeqAct_InterpPawn")
		.def_static("StaticClass", &UWillowSeqAct_InterpPawn::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InterpSpeed", &UWillowSeqAct_InterpPawn::InterpSpeed)
        .def_readwrite("Goal", &UWillowSeqAct_InterpPawn::Goal)
          ;
}