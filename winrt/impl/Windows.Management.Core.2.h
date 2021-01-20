// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Management_Core_2_H
#define WINRT_Windows_Management_Core_2_H
#include "winrt/impl/Windows.Management.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Management::Core
{
    struct __declspec(empty_bases) ApplicationDataManager : Windows::Management::Core::IApplicationDataManager
    {
        ApplicationDataManager(std::nullptr_t) noexcept {}
        ApplicationDataManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::Core::IApplicationDataManager(ptr, take_ownership_from_abi) {}
        ApplicationDataManager(ApplicationDataManager const&) noexcept = default;
        ApplicationDataManager(ApplicationDataManager&&) noexcept = default;
        ApplicationDataManager& operator=(ApplicationDataManager const&) & noexcept = default;
        ApplicationDataManager& operator=(ApplicationDataManager&&) & noexcept = default;
        static auto CreateForPackageFamily(param::hstring const& packageFamilyName);
    };
}
#endif
