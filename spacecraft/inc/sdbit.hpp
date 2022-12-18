#ifndef FSKMOD_SDBIT_HPP
#define FSKMOD_SDBIT_HPP

#include <type_traits>
#include <array>
#include <cstdint>

namespace SDBit {

template<typename To, typename From>
[[nodiscard]] constexpr std::enable_if_t<sizeof(To) == sizeof(From), To> bitCast(From const& from) noexcept {
    static_assert(sizeof(To) == sizeof(From), "The two types must be of same size");
    static_assert(std::is_trivially_copyable_v<To>, "Target type is not trivially copyable");
    static_assert(std::is_trivially_copyable_v<From>, "Source type is not trivially copyable");
    static_assert(std::is_trivially_constructible_v<To>,"Bit cast requires trivially constructible objects");
    return __builtin_bit_cast(To, from);
}

auto splitTo4Bytes(std::uint32_t val) -> std::array<std::uint8_t, 4> {
    auto representation = SDBit::bitCast<std::uint32_t>(val);
    auto byte1 = static_cast<std::uint8_t>((representation & 0x000000ff));
    auto byte2 = static_cast<std::uint8_t>(((representation & 0x0000ff00) >> 8));
    auto byte3 = static_cast<std::uint8_t>(((representation & 0x00ff0000) >> 16));
    auto byte4 = static_cast<std::uint8_t>(((representation & 0xff000000) >> 24));

    return std::array { byte1, byte2, byte3, byte4 };
}

}

#endif // FSKMOD_SDBIT_HPP
