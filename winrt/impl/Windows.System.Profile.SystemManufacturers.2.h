// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_System_Profile_SystemManufacturers_2_H
#define WINRT_Windows_System_Profile_SystemManufacturers_2_H
#include "winrt/impl/Windows.System.Profile.SystemManufacturers.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Profile::SystemManufacturers
{
    struct __declspec(empty_bases) OemSupportInfo : Windows::System::Profile::SystemManufacturers::IOemSupportInfo
    {
        OemSupportInfo(std::nullptr_t) noexcept {}
        OemSupportInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Profile::SystemManufacturers::IOemSupportInfo(ptr, take_ownership_from_abi) {}
        OemSupportInfo(OemSupportInfo const&) noexcept = default;
        OemSupportInfo(OemSupportInfo&&) noexcept = default;
        OemSupportInfo& operator=(OemSupportInfo const&) & noexcept = default;
        OemSupportInfo& operator=(OemSupportInfo&&) & noexcept = default;
    };
    struct SmbiosInformation
    {
        SmbiosInformation() = delete;
        [[nodiscard]] static auto SerialNumber();
    };
    struct __declspec(empty_bases) SystemSupportDeviceInfo : Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo
    {
        SystemSupportDeviceInfo(std::nullptr_t) noexcept {}
        SystemSupportDeviceInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Profile::SystemManufacturers::ISystemSupportDeviceInfo(ptr, take_ownership_from_abi) {}
        SystemSupportDeviceInfo(SystemSupportDeviceInfo const&) noexcept = default;
        SystemSupportDeviceInfo(SystemSupportDeviceInfo&&) noexcept = default;
        SystemSupportDeviceInfo& operator=(SystemSupportDeviceInfo const&) & noexcept = default;
        SystemSupportDeviceInfo& operator=(SystemSupportDeviceInfo&&) & noexcept = default;
    };
    struct SystemSupportInfo
    {
        SystemSupportInfo() = delete;
        [[nodiscard]] static auto LocalSystemEdition();
        [[nodiscard]] static auto OemSupportInfo();
        [[nodiscard]] static auto LocalDeviceInfo();
    };
}
#endif
