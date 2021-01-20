// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Phone_PersonalInformation_Provisioning_2_H
#define WINRT_Windows_Phone_PersonalInformation_Provisioning_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Phone.PersonalInformation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Phone.PersonalInformation.Provisioning.1.h"
WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation::Provisioning
{
    struct ContactPartnerProvisioningManager
    {
        ContactPartnerProvisioningManager() = delete;
        static auto AssociateNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId);
        static auto ImportVcardToSystemAsync(Windows::Storage::Streams::IInputStream const& stream);
        static auto AssociateSocialNetworkAccountAsync(Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId);
    };
    struct MessagePartnerProvisioningManager
    {
        MessagePartnerProvisioningManager() = delete;
        static auto ImportSmsToSystemAsync(bool incoming, bool read, param::hstring const& body, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime);
        static auto ImportMmsToSystemAsync(bool incoming, bool read, param::hstring const& subject, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, Windows::Foundation::DateTime const& deliveryTime, param::async_vector_view<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>> const& attachments);
    };
}
#endif
