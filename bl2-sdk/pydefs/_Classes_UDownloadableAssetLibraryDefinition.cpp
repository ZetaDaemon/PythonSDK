#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableAssetLibraryDefinition(py::object m)
{
    py::class_< UDownloadableAssetLibraryDefinition,  UGBXDefinition   >(m, "UDownloadableAssetLibraryDefinition")
        .def_readwrite("VfTable_IIDlcLicenseObject", &UDownloadableAssetLibraryDefinition::VfTable_IIDlcLicenseObject)
        .def_readwrite("PackageDef", &UDownloadableAssetLibraryDefinition::PackageDef)
        .def("StaticClass", &UDownloadableAssetLibraryDefinition::StaticClass, py::return_value_policy::reference)
          ;
}