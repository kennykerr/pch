// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_Windows_Phone_System_Power_H
#define WINRT_Windows_Phone_System_Power_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.3.4.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.3.4.5"
#include "winrt/Windows.Phone.System.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Phone.System.Power.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Phone::System::Power::PowerSavingMode) consume_Windows_Phone_System_Power_IPowerManagerStatics<D>::PowerSavingMode() const
    {
        Windows::Phone::System::Power::PowerSavingMode value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Phone::System::Power::IPowerManagerStatics)->get_PowerSavingMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Phone_System_Power_IPowerManagerStatics<D>::PowerSavingModeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Phone::System::Power::IPowerManagerStatics)->add_PowerSavingModeChanged(*(void**)(&changeHandler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Phone_System_Power_IPowerManagerStatics<D>::PowerSavingModeChanged_revoker consume_Windows_Phone_System_Power_IPowerManagerStatics<D>::PowerSavingModeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
    {
        return impl::make_event_revoker<D, PowerSavingModeChanged_revoker>(this, PowerSavingModeChanged(changeHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_System_Power_IPowerManagerStatics<D>::PowerSavingModeChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Phone::System::Power::IPowerManagerStatics)->remove_PowerSavingModeChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Phone_System_Power_IPowerManagerStatics2<D>::PowerSavingModeEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Phone::System::Power::IPowerManagerStatics2)->get_PowerSavingModeEnabled(&value));
        return value;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Phone::System::Power::IPowerManagerStatics> : produce_base<D, Windows::Phone::System::Power::IPowerManagerStatics>
    {
        int32_t __stdcall get_PowerSavingMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Phone::System::Power::PowerSavingMode>(this->shim().PowerSavingMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_PowerSavingModeChanged(void* changeHandler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PowerSavingModeChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&changeHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PowerSavingModeChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PowerSavingModeChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Phone::System::Power::IPowerManagerStatics2> : produce_base<D, Windows::Phone::System::Power::IPowerManagerStatics2>
    {
        int32_t __stdcall get_PowerSavingModeEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().PowerSavingModeEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Phone::System::Power
{
    inline auto PowerManager::PowerSavingMode()
    {
        return impl::call_factory_cast<Windows::Phone::System::Power::PowerSavingMode(*)(IPowerManagerStatics const&), PowerManager, IPowerManagerStatics>([](IPowerManagerStatics const& f) { return f.PowerSavingMode(); });
    }
    inline auto PowerManager::PowerSavingModeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler)
    {
        return impl::call_factory<PowerManager, IPowerManagerStatics>([&](IPowerManagerStatics const& f) { return f.PowerSavingModeChanged(changeHandler); });
    }
    inline PowerManager::PowerSavingModeChanged_revoker PowerManager::PowerSavingModeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler)
    {
        auto f = get_activation_factory<PowerManager, Windows::Phone::System::Power::IPowerManagerStatics>();
        return { f, f.PowerSavingModeChanged(changeHandler) };
    }
    inline auto PowerManager::PowerSavingModeChanged(winrt::event_token const& token)
    {
        impl::call_factory<PowerManager, IPowerManagerStatics>([&](IPowerManagerStatics const& f) { return f.PowerSavingModeChanged(token); });
    }
    inline auto PowerManager::PowerSavingModeEnabled()
    {
        return impl::call_factory_cast<bool(*)(IPowerManagerStatics2 const&), PowerManager, IPowerManagerStatics2>([](IPowerManagerStatics2 const& f) { return f.PowerSavingModeEnabled(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Phone::System::Power::IPowerManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::System::Power::IPowerManagerStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::System::Power::PowerManager> : winrt::impl::hash_base {};
#endif
}
#endif
