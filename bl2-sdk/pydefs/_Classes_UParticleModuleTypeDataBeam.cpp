#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataBeam(py::module &m)
{
    py::class_< UParticleModuleTypeDataBeam,  UParticleModule   >(m, "UParticleModuleTypeDataBeam")
		.def_static("StaticClass", &UParticleModuleTypeDataBeam::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BeamMethod", &UParticleModuleTypeDataBeam::BeamMethod)
        .def_readwrite("EndPointMethod", &UParticleModuleTypeDataBeam::EndPointMethod)
        .def_readwrite("Distance", &UParticleModuleTypeDataBeam::Distance)
        .def_readwrite("EndPoint", &UParticleModuleTypeDataBeam::EndPoint)
        .def_readwrite("TessellationFactor", &UParticleModuleTypeDataBeam::TessellationFactor)
        .def_readwrite("EmitterStrength", &UParticleModuleTypeDataBeam::EmitterStrength)
        .def_readwrite("TargetStrength", &UParticleModuleTypeDataBeam::TargetStrength)
        .def_readwrite("EndPointDirection", &UParticleModuleTypeDataBeam::EndPointDirection)
        .def_readwrite("TextureTile", &UParticleModuleTypeDataBeam::TextureTile)
          ;
}