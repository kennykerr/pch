// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Devices_AllJoyn_2_H
#define WINRT_Windows_Devices_AllJoyn_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Devices.AllJoyn.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::AllJoyn
{
    struct __declspec(empty_bases) AllJoynAboutData : Windows::Devices::AllJoyn::IAllJoynAboutData
    {
        AllJoynAboutData(std::nullptr_t) noexcept {}
        AllJoynAboutData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynAboutData(ptr, take_ownership_from_abi) {}
        AllJoynAboutData(AllJoynAboutData const&) noexcept = default;
        AllJoynAboutData(AllJoynAboutData&&) noexcept = default;
        AllJoynAboutData& operator=(AllJoynAboutData const&) & noexcept = default;
        AllJoynAboutData& operator=(AllJoynAboutData&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynAboutDataView : Windows::Devices::AllJoyn::IAllJoynAboutDataView
    {
        AllJoynAboutDataView(std::nullptr_t) noexcept {}
        AllJoynAboutDataView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynAboutDataView(ptr, take_ownership_from_abi) {}
        AllJoynAboutDataView(AllJoynAboutDataView const&) noexcept = default;
        AllJoynAboutDataView(AllJoynAboutDataView&&) noexcept = default;
        AllJoynAboutDataView& operator=(AllJoynAboutDataView const&) & noexcept = default;
        AllJoynAboutDataView& operator=(AllJoynAboutDataView&&) & noexcept = default;
        static auto GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort);
        static auto GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort, Windows::Globalization::Language const& language);
    };
    struct __declspec(empty_bases) AllJoynAcceptSessionJoinerEventArgs : Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs
    {
        AllJoynAcceptSessionJoinerEventArgs(std::nullptr_t) noexcept {}
        AllJoynAcceptSessionJoinerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynAcceptSessionJoinerEventArgs(param::hstring const& uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType const& trafficType, uint8_t proximity, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner const& acceptSessionJoiner);
        AllJoynAcceptSessionJoinerEventArgs(AllJoynAcceptSessionJoinerEventArgs const&) noexcept = default;
        AllJoynAcceptSessionJoinerEventArgs(AllJoynAcceptSessionJoinerEventArgs&&) noexcept = default;
        AllJoynAcceptSessionJoinerEventArgs& operator=(AllJoynAcceptSessionJoinerEventArgs const&) & noexcept = default;
        AllJoynAcceptSessionJoinerEventArgs& operator=(AllJoynAcceptSessionJoinerEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynAuthenticationCompleteEventArgs : Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs
    {
        AllJoynAuthenticationCompleteEventArgs(std::nullptr_t) noexcept {}
        AllJoynAuthenticationCompleteEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynAuthenticationCompleteEventArgs(AllJoynAuthenticationCompleteEventArgs const&) noexcept = default;
        AllJoynAuthenticationCompleteEventArgs(AllJoynAuthenticationCompleteEventArgs&&) noexcept = default;
        AllJoynAuthenticationCompleteEventArgs& operator=(AllJoynAuthenticationCompleteEventArgs const&) & noexcept = default;
        AllJoynAuthenticationCompleteEventArgs& operator=(AllJoynAuthenticationCompleteEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynBusAttachment : Windows::Devices::AllJoyn::IAllJoynBusAttachment,
        impl::require<AllJoynBusAttachment, Windows::Devices::AllJoyn::IAllJoynBusAttachment2>
    {
        AllJoynBusAttachment(std::nullptr_t) noexcept {}
        AllJoynBusAttachment(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynBusAttachment(ptr, take_ownership_from_abi) {}
        AllJoynBusAttachment();
        explicit AllJoynBusAttachment(param::hstring const& connectionSpecification);
        AllJoynBusAttachment(AllJoynBusAttachment const&) noexcept = default;
        AllJoynBusAttachment(AllJoynBusAttachment&&) noexcept = default;
        AllJoynBusAttachment& operator=(AllJoynBusAttachment const&) & noexcept = default;
        AllJoynBusAttachment& operator=(AllJoynBusAttachment&&) & noexcept = default;
        static auto GetDefault();
        static auto GetWatcher(param::iterable<hstring> const& requiredInterfaces);
    };
    struct __declspec(empty_bases) AllJoynBusAttachmentStateChangedEventArgs : Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs
    {
        AllJoynBusAttachmentStateChangedEventArgs(std::nullptr_t) noexcept {}
        AllJoynBusAttachmentStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynBusAttachmentStateChangedEventArgs(AllJoynBusAttachmentStateChangedEventArgs const&) noexcept = default;
        AllJoynBusAttachmentStateChangedEventArgs(AllJoynBusAttachmentStateChangedEventArgs&&) noexcept = default;
        AllJoynBusAttachmentStateChangedEventArgs& operator=(AllJoynBusAttachmentStateChangedEventArgs const&) & noexcept = default;
        AllJoynBusAttachmentStateChangedEventArgs& operator=(AllJoynBusAttachmentStateChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynBusObject : Windows::Devices::AllJoyn::IAllJoynBusObject
    {
        AllJoynBusObject(std::nullptr_t) noexcept {}
        AllJoynBusObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynBusObject(ptr, take_ownership_from_abi) {}
        AllJoynBusObject();
        explicit AllJoynBusObject(param::hstring const& objectPath);
        AllJoynBusObject(param::hstring const& objectPath, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment);
        AllJoynBusObject(AllJoynBusObject const&) noexcept = default;
        AllJoynBusObject(AllJoynBusObject&&) noexcept = default;
        AllJoynBusObject& operator=(AllJoynBusObject const&) & noexcept = default;
        AllJoynBusObject& operator=(AllJoynBusObject&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynBusObjectStoppedEventArgs : Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs
    {
        AllJoynBusObjectStoppedEventArgs(std::nullptr_t) noexcept {}
        AllJoynBusObjectStoppedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynBusObjectStoppedEventArgs(int32_t status);
        AllJoynBusObjectStoppedEventArgs(AllJoynBusObjectStoppedEventArgs const&) noexcept = default;
        AllJoynBusObjectStoppedEventArgs(AllJoynBusObjectStoppedEventArgs&&) noexcept = default;
        AllJoynBusObjectStoppedEventArgs& operator=(AllJoynBusObjectStoppedEventArgs const&) & noexcept = default;
        AllJoynBusObjectStoppedEventArgs& operator=(AllJoynBusObjectStoppedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynCredentials : Windows::Devices::AllJoyn::IAllJoynCredentials
    {
        AllJoynCredentials(std::nullptr_t) noexcept {}
        AllJoynCredentials(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynCredentials(ptr, take_ownership_from_abi) {}
        AllJoynCredentials(AllJoynCredentials const&) noexcept = default;
        AllJoynCredentials(AllJoynCredentials&&) noexcept = default;
        AllJoynCredentials& operator=(AllJoynCredentials const&) & noexcept = default;
        AllJoynCredentials& operator=(AllJoynCredentials&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynCredentialsRequestedEventArgs : Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs
    {
        AllJoynCredentialsRequestedEventArgs(std::nullptr_t) noexcept {}
        AllJoynCredentialsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynCredentialsRequestedEventArgs(AllJoynCredentialsRequestedEventArgs const&) noexcept = default;
        AllJoynCredentialsRequestedEventArgs(AllJoynCredentialsRequestedEventArgs&&) noexcept = default;
        AllJoynCredentialsRequestedEventArgs& operator=(AllJoynCredentialsRequestedEventArgs const&) & noexcept = default;
        AllJoynCredentialsRequestedEventArgs& operator=(AllJoynCredentialsRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynCredentialsVerificationRequestedEventArgs : Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs
    {
        AllJoynCredentialsVerificationRequestedEventArgs(std::nullptr_t) noexcept {}
        AllJoynCredentialsVerificationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynCredentialsVerificationRequestedEventArgs(AllJoynCredentialsVerificationRequestedEventArgs const&) noexcept = default;
        AllJoynCredentialsVerificationRequestedEventArgs(AllJoynCredentialsVerificationRequestedEventArgs&&) noexcept = default;
        AllJoynCredentialsVerificationRequestedEventArgs& operator=(AllJoynCredentialsVerificationRequestedEventArgs const&) & noexcept = default;
        AllJoynCredentialsVerificationRequestedEventArgs& operator=(AllJoynCredentialsVerificationRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynMessageInfo : Windows::Devices::AllJoyn::IAllJoynMessageInfo
    {
        AllJoynMessageInfo(std::nullptr_t) noexcept {}
        AllJoynMessageInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynMessageInfo(ptr, take_ownership_from_abi) {}
        explicit AllJoynMessageInfo(param::hstring const& senderUniqueName);
        AllJoynMessageInfo(AllJoynMessageInfo const&) noexcept = default;
        AllJoynMessageInfo(AllJoynMessageInfo&&) noexcept = default;
        AllJoynMessageInfo& operator=(AllJoynMessageInfo const&) & noexcept = default;
        AllJoynMessageInfo& operator=(AllJoynMessageInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynProducerStoppedEventArgs : Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs
    {
        AllJoynProducerStoppedEventArgs(std::nullptr_t) noexcept {}
        AllJoynProducerStoppedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynProducerStoppedEventArgs(int32_t status);
        AllJoynProducerStoppedEventArgs(AllJoynProducerStoppedEventArgs const&) noexcept = default;
        AllJoynProducerStoppedEventArgs(AllJoynProducerStoppedEventArgs&&) noexcept = default;
        AllJoynProducerStoppedEventArgs& operator=(AllJoynProducerStoppedEventArgs const&) & noexcept = default;
        AllJoynProducerStoppedEventArgs& operator=(AllJoynProducerStoppedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynServiceInfo : Windows::Devices::AllJoyn::IAllJoynServiceInfo
    {
        AllJoynServiceInfo(std::nullptr_t) noexcept {}
        AllJoynServiceInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynServiceInfo(ptr, take_ownership_from_abi) {}
        AllJoynServiceInfo(param::hstring const& uniqueName, param::hstring const& objectPath, uint16_t sessionPort);
        AllJoynServiceInfo(AllJoynServiceInfo const&) noexcept = default;
        AllJoynServiceInfo(AllJoynServiceInfo&&) noexcept = default;
        AllJoynServiceInfo& operator=(AllJoynServiceInfo const&) & noexcept = default;
        AllJoynServiceInfo& operator=(AllJoynServiceInfo&&) & noexcept = default;
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) AllJoynServiceInfoRemovedEventArgs : Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs
    {
        AllJoynServiceInfoRemovedEventArgs(std::nullptr_t) noexcept {}
        AllJoynServiceInfoRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynServiceInfoRemovedEventArgs(param::hstring const& uniqueName);
        AllJoynServiceInfoRemovedEventArgs(AllJoynServiceInfoRemovedEventArgs const&) noexcept = default;
        AllJoynServiceInfoRemovedEventArgs(AllJoynServiceInfoRemovedEventArgs&&) noexcept = default;
        AllJoynServiceInfoRemovedEventArgs& operator=(AllJoynServiceInfoRemovedEventArgs const&) & noexcept = default;
        AllJoynServiceInfoRemovedEventArgs& operator=(AllJoynServiceInfoRemovedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynSession : Windows::Devices::AllJoyn::IAllJoynSession
    {
        AllJoynSession(std::nullptr_t) noexcept {}
        AllJoynSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynSession(ptr, take_ownership_from_abi) {}
        AllJoynSession(AllJoynSession const&) noexcept = default;
        AllJoynSession(AllJoynSession&&) noexcept = default;
        AllJoynSession& operator=(AllJoynSession const&) & noexcept = default;
        AllJoynSession& operator=(AllJoynSession&&) & noexcept = default;
        static auto GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo);
        static auto GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment);
    };
    struct __declspec(empty_bases) AllJoynSessionJoinedEventArgs : Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs
    {
        AllJoynSessionJoinedEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionJoinedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynSessionJoinedEventArgs(Windows::Devices::AllJoyn::AllJoynSession const& session);
        AllJoynSessionJoinedEventArgs(AllJoynSessionJoinedEventArgs const&) noexcept = default;
        AllJoynSessionJoinedEventArgs(AllJoynSessionJoinedEventArgs&&) noexcept = default;
        AllJoynSessionJoinedEventArgs& operator=(AllJoynSessionJoinedEventArgs const&) & noexcept = default;
        AllJoynSessionJoinedEventArgs& operator=(AllJoynSessionJoinedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynSessionLostEventArgs : Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs
    {
        AllJoynSessionLostEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionLostEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynSessionLostEventArgs(Windows::Devices::AllJoyn::AllJoynSessionLostReason const& reason);
        AllJoynSessionLostEventArgs(AllJoynSessionLostEventArgs const&) noexcept = default;
        AllJoynSessionLostEventArgs(AllJoynSessionLostEventArgs&&) noexcept = default;
        AllJoynSessionLostEventArgs& operator=(AllJoynSessionLostEventArgs const&) & noexcept = default;
        AllJoynSessionLostEventArgs& operator=(AllJoynSessionLostEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynSessionMemberAddedEventArgs : Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs
    {
        AllJoynSessionMemberAddedEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionMemberAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynSessionMemberAddedEventArgs(param::hstring const& uniqueName);
        AllJoynSessionMemberAddedEventArgs(AllJoynSessionMemberAddedEventArgs const&) noexcept = default;
        AllJoynSessionMemberAddedEventArgs(AllJoynSessionMemberAddedEventArgs&&) noexcept = default;
        AllJoynSessionMemberAddedEventArgs& operator=(AllJoynSessionMemberAddedEventArgs const&) & noexcept = default;
        AllJoynSessionMemberAddedEventArgs& operator=(AllJoynSessionMemberAddedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AllJoynSessionMemberRemovedEventArgs : Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs
    {
        AllJoynSessionMemberRemovedEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionMemberRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynSessionMemberRemovedEventArgs(param::hstring const& uniqueName);
        AllJoynSessionMemberRemovedEventArgs(AllJoynSessionMemberRemovedEventArgs const&) noexcept = default;
        AllJoynSessionMemberRemovedEventArgs(AllJoynSessionMemberRemovedEventArgs&&) noexcept = default;
        AllJoynSessionMemberRemovedEventArgs& operator=(AllJoynSessionMemberRemovedEventArgs const&) & noexcept = default;
        AllJoynSessionMemberRemovedEventArgs& operator=(AllJoynSessionMemberRemovedEventArgs&&) & noexcept = default;
    };
    struct AllJoynStatus
    {
        AllJoynStatus() = delete;
        [[nodiscard]] static auto Ok();
        [[nodiscard]] static auto Fail();
        [[nodiscard]] static auto OperationTimedOut();
        [[nodiscard]] static auto OtherEndClosed();
        [[nodiscard]] static auto ConnectionRefused();
        [[nodiscard]] static auto AuthenticationFailed();
        [[nodiscard]] static auto AuthenticationRejectedByUser();
        [[nodiscard]] static auto SslConnectFailed();
        [[nodiscard]] static auto SslIdentityVerificationFailed();
        [[nodiscard]] static auto InsufficientSecurity();
        [[nodiscard]] static auto InvalidArgument1();
        [[nodiscard]] static auto InvalidArgument2();
        [[nodiscard]] static auto InvalidArgument3();
        [[nodiscard]] static auto InvalidArgument4();
        [[nodiscard]] static auto InvalidArgument5();
        [[nodiscard]] static auto InvalidArgument6();
        [[nodiscard]] static auto InvalidArgument7();
        [[nodiscard]] static auto InvalidArgument8();
    };
    struct __declspec(empty_bases) AllJoynWatcherStoppedEventArgs : Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs
    {
        AllJoynWatcherStoppedEventArgs(std::nullptr_t) noexcept {}
        AllJoynWatcherStoppedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynWatcherStoppedEventArgs(int32_t status);
        AllJoynWatcherStoppedEventArgs(AllJoynWatcherStoppedEventArgs const&) noexcept = default;
        AllJoynWatcherStoppedEventArgs(AllJoynWatcherStoppedEventArgs&&) noexcept = default;
        AllJoynWatcherStoppedEventArgs& operator=(AllJoynWatcherStoppedEventArgs const&) & noexcept = default;
        AllJoynWatcherStoppedEventArgs& operator=(AllJoynWatcherStoppedEventArgs&&) & noexcept = default;
    };
}
#endif
