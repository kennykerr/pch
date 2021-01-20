// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Devices_Display_2_H
#define WINRT_Windows_Devices_Display_2_H
#include "winrt/impl/Windows.Devices.Display.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Display
{
    struct __declspec(empty_bases) DisplayMonitor : Windows::Devices::Display::IDisplayMonitor
    {
        DisplayMonitor(std::nullptr_t) noexcept {}
        DisplayMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Display::IDisplayMonitor(ptr, take_ownership_from_abi) {}
        DisplayMonitor(DisplayMonitor const&) noexcept = default;
        DisplayMonitor(DisplayMonitor&&) noexcept = default;
        DisplayMonitor& operator=(DisplayMonitor const&) & noexcept = default;
        DisplayMonitor& operator=(DisplayMonitor&&) & noexcept = default;
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto FromInterfaceIdAsync(param::hstring const& deviceInterfaceId);
    };
}
#endif
