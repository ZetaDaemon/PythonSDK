#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleOrbitBase(py::module &m)
{
    py::class_< UParticleModuleOrbitBase,  UParticleModule   >(m, "UParticleModuleOrbitBase")
		.def_static("StaticClass", &UParticleModuleOrbitBase::StaticClass, py::return_value_policy::reference)
          ;
}