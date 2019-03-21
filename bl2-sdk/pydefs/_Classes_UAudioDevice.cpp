#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAudioDevice(py::object m)
{
    py::class_< UAudioDevice,  USubsystem   >(m, "UAudioDevice")
        .def_readwrite("MaxChannels", &UAudioDevice::MaxChannels)
        .def_readwrite("CommonAudioPoolSize", &UAudioDevice::CommonAudioPoolSize)
        .def_readwrite("LowPassFilterResonance", &UAudioDevice::LowPassFilterResonance)
        .def_readwrite("MinCompressedDurationEditor", &UAudioDevice::MinCompressedDurationEditor)
        .def_readwrite("MinCompressedDurationGame", &UAudioDevice::MinCompressedDurationGame)
        .def_readwrite("ChirpInSoundNodeWaveName", &UAudioDevice::ChirpInSoundNodeWaveName)
        .def_readwrite("ChirpInSoundNodeWave", &UAudioDevice::ChirpInSoundNodeWave)
        .def_readwrite("ChirpOutSoundNodeWaveName", &UAudioDevice::ChirpOutSoundNodeWaveName)
        .def_readwrite("ChirpOutSoundNodeWave", &UAudioDevice::ChirpOutSoundNodeWave)
        .def_readwrite("CommonAudioPool", &UAudioDevice::CommonAudioPool)
        .def_readwrite("CommonAudioPoolFreeBytes", &UAudioDevice::CommonAudioPoolFreeBytes)
        .def_readwrite("AudioComponents", &UAudioDevice::AudioComponents)
        .def_readwrite("Sources", &UAudioDevice::Sources)
        .def_readwrite("FreeSources", &UAudioDevice::FreeSources)
        .def_readwrite("Listeners", &UAudioDevice::Listeners)
        .def_readwrite("CurrentTick", &UAudioDevice::CurrentTick)
        .def_readwrite("Effects", &UAudioDevice::Effects)
        .def_readwrite("BaseSoundModeName", &UAudioDevice::BaseSoundModeName)
        .def_readwrite("CurrentMode", &UAudioDevice::CurrentMode)
        .def_readwrite("SoundModeStartTime", &UAudioDevice::SoundModeStartTime)
        .def_readwrite("SoundModeFadeInStartTime", &UAudioDevice::SoundModeFadeInStartTime)
        .def_readwrite("SoundModeFadeInEndTime", &UAudioDevice::SoundModeFadeInEndTime)
        .def_readwrite("SoundModeEndTime", &UAudioDevice::SoundModeEndTime)
        .def_readwrite("ListenerVolumeIndex", &UAudioDevice::ListenerVolumeIndex)
        .def_readwrite("ListenerInteriorSettings", &UAudioDevice::ListenerInteriorSettings)
        .def_readwrite("InteriorStartTime", &UAudioDevice::InteriorStartTime)
        .def_readwrite("InteriorEndTime", &UAudioDevice::InteriorEndTime)
        .def_readwrite("ExteriorEndTime", &UAudioDevice::ExteriorEndTime)
        .def_readwrite("InteriorLPFEndTime", &UAudioDevice::InteriorLPFEndTime)
        .def_readwrite("ExteriorLPFEndTime", &UAudioDevice::ExteriorLPFEndTime)
        .def_readwrite("InteriorVolumeInterp", &UAudioDevice::InteriorVolumeInterp)
        .def_readwrite("InteriorLPFInterp", &UAudioDevice::InteriorLPFInterp)
        .def_readwrite("ExteriorVolumeInterp", &UAudioDevice::ExteriorVolumeInterp)
        .def_readwrite("ExteriorLPFInterp", &UAudioDevice::ExteriorLPFInterp)
        .def_readwrite("TestAudioComponent", &UAudioDevice::TestAudioComponent)
        .def_readwrite("TextToSpeech", &UAudioDevice::TextToSpeech)
        .def_readwrite("DebugState", &UAudioDevice::DebugState)
        .def_readwrite("TransientMasterVolume", &UAudioDevice::TransientMasterVolume)
        .def_readwrite("LastUpdateTime", &UAudioDevice::LastUpdateTime)
        .def("StaticClass", &UAudioDevice::StaticClass, py::return_value_policy::reference)
        .def("FindSoundClass", &UAudioDevice::FindSoundClass, py::return_value_policy::reference)
        .def("SetSoundMode", &UAudioDevice::SetSoundMode)
          ;
}