#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryInteractiveObject(py::module &m)
{
    py::class_< UActorFactoryInteractiveObject,  UActorFactory   >(m, "UActorFactoryInteractiveObject")
		.def_static("StaticClass", &UActorFactoryInteractiveObject::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Definition", &UActorFactoryInteractiveObject::Definition)
          ;
}