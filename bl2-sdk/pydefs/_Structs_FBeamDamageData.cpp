#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBeamDamageData(py::object m)
{
    py::class_< FBeamDamageData >(m, "FBeamDamageData")
        .def_readwrite("Momentum", &FBeamDamageData::Momentum)
        .def_readwrite("Amount", &FBeamDamageData::Amount)
        .def_readwrite("Radius", &FBeamDamageData::Radius)
        .def_readwrite("Source", &FBeamDamageData::Source)
        .def_readwrite("TypeDefinition", &FBeamDamageData::TypeDefinition)
        .def_readwrite("BarrelSourceTime", &FBeamDamageData::BarrelSourceTime)
        .def_readwrite("PlantSourceTime", &FBeamDamageData::PlantSourceTime)
        .def_readwrite("DamageCauser", &FBeamDamageData::DamageCauser)
  ;
}