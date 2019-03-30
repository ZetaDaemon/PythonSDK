#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGbxMessageManager(py::module &m)
{
    py::class_< UGbxMessageManager,  UObject   >(m, "UGbxMessageManager")
		.def_static("StaticClass", &UGbxMessageManager::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Listeners", &UGbxMessageManager::Listeners)
        .def_readwrite("MessagesToSend", &UGbxMessageManager::MessagesToSend)
        .def_readwrite("SentMessagesRecently", &UGbxMessageManager::SentMessagesRecently)
        .def_readwrite("DistributionInterval", &UGbxMessageManager::DistributionInterval)
        .def_readwrite("MaxMessagesPerDistribution", &UGbxMessageManager::MaxMessagesPerDistribution)
        .def("RemoveListener", &UGbxMessageManager::RemoveListener)
        .def("AddListener", &UGbxMessageManager::AddListener)
        .def("PostMessage", &UGbxMessageManager::PostMessage)
        .def("AllocateMessage", &UGbxMessageManager::AllocateMessage, py::return_value_policy::reference)
          ;
}