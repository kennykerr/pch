// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Devices_2_H
#define WINRT_Windows_Devices_2_H
#include "winrt/impl/Windows.Devices.Adc.Provider.1.h"
#include "winrt/impl/Windows.Devices.Gpio.Provider.1.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.1.h"
#include "winrt/impl/Windows.Devices.Pwm.Provider.1.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.1.h"
#include "winrt/impl/Windows.Devices.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices
{
    struct __declspec(empty_bases) LowLevelDevicesAggregateProvider : Windows::Devices::ILowLevelDevicesAggregateProvider
    {
        LowLevelDevicesAggregateProvider(std::nullptr_t) noexcept {}
        LowLevelDevicesAggregateProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::ILowLevelDevicesAggregateProvider(ptr, take_ownership_from_abi) {}
        LowLevelDevicesAggregateProvider(Windows::Devices::Adc::Provider::IAdcControllerProvider const& adc, Windows::Devices::Pwm::Provider::IPwmControllerProvider const& pwm, Windows::Devices::Gpio::Provider::IGpioControllerProvider const& gpio, Windows::Devices::I2c::Provider::II2cControllerProvider const& i2c, Windows::Devices::Spi::Provider::ISpiControllerProvider const& spi);
        LowLevelDevicesAggregateProvider(LowLevelDevicesAggregateProvider const&) noexcept = default;
        LowLevelDevicesAggregateProvider(LowLevelDevicesAggregateProvider&&) noexcept = default;
        LowLevelDevicesAggregateProvider& operator=(LowLevelDevicesAggregateProvider const&) & noexcept = default;
        LowLevelDevicesAggregateProvider& operator=(LowLevelDevicesAggregateProvider&&) & noexcept = default;
    };
    struct __declspec(empty_bases) LowLevelDevicesController : Windows::Devices::ILowLevelDevicesController
    {
        LowLevelDevicesController(std::nullptr_t) noexcept {}
        LowLevelDevicesController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::ILowLevelDevicesController(ptr, take_ownership_from_abi) {}
        LowLevelDevicesController(LowLevelDevicesController const&) noexcept = default;
        LowLevelDevicesController(LowLevelDevicesController&&) noexcept = default;
        LowLevelDevicesController& operator=(LowLevelDevicesController const&) & noexcept = default;
        LowLevelDevicesController& operator=(LowLevelDevicesController&&) & noexcept = default;
        [[nodiscard]] static auto DefaultProvider();
        static auto DefaultProvider(Windows::Devices::ILowLevelDevicesAggregateProvider const& value);
    };
}
#endif
