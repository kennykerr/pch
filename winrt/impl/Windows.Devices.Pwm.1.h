// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Devices_Pwm_1_H
#define WINRT_Windows_Devices_Pwm_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Pwm.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Pwm
{
    struct __declspec(empty_bases) IPwmController :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPwmController>
    {
        IPwmController(std::nullptr_t = nullptr) noexcept {}
        IPwmController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPwmController(IPwmController const&) noexcept = default;
        IPwmController(IPwmController&&) noexcept = default;
        IPwmController& operator=(IPwmController const&) & noexcept = default;
        IPwmController& operator=(IPwmController&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPwmControllerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPwmControllerStatics>
    {
        IPwmControllerStatics(std::nullptr_t = nullptr) noexcept {}
        IPwmControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPwmControllerStatics(IPwmControllerStatics const&) noexcept = default;
        IPwmControllerStatics(IPwmControllerStatics&&) noexcept = default;
        IPwmControllerStatics& operator=(IPwmControllerStatics const&) & noexcept = default;
        IPwmControllerStatics& operator=(IPwmControllerStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPwmControllerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPwmControllerStatics2>
    {
        IPwmControllerStatics2(std::nullptr_t = nullptr) noexcept {}
        IPwmControllerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPwmControllerStatics2(IPwmControllerStatics2 const&) noexcept = default;
        IPwmControllerStatics2(IPwmControllerStatics2&&) noexcept = default;
        IPwmControllerStatics2& operator=(IPwmControllerStatics2 const&) & noexcept = default;
        IPwmControllerStatics2& operator=(IPwmControllerStatics2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPwmControllerStatics3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPwmControllerStatics3>
    {
        IPwmControllerStatics3(std::nullptr_t = nullptr) noexcept {}
        IPwmControllerStatics3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPwmControllerStatics3(IPwmControllerStatics3 const&) noexcept = default;
        IPwmControllerStatics3(IPwmControllerStatics3&&) noexcept = default;
        IPwmControllerStatics3& operator=(IPwmControllerStatics3 const&) & noexcept = default;
        IPwmControllerStatics3& operator=(IPwmControllerStatics3&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPwmPin :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPwmPin>,
        impl::require<Windows::Devices::Pwm::IPwmPin, Windows::Foundation::IClosable>
    {
        IPwmPin(std::nullptr_t = nullptr) noexcept {}
        IPwmPin(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPwmPin(IPwmPin const&) noexcept = default;
        IPwmPin(IPwmPin&&) noexcept = default;
        IPwmPin& operator=(IPwmPin const&) & noexcept = default;
        IPwmPin& operator=(IPwmPin&&) & noexcept = default;
    };
}
#endif
