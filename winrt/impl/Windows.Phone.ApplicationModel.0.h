// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Phone_ApplicationModel_0_H
#define WINRT_Windows_Phone_ApplicationModel_0_H
WINRT_EXPORT namespace winrt::Windows::Phone::ApplicationModel
{
    enum class ApplicationProfileModes : uint32_t
    {
        Default = 0,
        Alternate = 0x1,
    };
    struct IApplicationProfileStatics;
    struct ApplicationProfile;
}
namespace winrt::impl
{
    template <> struct category<Windows::Phone::ApplicationModel::IApplicationProfileStatics>{ using type = interface_category; };
    template <> struct category<Windows::Phone::ApplicationModel::ApplicationProfile>{ using type = class_category; };
    template <> struct category<Windows::Phone::ApplicationModel::ApplicationProfileModes>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Phone::ApplicationModel::ApplicationProfile> = L"Windows.Phone.ApplicationModel.ApplicationProfile";
    template <> inline constexpr auto& name_v<Windows::Phone::ApplicationModel::ApplicationProfileModes> = L"Windows.Phone.ApplicationModel.ApplicationProfileModes";
    template <> inline constexpr auto& name_v<Windows::Phone::ApplicationModel::IApplicationProfileStatics> = L"Windows.Phone.ApplicationModel.IApplicationProfileStatics";
    template <> inline constexpr guid guid_v<Windows::Phone::ApplicationModel::IApplicationProfileStatics>{ 0xD5008AB4,0x7E7A,0x11E1,{ 0xA7,0xF2,0xB0,0xA1,0x48,0x24,0x01,0x9B } }; // D5008AB4-7E7A-11E1-A7F2-B0A14824019B
    template <> struct abi<Windows::Phone::ApplicationModel::IApplicationProfileStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Modes(uint32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Phone_ApplicationModel_IApplicationProfileStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Phone::ApplicationModel::ApplicationProfileModes) Modes() const;
    };
    template <> struct consume<Windows::Phone::ApplicationModel::IApplicationProfileStatics>
    {
        template <typename D> using type = consume_Windows_Phone_ApplicationModel_IApplicationProfileStatics<D>;
    };
}
#endif