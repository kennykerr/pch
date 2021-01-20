// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Devices_Adc_2_H
#define WINRT_Windows_Devices_Adc_2_H
#include "winrt/impl/Windows.Devices.Adc.Provider.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Adc.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Adc
{
    struct __declspec(empty_bases) AdcChannel : Windows::Devices::Adc::IAdcChannel
    {
        AdcChannel(std::nullptr_t) noexcept {}
        AdcChannel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Adc::IAdcChannel(ptr, take_ownership_from_abi) {}
        AdcChannel(AdcChannel const&) noexcept = default;
        AdcChannel(AdcChannel&&) noexcept = default;
        AdcChannel& operator=(AdcChannel const&) & noexcept = default;
        AdcChannel& operator=(AdcChannel&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AdcController : Windows::Devices::Adc::IAdcController
    {
        AdcController(std::nullptr_t) noexcept {}
        AdcController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Adc::IAdcController(ptr, take_ownership_from_abi) {}
        AdcController(AdcController const&) noexcept = default;
        AdcController(AdcController&&) noexcept = default;
        AdcController& operator=(AdcController const&) & noexcept = default;
        AdcController& operator=(AdcController&&) & noexcept = default;
        static auto GetControllersAsync(Windows::Devices::Adc::Provider::IAdcProvider const& provider);
        static auto GetDefaultAsync();
    };
}
#endif
