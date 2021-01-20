// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_UI_WindowManagement_2_H
#define WINRT_Windows_UI_WindowManagement_2_H
#include "winrt/impl/Windows.UI.WindowManagement.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement
{
    struct __declspec(empty_bases) AppWindow : Windows::UI::WindowManagement::IAppWindow
    {
        AppWindow(std::nullptr_t) noexcept {}
        AppWindow(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IAppWindow(ptr, take_ownership_from_abi) {}
        AppWindow(AppWindow const&) noexcept = default;
        AppWindow(AppWindow&&) noexcept = default;
        AppWindow& operator=(AppWindow const&) & noexcept = default;
        AppWindow& operator=(AppWindow&&) & noexcept = default;
        static auto TryCreateAsync();
        static auto ClearAllPersistedState();
        static auto ClearPersistedState(param::hstring const& key);
    };
    struct __declspec(empty_bases) AppWindowChangedEventArgs : Windows::UI::WindowManagement::IAppWindowChangedEventArgs
    {
        AppWindowChangedEventArgs(std::nullptr_t) noexcept {}
        AppWindowChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IAppWindowChangedEventArgs(ptr, take_ownership_from_abi) {}
        AppWindowChangedEventArgs(AppWindowChangedEventArgs const&) noexcept = default;
        AppWindowChangedEventArgs(AppWindowChangedEventArgs&&) noexcept = default;
        AppWindowChangedEventArgs& operator=(AppWindowChangedEventArgs const&) & noexcept = default;
        AppWindowChangedEventArgs& operator=(AppWindowChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppWindowCloseRequestedEventArgs : Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs
    {
        AppWindowCloseRequestedEventArgs(std::nullptr_t) noexcept {}
        AppWindowCloseRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IAppWindowCloseRequestedEventArgs(ptr, take_ownership_from_abi) {}
        AppWindowCloseRequestedEventArgs(AppWindowCloseRequestedEventArgs const&) noexcept = default;
        AppWindowCloseRequestedEventArgs(AppWindowCloseRequestedEventArgs&&) noexcept = default;
        AppWindowCloseRequestedEventArgs& operator=(AppWindowCloseRequestedEventArgs const&) & noexcept = default;
        AppWindowCloseRequestedEventArgs& operator=(AppWindowCloseRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppWindowClosedEventArgs : Windows::UI::WindowManagement::IAppWindowClosedEventArgs
    {
        AppWindowClosedEventArgs(std::nullptr_t) noexcept {}
        AppWindowClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IAppWindowClosedEventArgs(ptr, take_ownership_from_abi) {}
        AppWindowClosedEventArgs(AppWindowClosedEventArgs const&) noexcept = default;
        AppWindowClosedEventArgs(AppWindowClosedEventArgs&&) noexcept = default;
        AppWindowClosedEventArgs& operator=(AppWindowClosedEventArgs const&) & noexcept = default;
        AppWindowClosedEventArgs& operator=(AppWindowClosedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppWindowFrame : Windows::UI::WindowManagement::IAppWindowFrame,
        impl::require<AppWindowFrame, Windows::UI::WindowManagement::IAppWindowFrameStyle>
    {
        AppWindowFrame(std::nullptr_t) noexcept {}
        AppWindowFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IAppWindowFrame(ptr, take_ownership_from_abi) {}
        AppWindowFrame(AppWindowFrame const&) noexcept = default;
        AppWindowFrame(AppWindowFrame&&) noexcept = default;
        AppWindowFrame& operator=(AppWindowFrame const&) & noexcept = default;
        AppWindowFrame& operator=(AppWindowFrame&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppWindowPlacement : Windows::UI::WindowManagement::IAppWindowPlacement
    {
        AppWindowPlacement(std::nullptr_t) noexcept {}
        AppWindowPlacement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IAppWindowPlacement(ptr, take_ownership_from_abi) {}
        AppWindowPlacement(AppWindowPlacement const&) noexcept = default;
        AppWindowPlacement(AppWindowPlacement&&) noexcept = default;
        AppWindowPlacement& operator=(AppWindowPlacement const&) & noexcept = default;
        AppWindowPlacement& operator=(AppWindowPlacement&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppWindowPresentationConfiguration : Windows::UI::WindowManagement::IAppWindowPresentationConfiguration
    {
        AppWindowPresentationConfiguration(std::nullptr_t) noexcept {}
        AppWindowPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IAppWindowPresentationConfiguration(ptr, take_ownership_from_abi) {}
        AppWindowPresentationConfiguration(AppWindowPresentationConfiguration const&) noexcept = default;
        AppWindowPresentationConfiguration(AppWindowPresentationConfiguration&&) noexcept = default;
        AppWindowPresentationConfiguration& operator=(AppWindowPresentationConfiguration const&) & noexcept = default;
        AppWindowPresentationConfiguration& operator=(AppWindowPresentationConfiguration&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppWindowPresenter : Windows::UI::WindowManagement::IAppWindowPresenter
    {
        AppWindowPresenter(std::nullptr_t) noexcept {}
        AppWindowPresenter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IAppWindowPresenter(ptr, take_ownership_from_abi) {}
        AppWindowPresenter(AppWindowPresenter const&) noexcept = default;
        AppWindowPresenter(AppWindowPresenter&&) noexcept = default;
        AppWindowPresenter& operator=(AppWindowPresenter const&) & noexcept = default;
        AppWindowPresenter& operator=(AppWindowPresenter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppWindowTitleBar : Windows::UI::WindowManagement::IAppWindowTitleBar,
        impl::require<AppWindowTitleBar, Windows::UI::WindowManagement::IAppWindowTitleBarVisibility>
    {
        AppWindowTitleBar(std::nullptr_t) noexcept {}
        AppWindowTitleBar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IAppWindowTitleBar(ptr, take_ownership_from_abi) {}
        AppWindowTitleBar(AppWindowTitleBar const&) noexcept = default;
        AppWindowTitleBar(AppWindowTitleBar&&) noexcept = default;
        AppWindowTitleBar& operator=(AppWindowTitleBar const&) & noexcept = default;
        AppWindowTitleBar& operator=(AppWindowTitleBar&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppWindowTitleBarOcclusion : Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion
    {
        AppWindowTitleBarOcclusion(std::nullptr_t) noexcept {}
        AppWindowTitleBarOcclusion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IAppWindowTitleBarOcclusion(ptr, take_ownership_from_abi) {}
        AppWindowTitleBarOcclusion(AppWindowTitleBarOcclusion const&) noexcept = default;
        AppWindowTitleBarOcclusion(AppWindowTitleBarOcclusion&&) noexcept = default;
        AppWindowTitleBarOcclusion& operator=(AppWindowTitleBarOcclusion const&) & noexcept = default;
        AppWindowTitleBarOcclusion& operator=(AppWindowTitleBarOcclusion&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CompactOverlayPresentationConfiguration : Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration,
        impl::base<CompactOverlayPresentationConfiguration, Windows::UI::WindowManagement::AppWindowPresentationConfiguration>,
        impl::require<CompactOverlayPresentationConfiguration, Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        CompactOverlayPresentationConfiguration(std::nullptr_t) noexcept {}
        CompactOverlayPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::ICompactOverlayPresentationConfiguration(ptr, take_ownership_from_abi) {}
        CompactOverlayPresentationConfiguration();
        CompactOverlayPresentationConfiguration(CompactOverlayPresentationConfiguration const&) noexcept = default;
        CompactOverlayPresentationConfiguration(CompactOverlayPresentationConfiguration&&) noexcept = default;
        CompactOverlayPresentationConfiguration& operator=(CompactOverlayPresentationConfiguration const&) & noexcept = default;
        CompactOverlayPresentationConfiguration& operator=(CompactOverlayPresentationConfiguration&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DefaultPresentationConfiguration : Windows::UI::WindowManagement::IDefaultPresentationConfiguration,
        impl::base<DefaultPresentationConfiguration, Windows::UI::WindowManagement::AppWindowPresentationConfiguration>,
        impl::require<DefaultPresentationConfiguration, Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        DefaultPresentationConfiguration(std::nullptr_t) noexcept {}
        DefaultPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IDefaultPresentationConfiguration(ptr, take_ownership_from_abi) {}
        DefaultPresentationConfiguration();
        DefaultPresentationConfiguration(DefaultPresentationConfiguration const&) noexcept = default;
        DefaultPresentationConfiguration(DefaultPresentationConfiguration&&) noexcept = default;
        DefaultPresentationConfiguration& operator=(DefaultPresentationConfiguration const&) & noexcept = default;
        DefaultPresentationConfiguration& operator=(DefaultPresentationConfiguration&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DisplayRegion : Windows::UI::WindowManagement::IDisplayRegion
    {
        DisplayRegion(std::nullptr_t) noexcept {}
        DisplayRegion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IDisplayRegion(ptr, take_ownership_from_abi) {}
        DisplayRegion(DisplayRegion const&) noexcept = default;
        DisplayRegion(DisplayRegion&&) noexcept = default;
        DisplayRegion& operator=(DisplayRegion const&) & noexcept = default;
        DisplayRegion& operator=(DisplayRegion&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FullScreenPresentationConfiguration : Windows::UI::WindowManagement::IFullScreenPresentationConfiguration,
        impl::base<FullScreenPresentationConfiguration, Windows::UI::WindowManagement::AppWindowPresentationConfiguration>,
        impl::require<FullScreenPresentationConfiguration, Windows::UI::WindowManagement::IAppWindowPresentationConfiguration>
    {
        FullScreenPresentationConfiguration(std::nullptr_t) noexcept {}
        FullScreenPresentationConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IFullScreenPresentationConfiguration(ptr, take_ownership_from_abi) {}
        FullScreenPresentationConfiguration();
        FullScreenPresentationConfiguration(FullScreenPresentationConfiguration const&) noexcept = default;
        FullScreenPresentationConfiguration(FullScreenPresentationConfiguration&&) noexcept = default;
        FullScreenPresentationConfiguration& operator=(FullScreenPresentationConfiguration const&) & noexcept = default;
        FullScreenPresentationConfiguration& operator=(FullScreenPresentationConfiguration&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WindowingEnvironment : Windows::UI::WindowManagement::IWindowingEnvironment
    {
        WindowingEnvironment(std::nullptr_t) noexcept {}
        WindowingEnvironment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IWindowingEnvironment(ptr, take_ownership_from_abi) {}
        WindowingEnvironment(WindowingEnvironment const&) noexcept = default;
        WindowingEnvironment(WindowingEnvironment&&) noexcept = default;
        WindowingEnvironment& operator=(WindowingEnvironment const&) & noexcept = default;
        WindowingEnvironment& operator=(WindowingEnvironment&&) & noexcept = default;
        static auto FindAll();
        static auto FindAll(Windows::UI::WindowManagement::WindowingEnvironmentKind const& kind);
    };
    struct __declspec(empty_bases) WindowingEnvironmentAddedEventArgs : Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs
    {
        WindowingEnvironmentAddedEventArgs(std::nullptr_t) noexcept {}
        WindowingEnvironmentAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IWindowingEnvironmentAddedEventArgs(ptr, take_ownership_from_abi) {}
        WindowingEnvironmentAddedEventArgs(WindowingEnvironmentAddedEventArgs const&) noexcept = default;
        WindowingEnvironmentAddedEventArgs(WindowingEnvironmentAddedEventArgs&&) noexcept = default;
        WindowingEnvironmentAddedEventArgs& operator=(WindowingEnvironmentAddedEventArgs const&) & noexcept = default;
        WindowingEnvironmentAddedEventArgs& operator=(WindowingEnvironmentAddedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WindowingEnvironmentChangedEventArgs : Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs
    {
        WindowingEnvironmentChangedEventArgs(std::nullptr_t) noexcept {}
        WindowingEnvironmentChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IWindowingEnvironmentChangedEventArgs(ptr, take_ownership_from_abi) {}
        WindowingEnvironmentChangedEventArgs(WindowingEnvironmentChangedEventArgs const&) noexcept = default;
        WindowingEnvironmentChangedEventArgs(WindowingEnvironmentChangedEventArgs&&) noexcept = default;
        WindowingEnvironmentChangedEventArgs& operator=(WindowingEnvironmentChangedEventArgs const&) & noexcept = default;
        WindowingEnvironmentChangedEventArgs& operator=(WindowingEnvironmentChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WindowingEnvironmentRemovedEventArgs : Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs
    {
        WindowingEnvironmentRemovedEventArgs(std::nullptr_t) noexcept {}
        WindowingEnvironmentRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::IWindowingEnvironmentRemovedEventArgs(ptr, take_ownership_from_abi) {}
        WindowingEnvironmentRemovedEventArgs(WindowingEnvironmentRemovedEventArgs const&) noexcept = default;
        WindowingEnvironmentRemovedEventArgs(WindowingEnvironmentRemovedEventArgs&&) noexcept = default;
        WindowingEnvironmentRemovedEventArgs& operator=(WindowingEnvironmentRemovedEventArgs const&) & noexcept = default;
        WindowingEnvironmentRemovedEventArgs& operator=(WindowingEnvironmentRemovedEventArgs&&) & noexcept = default;
    };
}
#endif
