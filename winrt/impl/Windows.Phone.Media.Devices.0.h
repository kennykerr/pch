// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Phone_Media_Devices_0_H
#define WINRT_Windows_Phone_Media_Devices_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Phone::Media::Devices
{
    enum class AudioRoutingEndpoint : int32_t
    {
        Default = 0,
        Earpiece = 1,
        Speakerphone = 2,
        Bluetooth = 3,
        WiredHeadset = 4,
        WiredHeadsetSpeakerOnly = 5,
        BluetoothWithNoiseAndEchoCancellation = 6,
        BluetoothPreferred = 7,
    };
    enum class AvailableAudioRoutingEndpoints : uint32_t
    {
        None = 0,
        Earpiece = 0x1,
        Speakerphone = 0x2,
        Bluetooth = 0x4,
    };
    struct IAudioRoutingManager;
    struct IAudioRoutingManagerStatics;
    struct AudioRoutingManager;
}
namespace winrt::impl
{
    template <> struct category<Windows::Phone::Media::Devices::IAudioRoutingManager>{ using type = interface_category; };
    template <> struct category<Windows::Phone::Media::Devices::IAudioRoutingManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Phone::Media::Devices::AudioRoutingManager>{ using type = class_category; };
    template <> struct category<Windows::Phone::Media::Devices::AudioRoutingEndpoint>{ using type = enum_category; };
    template <> struct category<Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Phone::Media::Devices::AudioRoutingManager> = L"Windows.Phone.Media.Devices.AudioRoutingManager";
    template <> inline constexpr auto& name_v<Windows::Phone::Media::Devices::AudioRoutingEndpoint> = L"Windows.Phone.Media.Devices.AudioRoutingEndpoint";
    template <> inline constexpr auto& name_v<Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints> = L"Windows.Phone.Media.Devices.AvailableAudioRoutingEndpoints";
    template <> inline constexpr auto& name_v<Windows::Phone::Media::Devices::IAudioRoutingManager> = L"Windows.Phone.Media.Devices.IAudioRoutingManager";
    template <> inline constexpr auto& name_v<Windows::Phone::Media::Devices::IAudioRoutingManagerStatics> = L"Windows.Phone.Media.Devices.IAudioRoutingManagerStatics";
    template <> inline constexpr guid guid_v<Windows::Phone::Media::Devices::IAudioRoutingManager>{ 0x79340D20,0x71CC,0x4526,{ 0x9F,0x29,0xFC,0x8D,0x24,0x86,0x41,0x8B } }; // 79340D20-71CC-4526-9F29-FC8D2486418B
    template <> inline constexpr guid guid_v<Windows::Phone::Media::Devices::IAudioRoutingManagerStatics>{ 0x977FB2A4,0x5590,0x4A6F,{ 0xAD,0xDE,0x6A,0x3D,0x0A,0xD5,0x82,0x50 } }; // 977FB2A4-5590-4A6F-ADDE-6A3D0AD58250
    template <> struct default_interface<Windows::Phone::Media::Devices::AudioRoutingManager>{ using type = Windows::Phone::Media::Devices::IAudioRoutingManager; };
    template <> struct abi<Windows::Phone::Media::Devices::IAudioRoutingManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAudioEndpoint(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetAudioEndpoint(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_AudioEndpointChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AudioEndpointChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AvailableAudioEndpoints(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Phone::Media::Devices::IAudioRoutingManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Phone_Media_Devices_IAudioRoutingManager
    {
        WINRT_IMPL_AUTO(Windows::Phone::Media::Devices::AudioRoutingEndpoint) GetAudioEndpoint() const;
        WINRT_IMPL_AUTO(void) SetAudioEndpoint(Windows::Phone::Media::Devices::AudioRoutingEndpoint const& endpoint) const;
        WINRT_IMPL_AUTO(winrt::event_token) AudioEndpointChanged(Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::Foundation::IInspectable> const& endpointChangeHandler) const;
        using AudioEndpointChanged_revoker = impl::event_revoker<Windows::Phone::Media::Devices::IAudioRoutingManager, &impl::abi_t<Windows::Phone::Media::Devices::IAudioRoutingManager>::remove_AudioEndpointChanged>;
        [[nodiscard]] AudioEndpointChanged_revoker AudioEndpointChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::Foundation::IInspectable> const& endpointChangeHandler) const;
        WINRT_IMPL_AUTO(void) AudioEndpointChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints) AvailableAudioEndpoints() const;
    };
    template <> struct consume<Windows::Phone::Media::Devices::IAudioRoutingManager>
    {
        template <typename D> using type = consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>;
    };
    template <typename D>
    struct consume_Windows_Phone_Media_Devices_IAudioRoutingManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Phone::Media::Devices::AudioRoutingManager) GetDefault() const;
    };
    template <> struct consume<Windows::Phone::Media::Devices::IAudioRoutingManagerStatics>
    {
        template <typename D> using type = consume_Windows_Phone_Media_Devices_IAudioRoutingManagerStatics<D>;
    };
}
#endif
