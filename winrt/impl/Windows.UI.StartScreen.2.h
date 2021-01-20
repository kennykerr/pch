// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_UI_StartScreen_2_H
#define WINRT_Windows_UI_StartScreen_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.StartScreen.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::StartScreen
{
    struct __declspec(empty_bases) JumpList : Windows::UI::StartScreen::IJumpList
    {
        JumpList(std::nullptr_t) noexcept {}
        JumpList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::StartScreen::IJumpList(ptr, take_ownership_from_abi) {}
        JumpList(JumpList const&) noexcept = default;
        JumpList(JumpList&&) noexcept = default;
        JumpList& operator=(JumpList const&) & noexcept = default;
        JumpList& operator=(JumpList&&) & noexcept = default;
        static auto LoadCurrentAsync();
        static auto IsSupported();
    };
    struct __declspec(empty_bases) JumpListItem : Windows::UI::StartScreen::IJumpListItem
    {
        JumpListItem(std::nullptr_t) noexcept {}
        JumpListItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::StartScreen::IJumpListItem(ptr, take_ownership_from_abi) {}
        JumpListItem(JumpListItem const&) noexcept = default;
        JumpListItem(JumpListItem&&) noexcept = default;
        JumpListItem& operator=(JumpListItem const&) & noexcept = default;
        JumpListItem& operator=(JumpListItem&&) & noexcept = default;
        static auto CreateWithArguments(param::hstring const& arguments, param::hstring const& displayName);
        static auto CreateSeparator();
    };
    struct __declspec(empty_bases) SecondaryTile : Windows::UI::StartScreen::ISecondaryTile,
        impl::require<SecondaryTile, Windows::UI::StartScreen::ISecondaryTile2>
    {
        SecondaryTile(std::nullptr_t) noexcept {}
        SecondaryTile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::StartScreen::ISecondaryTile(ptr, take_ownership_from_abi) {}
        SecondaryTile();
        SecondaryTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference);
        SecondaryTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference, Windows::Foundation::Uri const& wideLogoReference);
        explicit SecondaryTile(param::hstring const& tileId);
        SecondaryTile(param::hstring const& tileId, param::hstring const& displayName, param::hstring const& arguments, Windows::Foundation::Uri const& square150x150Logo, Windows::UI::StartScreen::TileSize const& desiredSize);
        SecondaryTile(SecondaryTile const&) noexcept = default;
        SecondaryTile(SecondaryTile&&) noexcept = default;
        SecondaryTile& operator=(SecondaryTile const&) & noexcept = default;
        SecondaryTile& operator=(SecondaryTile&&) & noexcept = default;
        static auto Exists(param::hstring const& tileId);
        static auto FindAllAsync();
        static auto FindAllAsync(param::hstring const& applicationId);
        static auto FindAllForPackageAsync();
    };
    struct __declspec(empty_bases) SecondaryTileVisualElements : Windows::UI::StartScreen::ISecondaryTileVisualElements,
        impl::require<SecondaryTileVisualElements, Windows::UI::StartScreen::ISecondaryTileVisualElements2, Windows::UI::StartScreen::ISecondaryTileVisualElements3, Windows::UI::StartScreen::ISecondaryTileVisualElements4>
    {
        SecondaryTileVisualElements(std::nullptr_t) noexcept {}
        SecondaryTileVisualElements(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::StartScreen::ISecondaryTileVisualElements(ptr, take_ownership_from_abi) {}
        SecondaryTileVisualElements(SecondaryTileVisualElements const&) noexcept = default;
        SecondaryTileVisualElements(SecondaryTileVisualElements&&) noexcept = default;
        SecondaryTileVisualElements& operator=(SecondaryTileVisualElements const&) & noexcept = default;
        SecondaryTileVisualElements& operator=(SecondaryTileVisualElements&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StartScreenManager : Windows::UI::StartScreen::IStartScreenManager,
        impl::require<StartScreenManager, Windows::UI::StartScreen::IStartScreenManager2>
    {
        StartScreenManager(std::nullptr_t) noexcept {}
        StartScreenManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::StartScreen::IStartScreenManager(ptr, take_ownership_from_abi) {}
        StartScreenManager(StartScreenManager const&) noexcept = default;
        StartScreenManager(StartScreenManager&&) noexcept = default;
        StartScreenManager& operator=(StartScreenManager const&) & noexcept = default;
        StartScreenManager& operator=(StartScreenManager&&) & noexcept = default;
        static auto GetDefault();
        static auto GetForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) TileMixedRealityModel : Windows::UI::StartScreen::ITileMixedRealityModel,
        impl::require<TileMixedRealityModel, Windows::UI::StartScreen::ITileMixedRealityModel2>
    {
        TileMixedRealityModel(std::nullptr_t) noexcept {}
        TileMixedRealityModel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::StartScreen::ITileMixedRealityModel(ptr, take_ownership_from_abi) {}
        TileMixedRealityModel(TileMixedRealityModel const&) noexcept = default;
        TileMixedRealityModel(TileMixedRealityModel&&) noexcept = default;
        TileMixedRealityModel& operator=(TileMixedRealityModel const&) & noexcept = default;
        TileMixedRealityModel& operator=(TileMixedRealityModel&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VisualElementsRequest : Windows::UI::StartScreen::IVisualElementsRequest
    {
        VisualElementsRequest(std::nullptr_t) noexcept {}
        VisualElementsRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::StartScreen::IVisualElementsRequest(ptr, take_ownership_from_abi) {}
        VisualElementsRequest(VisualElementsRequest const&) noexcept = default;
        VisualElementsRequest(VisualElementsRequest&&) noexcept = default;
        VisualElementsRequest& operator=(VisualElementsRequest const&) & noexcept = default;
        VisualElementsRequest& operator=(VisualElementsRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VisualElementsRequestDeferral : Windows::UI::StartScreen::IVisualElementsRequestDeferral
    {
        VisualElementsRequestDeferral(std::nullptr_t) noexcept {}
        VisualElementsRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::StartScreen::IVisualElementsRequestDeferral(ptr, take_ownership_from_abi) {}
        VisualElementsRequestDeferral(VisualElementsRequestDeferral const&) noexcept = default;
        VisualElementsRequestDeferral(VisualElementsRequestDeferral&&) noexcept = default;
        VisualElementsRequestDeferral& operator=(VisualElementsRequestDeferral const&) & noexcept = default;
        VisualElementsRequestDeferral& operator=(VisualElementsRequestDeferral&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VisualElementsRequestedEventArgs : Windows::UI::StartScreen::IVisualElementsRequestedEventArgs
    {
        VisualElementsRequestedEventArgs(std::nullptr_t) noexcept {}
        VisualElementsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::StartScreen::IVisualElementsRequestedEventArgs(ptr, take_ownership_from_abi) {}
        VisualElementsRequestedEventArgs(VisualElementsRequestedEventArgs const&) noexcept = default;
        VisualElementsRequestedEventArgs(VisualElementsRequestedEventArgs&&) noexcept = default;
        VisualElementsRequestedEventArgs& operator=(VisualElementsRequestedEventArgs const&) & noexcept = default;
        VisualElementsRequestedEventArgs& operator=(VisualElementsRequestedEventArgs&&) & noexcept = default;
    };
}
#endif
