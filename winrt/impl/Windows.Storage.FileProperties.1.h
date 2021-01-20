// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Storage_FileProperties_1_H
#define WINRT_Windows_Storage_FileProperties_1_H
#include "winrt/impl/Windows.Storage.FileProperties.0.h"
WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties
{
    struct __declspec(empty_bases) IBasicProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBasicProperties>
    {
        IBasicProperties(std::nullptr_t = nullptr) noexcept {}
        IBasicProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBasicProperties(IBasicProperties const&) noexcept = default;
        IBasicProperties(IBasicProperties&&) noexcept = default;
        IBasicProperties& operator=(IBasicProperties const&) & noexcept = default;
        IBasicProperties& operator=(IBasicProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IDocumentProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDocumentProperties>,
        impl::require<Windows::Storage::FileProperties::IDocumentProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IDocumentProperties(std::nullptr_t = nullptr) noexcept {}
        IDocumentProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IDocumentProperties(IDocumentProperties const&) noexcept = default;
        IDocumentProperties(IDocumentProperties&&) noexcept = default;
        IDocumentProperties& operator=(IDocumentProperties const&) & noexcept = default;
        IDocumentProperties& operator=(IDocumentProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeotagHelperStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeotagHelperStatics>
    {
        IGeotagHelperStatics(std::nullptr_t = nullptr) noexcept {}
        IGeotagHelperStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeotagHelperStatics(IGeotagHelperStatics const&) noexcept = default;
        IGeotagHelperStatics(IGeotagHelperStatics&&) noexcept = default;
        IGeotagHelperStatics& operator=(IGeotagHelperStatics const&) & noexcept = default;
        IGeotagHelperStatics& operator=(IGeotagHelperStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IImageProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IImageProperties>,
        impl::require<Windows::Storage::FileProperties::IImageProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IImageProperties(std::nullptr_t = nullptr) noexcept {}
        IImageProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IImageProperties(IImageProperties const&) noexcept = default;
        IImageProperties(IImageProperties&&) noexcept = default;
        IImageProperties& operator=(IImageProperties const&) & noexcept = default;
        IImageProperties& operator=(IImageProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMusicProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMusicProperties>,
        impl::require<Windows::Storage::FileProperties::IMusicProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IMusicProperties(std::nullptr_t = nullptr) noexcept {}
        IMusicProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMusicProperties(IMusicProperties const&) noexcept = default;
        IMusicProperties(IMusicProperties&&) noexcept = default;
        IMusicProperties& operator=(IMusicProperties const&) & noexcept = default;
        IMusicProperties& operator=(IMusicProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IStorageItemContentProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageItemContentProperties>,
        impl::require<Windows::Storage::FileProperties::IStorageItemContentProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IStorageItemContentProperties(std::nullptr_t = nullptr) noexcept {}
        IStorageItemContentProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IStorageItemContentProperties(IStorageItemContentProperties const&) noexcept = default;
        IStorageItemContentProperties(IStorageItemContentProperties&&) noexcept = default;
        IStorageItemContentProperties& operator=(IStorageItemContentProperties const&) & noexcept = default;
        IStorageItemContentProperties& operator=(IStorageItemContentProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IStorageItemExtraProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageItemExtraProperties>
    {
        IStorageItemExtraProperties(std::nullptr_t = nullptr) noexcept {}
        IStorageItemExtraProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IStorageItemExtraProperties(IStorageItemExtraProperties const&) noexcept = default;
        IStorageItemExtraProperties(IStorageItemExtraProperties&&) noexcept = default;
        IStorageItemExtraProperties& operator=(IStorageItemExtraProperties const&) & noexcept = default;
        IStorageItemExtraProperties& operator=(IStorageItemExtraProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IThumbnailProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IThumbnailProperties>
    {
        IThumbnailProperties(std::nullptr_t = nullptr) noexcept {}
        IThumbnailProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IThumbnailProperties(IThumbnailProperties const&) noexcept = default;
        IThumbnailProperties(IThumbnailProperties&&) noexcept = default;
        IThumbnailProperties& operator=(IThumbnailProperties const&) & noexcept = default;
        IThumbnailProperties& operator=(IThumbnailProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IVideoProperties :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoProperties>,
        impl::require<Windows::Storage::FileProperties::IVideoProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
    {
        IVideoProperties(std::nullptr_t = nullptr) noexcept {}
        IVideoProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IVideoProperties(IVideoProperties const&) noexcept = default;
        IVideoProperties(IVideoProperties&&) noexcept = default;
        IVideoProperties& operator=(IVideoProperties const&) & noexcept = default;
        IVideoProperties& operator=(IVideoProperties&&) & noexcept = default;
    };
}
#endif
