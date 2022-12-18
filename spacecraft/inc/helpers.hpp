#include <array>
#include <cstdint>

namespace GNURadioHelpers {

/**
 *
 * @param samples: input array containing samples of the modulated waveform
 * @param sampleNumber: number of samples of the output waveform, or the size of the samples array
 * @param binFile: string specifying the path to the output .bin file
 */
auto convertForGNURadio(std::array<float, 20000 * 6> const& samples, std::uint16_t sampleNumber, char const* binFile) -> void;

}