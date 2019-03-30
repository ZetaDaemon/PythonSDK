#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumVictory(py::module &m)
{
    py::class_< UWillowSeqAct_ColiseumVictory,  USequenceAction   >(m, "UWillowSeqAct_ColiseumVictory")
		.def_static("StaticClass", &UWillowSeqAct_ColiseumVictory::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_ColiseumVictory::eventActivated)
          ;
}