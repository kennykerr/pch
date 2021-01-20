// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Management_2_H
#define WINRT_Windows_Management_2_H
#include "winrt/impl/Windows.Management.1.h"
WINRT_EXPORT namespace winrt::Windows::Management
{
    struct __declspec(empty_bases) MdmAlert : Windows::Management::IMdmAlert
    {
        MdmAlert(std::nullptr_t) noexcept {}
        MdmAlert(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::IMdmAlert(ptr, take_ownership_from_abi) {}
        MdmAlert();
        MdmAlert(MdmAlert const&) noexcept = default;
        MdmAlert(MdmAlert&&) noexcept = default;
        MdmAlert& operator=(MdmAlert const&) & noexcept = default;
        MdmAlert& operator=(MdmAlert&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MdmSession : Windows::Management::IMdmSession
    {
        MdmSession(std::nullptr_t) noexcept {}
        MdmSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Management::IMdmSession(ptr, take_ownership_from_abi) {}
        MdmSession(MdmSession const&) noexcept = default;
        MdmSession(MdmSession&&) noexcept = default;
        MdmSession& operator=(MdmSession const&) & noexcept = default;
        MdmSession& operator=(MdmSession&&) & noexcept = default;
    };
    struct MdmSessionManager
    {
        MdmSessionManager() = delete;
        [[nodiscard]] static auto SessionIds();
        static auto TryCreateSession();
        static auto DeleteSessionById(param::hstring const& sessionId);
        static auto GetSessionById(param::hstring const& sessionId);
    };
}
#endif
