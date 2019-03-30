#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionObjectRadius(py::module &m)
{
    py::class_< UMaterialExpressionObjectRadius,  UMaterialExpression   >(m, "UMaterialExpressionObjectRadius")
		.def_static("StaticClass", &UMaterialExpressionObjectRadius::StaticClass, py::return_value_policy::reference)
          ;
}