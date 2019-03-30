#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActorToLookAt(py::module &m)
{
    py::class_< FActorToLookAt >(m, "FActorToLookAt")
        .def_readwrite("Actor", &FActorToLookAt::Actor)
        .def_readwrite("Rating", &FActorToLookAt::Rating)
        .def_readwrite("EnteredTime", &FActorToLookAt::EnteredTime)
        .def_readwrite("LastKnownDistance", &FActorToLookAt::LastKnownDistance)
        .def_readwrite("StartTimeBeingLookedAt", &FActorToLookAt::StartTimeBeingLookedAt)
  ;
}