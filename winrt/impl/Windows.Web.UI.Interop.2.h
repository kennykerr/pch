// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Web_UI_Interop_2_H
#define WINRT_Windows_Web_UI_Interop_2_H
#include "winrt/impl/Windows.Web.UI.1.h"
#include "winrt/impl/Windows.Web.UI.Interop.1.h"
WINRT_EXPORT namespace winrt::Windows::Web::UI::Interop
{
    struct __declspec(empty_bases) WebViewControl : Windows::Web::UI::IWebViewControl,
        impl::require<WebViewControl, Windows::Web::UI::Interop::IWebViewControlSite, Windows::Web::UI::IWebViewControl2, Windows::Web::UI::Interop::IWebViewControlSite2>
    {
        WebViewControl(std::nullptr_t) noexcept {}
        WebViewControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControl(ptr, take_ownership_from_abi) {}
        WebViewControl(WebViewControl const&) noexcept = default;
        WebViewControl(WebViewControl&&) noexcept = default;
        WebViewControl& operator=(WebViewControl const&) & noexcept = default;
        WebViewControl& operator=(WebViewControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlAcceleratorKeyPressedEventArgs : Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs
    {
        WebViewControlAcceleratorKeyPressedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlAcceleratorKeyPressedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlAcceleratorKeyPressedEventArgs(WebViewControlAcceleratorKeyPressedEventArgs const&) noexcept = default;
        WebViewControlAcceleratorKeyPressedEventArgs(WebViewControlAcceleratorKeyPressedEventArgs&&) noexcept = default;
        WebViewControlAcceleratorKeyPressedEventArgs& operator=(WebViewControlAcceleratorKeyPressedEventArgs const&) & noexcept = default;
        WebViewControlAcceleratorKeyPressedEventArgs& operator=(WebViewControlAcceleratorKeyPressedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlMoveFocusRequestedEventArgs : Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs
    {
        WebViewControlMoveFocusRequestedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlMoveFocusRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlMoveFocusRequestedEventArgs(WebViewControlMoveFocusRequestedEventArgs const&) noexcept = default;
        WebViewControlMoveFocusRequestedEventArgs(WebViewControlMoveFocusRequestedEventArgs&&) noexcept = default;
        WebViewControlMoveFocusRequestedEventArgs& operator=(WebViewControlMoveFocusRequestedEventArgs const&) & noexcept = default;
        WebViewControlMoveFocusRequestedEventArgs& operator=(WebViewControlMoveFocusRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlProcess : Windows::Web::UI::Interop::IWebViewControlProcess
    {
        WebViewControlProcess(std::nullptr_t) noexcept {}
        WebViewControlProcess(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::Interop::IWebViewControlProcess(ptr, take_ownership_from_abi) {}
        WebViewControlProcess();
        explicit WebViewControlProcess(Windows::Web::UI::Interop::WebViewControlProcessOptions const& processOptions);
        WebViewControlProcess(WebViewControlProcess const&) noexcept = default;
        WebViewControlProcess(WebViewControlProcess&&) noexcept = default;
        WebViewControlProcess& operator=(WebViewControlProcess const&) & noexcept = default;
        WebViewControlProcess& operator=(WebViewControlProcess&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlProcessOptions : Windows::Web::UI::Interop::IWebViewControlProcessOptions
    {
        WebViewControlProcessOptions(std::nullptr_t) noexcept {}
        WebViewControlProcessOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::Interop::IWebViewControlProcessOptions(ptr, take_ownership_from_abi) {}
        WebViewControlProcessOptions();
        WebViewControlProcessOptions(WebViewControlProcessOptions const&) noexcept = default;
        WebViewControlProcessOptions(WebViewControlProcessOptions&&) noexcept = default;
        WebViewControlProcessOptions& operator=(WebViewControlProcessOptions const&) & noexcept = default;
        WebViewControlProcessOptions& operator=(WebViewControlProcessOptions&&) & noexcept = default;
    };
}
#endif
