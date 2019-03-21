#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNameBasedObjectPath(py::object m)
{
    py::class_< FNameBasedObjectPath >(m, "FNameBasedObjectPath")
        .def_readwrite("IsSubobjectMask", &FNameBasedObjectPath::IsSubobjectMask)
  ;
}