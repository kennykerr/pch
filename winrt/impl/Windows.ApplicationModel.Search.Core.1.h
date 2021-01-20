// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_ApplicationModel_Search_Core_1_H
#define WINRT_Windows_ApplicationModel_Search_Core_1_H
#include "winrt/impl/Windows.ApplicationModel.Search.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search::Core
{
    struct __declspec(empty_bases) IRequestingFocusOnKeyboardInputEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRequestingFocusOnKeyboardInputEventArgs>
    {
        IRequestingFocusOnKeyboardInputEventArgs(std::nullptr_t = nullptr) noexcept {}
        IRequestingFocusOnKeyboardInputEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRequestingFocusOnKeyboardInputEventArgs(IRequestingFocusOnKeyboardInputEventArgs const&) noexcept = default;
        IRequestingFocusOnKeyboardInputEventArgs(IRequestingFocusOnKeyboardInputEventArgs&&) noexcept = default;
        IRequestingFocusOnKeyboardInputEventArgs& operator=(IRequestingFocusOnKeyboardInputEventArgs const&) & noexcept = default;
        IRequestingFocusOnKeyboardInputEventArgs& operator=(IRequestingFocusOnKeyboardInputEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISearchSuggestion :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISearchSuggestion>
    {
        ISearchSuggestion(std::nullptr_t = nullptr) noexcept {}
        ISearchSuggestion(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISearchSuggestion(ISearchSuggestion const&) noexcept = default;
        ISearchSuggestion(ISearchSuggestion&&) noexcept = default;
        ISearchSuggestion& operator=(ISearchSuggestion const&) & noexcept = default;
        ISearchSuggestion& operator=(ISearchSuggestion&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISearchSuggestionManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISearchSuggestionManager>
    {
        ISearchSuggestionManager(std::nullptr_t = nullptr) noexcept {}
        ISearchSuggestionManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISearchSuggestionManager(ISearchSuggestionManager const&) noexcept = default;
        ISearchSuggestionManager(ISearchSuggestionManager&&) noexcept = default;
        ISearchSuggestionManager& operator=(ISearchSuggestionManager const&) & noexcept = default;
        ISearchSuggestionManager& operator=(ISearchSuggestionManager&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISearchSuggestionsRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISearchSuggestionsRequestedEventArgs>
    {
        ISearchSuggestionsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISearchSuggestionsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISearchSuggestionsRequestedEventArgs(ISearchSuggestionsRequestedEventArgs const&) noexcept = default;
        ISearchSuggestionsRequestedEventArgs(ISearchSuggestionsRequestedEventArgs&&) noexcept = default;
        ISearchSuggestionsRequestedEventArgs& operator=(ISearchSuggestionsRequestedEventArgs const&) & noexcept = default;
        ISearchSuggestionsRequestedEventArgs& operator=(ISearchSuggestionsRequestedEventArgs&&) & noexcept = default;
    };
}
#endif
