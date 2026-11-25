#include "../include/arise_crossover_script_hub_runtime.hpp"
#include <windows.h>
#include <atomic>

namespace arise_crossover_script_hub {
static std::atomic<bool> g_running{true};
void PollHotkeys(bool& menu_open) noexcept {
    if (GetAsyncKeyState(VK_INSERT) & 1) menu_open = !menu_open;
    if (GetAsyncKeyState(VK_END) & 1) g_running.store(false, std::memory_order_relaxed);
}
} // namespace arise_crossover_script_hub

int main() {
    bool menu_open = true;
    while (arise_crossover_script_hub::g_running.load(std::memory_order_relaxed)) {
        arise_crossover_script_hub::PollHotkeys(menu_open);
        Sleep(6);
    }
    return 0;
}
