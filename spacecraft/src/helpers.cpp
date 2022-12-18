#include "helpers.hpp"
#include "sdbit.hpp"

#include <bit>
#include <fstream>

namespace GNURadioHelpers {

auto convertForGNURadio(std::array<float, MaxSamplesPerSymbol * MaxMessageLength> const& samples, std::uint16_t sampleNumber, char const* binFile) -> void {
    std::fstream output {};
    output.open(binFile, std::ios::out);
    for (std::size_t i = 0; i < sampleNumber; i++) {
        // Conversion to bytes, GNURadio format
        auto [byte1, byte2, byte3, byte4] = SDBit::splitTo4Bytes(SDBit::bitCast<std::uint32_t>(samples[i]));
        static_assert(!std::is_reference_v<decltype(byte1)>, "Dangling reference warning");
        static_assert(!std::is_reference_v<decltype(byte2)>, "Dangling reference warning");
        static_assert(!std::is_reference_v<decltype(byte3)>, "Dangling reference warning");
        static_assert(!std::is_reference_v<decltype(byte4)>, "Dangling reference warning");
        output << byte1;
        output << byte2;
        output << byte3;
        output << byte4;
    }
    output.close();
}

}