// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_UI_Notifications_Management_2_H
#define WINRT_Windows_UI_Notifications_Management_2_H
#include "winrt/impl/Windows.UI.Notifications.Management.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Notifications::Management
{
    struct __declspec(empty_bases) UserNotificationListener : Windows::UI::Notifications::Management::IUserNotificationListener
    {
        UserNotificationListener(std::nullptr_t) noexcept {}
        UserNotificationListener(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Notifications::Management::IUserNotificationListener(ptr, take_ownership_from_abi) {}
        UserNotificationListener(UserNotificationListener const&) noexcept = default;
        UserNotificationListener(UserNotificationListener&&) noexcept = default;
        UserNotificationListener& operator=(UserNotificationListener const&) & noexcept = default;
        UserNotificationListener& operator=(UserNotificationListener&&) & noexcept = default;
        [[nodiscard]] static auto Current();
    };
}
#endif
