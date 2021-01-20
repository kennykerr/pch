// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_UI_Shell_1_H
#define WINRT_Windows_UI_Shell_1_H
#include "winrt/impl/Windows.UI.Shell.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    struct __declspec(empty_bases) IAdaptiveCard :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveCard>
    {
        IAdaptiveCard(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveCard(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAdaptiveCard(IAdaptiveCard const&) noexcept = default;
        IAdaptiveCard(IAdaptiveCard&&) noexcept = default;
        IAdaptiveCard& operator=(IAdaptiveCard const&) & noexcept = default;
        IAdaptiveCard& operator=(IAdaptiveCard&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAdaptiveCardBuilderStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveCardBuilderStatics>
    {
        IAdaptiveCardBuilderStatics(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveCardBuilderStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAdaptiveCardBuilderStatics(IAdaptiveCardBuilderStatics const&) noexcept = default;
        IAdaptiveCardBuilderStatics(IAdaptiveCardBuilderStatics&&) noexcept = default;
        IAdaptiveCardBuilderStatics& operator=(IAdaptiveCardBuilderStatics const&) & noexcept = default;
        IAdaptiveCardBuilderStatics& operator=(IAdaptiveCardBuilderStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISecurityAppManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISecurityAppManager>
    {
        ISecurityAppManager(std::nullptr_t = nullptr) noexcept {}
        ISecurityAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISecurityAppManager(ISecurityAppManager const&) noexcept = default;
        ISecurityAppManager(ISecurityAppManager&&) noexcept = default;
        ISecurityAppManager& operator=(ISecurityAppManager const&) & noexcept = default;
        ISecurityAppManager& operator=(ISecurityAppManager&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITaskbarManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManager>
    {
        ITaskbarManager(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITaskbarManager(ITaskbarManager const&) noexcept = default;
        ITaskbarManager(ITaskbarManager&&) noexcept = default;
        ITaskbarManager& operator=(ITaskbarManager const&) & noexcept = default;
        ITaskbarManager& operator=(ITaskbarManager&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITaskbarManager2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManager2>,
        impl::require<Windows::UI::Shell::ITaskbarManager2, Windows::UI::Shell::ITaskbarManager>
    {
        ITaskbarManager2(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManager2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITaskbarManager2(ITaskbarManager2 const&) noexcept = default;
        ITaskbarManager2(ITaskbarManager2&&) noexcept = default;
        ITaskbarManager2& operator=(ITaskbarManager2 const&) & noexcept = default;
        ITaskbarManager2& operator=(ITaskbarManager2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITaskbarManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManagerStatics>
    {
        ITaskbarManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITaskbarManagerStatics(ITaskbarManagerStatics const&) noexcept = default;
        ITaskbarManagerStatics(ITaskbarManagerStatics&&) noexcept = default;
        ITaskbarManagerStatics& operator=(ITaskbarManagerStatics const&) & noexcept = default;
        ITaskbarManagerStatics& operator=(ITaskbarManagerStatics&&) & noexcept = default;
    };
}
#endif