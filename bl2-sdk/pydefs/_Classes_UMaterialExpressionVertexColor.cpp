#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionVertexColor(py::module &m)
{
    py::class_< UMaterialExpressionVertexColor,  UMaterialExpression   >(m, "UMaterialExpressionVertexColor")
		.def_static("StaticClass", &UMaterialExpressionVertexColor::StaticClass, py::return_value_policy::reference)
          ;
}