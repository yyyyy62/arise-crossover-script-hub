#pragma once
#include <cstdint>

namespace arise_crossover_script_hub {
inline constexpr const char* kModuleName = "arise-crossover-script-hub";
inline constexpr const char* kBuildSalt = "015a39b6a92ef178";
struct RuntimeConfig {
    uint32_t target_fps = 144;
    float fov_radius = 65.0f;
    float smooth_factor = 1.45f;
    bool draw_bounds = true;
};
} // namespace arise_crossover_script_hub
