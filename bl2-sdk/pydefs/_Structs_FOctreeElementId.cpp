#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOctreeElementId(py::module &m)
{
    py::class_< FOctreeElementId >(m, "FOctreeElementId")
        .def_readwrite("Node", &FOctreeElementId::Node)
        .def_readwrite("ElementIndex", &FOctreeElementId::ElementIndex)
  ;
}