// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Web_Syndication_2_H
#define WINRT_Windows_Web_Syndication_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Web.Syndication.1.h"
WINRT_EXPORT namespace winrt::Windows::Web::Syndication
{
    struct RetrievalProgress
    {
        uint32_t BytesRetrieved;
        uint32_t TotalBytesToRetrieve;
    };
    inline bool operator==(RetrievalProgress const& left, RetrievalProgress const& right) noexcept
    {
        return left.BytesRetrieved == right.BytesRetrieved && left.TotalBytesToRetrieve == right.TotalBytesToRetrieve;
    }
    inline bool operator!=(RetrievalProgress const& left, RetrievalProgress const& right) noexcept
    {
        return !(left == right);
    }
    struct TransferProgress
    {
        uint32_t BytesSent;
        uint32_t TotalBytesToSend;
        uint32_t BytesRetrieved;
        uint32_t TotalBytesToRetrieve;
    };
    inline bool operator==(TransferProgress const& left, TransferProgress const& right) noexcept
    {
        return left.BytesSent == right.BytesSent && left.TotalBytesToSend == right.TotalBytesToSend && left.BytesRetrieved == right.BytesRetrieved && left.TotalBytesToRetrieve == right.TotalBytesToRetrieve;
    }
    inline bool operator!=(TransferProgress const& left, TransferProgress const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) SyndicationAttribute : Windows::Web::Syndication::ISyndicationAttribute
    {
        SyndicationAttribute(std::nullptr_t) noexcept {}
        SyndicationAttribute(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Syndication::ISyndicationAttribute(ptr, take_ownership_from_abi) {}
        SyndicationAttribute();
        SyndicationAttribute(param::hstring const& attributeName, param::hstring const& attributeNamespace, param::hstring const& attributeValue);
        SyndicationAttribute(SyndicationAttribute const&) noexcept = default;
        SyndicationAttribute(SyndicationAttribute&&) noexcept = default;
        SyndicationAttribute& operator=(SyndicationAttribute const&) & noexcept = default;
        SyndicationAttribute& operator=(SyndicationAttribute&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SyndicationCategory : Windows::Web::Syndication::ISyndicationCategory
    {
        SyndicationCategory(std::nullptr_t) noexcept {}
        SyndicationCategory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Syndication::ISyndicationCategory(ptr, take_ownership_from_abi) {}
        SyndicationCategory();
        explicit SyndicationCategory(param::hstring const& term);
        SyndicationCategory(param::hstring const& term, param::hstring const& scheme, param::hstring const& label);
        SyndicationCategory(SyndicationCategory const&) noexcept = default;
        SyndicationCategory(SyndicationCategory&&) noexcept = default;
        SyndicationCategory& operator=(SyndicationCategory const&) & noexcept = default;
        SyndicationCategory& operator=(SyndicationCategory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SyndicationClient : Windows::Web::Syndication::ISyndicationClient
    {
        SyndicationClient(std::nullptr_t) noexcept {}
        SyndicationClient(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Syndication::ISyndicationClient(ptr, take_ownership_from_abi) {}
        SyndicationClient();
        explicit SyndicationClient(Windows::Security::Credentials::PasswordCredential const& serverCredential);
        SyndicationClient(SyndicationClient const&) noexcept = default;
        SyndicationClient(SyndicationClient&&) noexcept = default;
        SyndicationClient& operator=(SyndicationClient const&) & noexcept = default;
        SyndicationClient& operator=(SyndicationClient&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SyndicationContent : Windows::Web::Syndication::ISyndicationContent
    {
        SyndicationContent(std::nullptr_t) noexcept {}
        SyndicationContent(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Syndication::ISyndicationContent(ptr, take_ownership_from_abi) {}
        SyndicationContent();
        SyndicationContent(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type);
        explicit SyndicationContent(Windows::Foundation::Uri const& sourceUri);
        SyndicationContent(SyndicationContent const&) noexcept = default;
        SyndicationContent(SyndicationContent&&) noexcept = default;
        SyndicationContent& operator=(SyndicationContent const&) & noexcept = default;
        SyndicationContent& operator=(SyndicationContent&&) & noexcept = default;
    };
    struct SyndicationError
    {
        SyndicationError() = delete;
        static auto GetStatus(int32_t hresult);
    };
    struct __declspec(empty_bases) SyndicationFeed : Windows::Web::Syndication::ISyndicationFeed
    {
        SyndicationFeed(std::nullptr_t) noexcept {}
        SyndicationFeed(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Syndication::ISyndicationFeed(ptr, take_ownership_from_abi) {}
        SyndicationFeed();
        SyndicationFeed(param::hstring const& title, param::hstring const& subtitle, Windows::Foundation::Uri const& uri);
        SyndicationFeed(SyndicationFeed const&) noexcept = default;
        SyndicationFeed(SyndicationFeed&&) noexcept = default;
        SyndicationFeed& operator=(SyndicationFeed const&) & noexcept = default;
        SyndicationFeed& operator=(SyndicationFeed&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SyndicationGenerator : Windows::Web::Syndication::ISyndicationGenerator,
        impl::require<SyndicationGenerator, Windows::Web::Syndication::ISyndicationNode>
    {
        SyndicationGenerator(std::nullptr_t) noexcept {}
        SyndicationGenerator(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Syndication::ISyndicationGenerator(ptr, take_ownership_from_abi) {}
        SyndicationGenerator();
        explicit SyndicationGenerator(param::hstring const& text);
        SyndicationGenerator(SyndicationGenerator const&) noexcept = default;
        SyndicationGenerator(SyndicationGenerator&&) noexcept = default;
        SyndicationGenerator& operator=(SyndicationGenerator const&) & noexcept = default;
        SyndicationGenerator& operator=(SyndicationGenerator&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SyndicationItem : Windows::Web::Syndication::ISyndicationItem
    {
        SyndicationItem(std::nullptr_t) noexcept {}
        SyndicationItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Syndication::ISyndicationItem(ptr, take_ownership_from_abi) {}
        SyndicationItem();
        SyndicationItem(param::hstring const& title, Windows::Web::Syndication::SyndicationContent const& content, Windows::Foundation::Uri const& uri);
        SyndicationItem(SyndicationItem const&) noexcept = default;
        SyndicationItem(SyndicationItem&&) noexcept = default;
        SyndicationItem& operator=(SyndicationItem const&) & noexcept = default;
        SyndicationItem& operator=(SyndicationItem&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SyndicationLink : Windows::Web::Syndication::ISyndicationLink
    {
        SyndicationLink(std::nullptr_t) noexcept {}
        SyndicationLink(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Syndication::ISyndicationLink(ptr, take_ownership_from_abi) {}
        SyndicationLink();
        explicit SyndicationLink(Windows::Foundation::Uri const& uri);
        SyndicationLink(Windows::Foundation::Uri const& uri, param::hstring const& relationship, param::hstring const& title, param::hstring const& mediaType, uint32_t length);
        SyndicationLink(SyndicationLink const&) noexcept = default;
        SyndicationLink(SyndicationLink&&) noexcept = default;
        SyndicationLink& operator=(SyndicationLink const&) & noexcept = default;
        SyndicationLink& operator=(SyndicationLink&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SyndicationNode : Windows::Web::Syndication::ISyndicationNode
    {
        SyndicationNode(std::nullptr_t) noexcept {}
        SyndicationNode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Syndication::ISyndicationNode(ptr, take_ownership_from_abi) {}
        SyndicationNode();
        SyndicationNode(param::hstring const& nodeName, param::hstring const& nodeNamespace, param::hstring const& nodeValue);
        SyndicationNode(SyndicationNode const&) noexcept = default;
        SyndicationNode(SyndicationNode&&) noexcept = default;
        SyndicationNode& operator=(SyndicationNode const&) & noexcept = default;
        SyndicationNode& operator=(SyndicationNode&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SyndicationPerson : Windows::Web::Syndication::ISyndicationPerson
    {
        SyndicationPerson(std::nullptr_t) noexcept {}
        SyndicationPerson(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Syndication::ISyndicationPerson(ptr, take_ownership_from_abi) {}
        SyndicationPerson();
        explicit SyndicationPerson(param::hstring const& name);
        SyndicationPerson(param::hstring const& name, param::hstring const& email, Windows::Foundation::Uri const& uri);
        SyndicationPerson(SyndicationPerson const&) noexcept = default;
        SyndicationPerson(SyndicationPerson&&) noexcept = default;
        SyndicationPerson& operator=(SyndicationPerson const&) & noexcept = default;
        SyndicationPerson& operator=(SyndicationPerson&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SyndicationText : Windows::Web::Syndication::ISyndicationText
    {
        SyndicationText(std::nullptr_t) noexcept {}
        SyndicationText(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::Syndication::ISyndicationText(ptr, take_ownership_from_abi) {}
        SyndicationText();
        explicit SyndicationText(param::hstring const& text);
        SyndicationText(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type);
        SyndicationText(SyndicationText const&) noexcept = default;
        SyndicationText(SyndicationText&&) noexcept = default;
        SyndicationText& operator=(SyndicationText const&) & noexcept = default;
        SyndicationText& operator=(SyndicationText&&) & noexcept = default;
    };
}
#endif
