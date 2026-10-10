// Precompiled header: common, low-churn includes shared across the plugin.

#pragma once

#include <RE/Skyrim.h>
#include <REL/Relocation.h>
#include <SKSE/SKSE.h>

#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/msvc_sink.h>

// msvc_sink.h pulls in <windows.h>; wingdi.h maps GetObject to GetObjectW and breaks CommonLib calls.
#undef GetObject

#include <format>
#include <string_view>
#include <vector>

using namespace std::literals;

namespace logger = SKSE::log;
namespace util = SKSE::stl;

#define DLLEXPORT __declspec(dllexport)
