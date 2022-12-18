#pragma once

#include <array>
#include <cstdint>

/**
 * Maximum number of bits in the input message
 */
static constexpr uint32_t MaxMessageLength = 100;

/**
 * Maximum number of samplesPerSymbol and in this context the maximum
 * sampling frequency as well (20kHz).
 */
static constexpr std::uint32_t MaxSamplesPerSymbol = 20000;

namespace GNURadioHelpers {

/**
 *
 * @param samples: input array containing samples of the modulated waveform
 * @param sampleNumber: number of samples of the output waveform, or the size of the samples array
 * @param binFile: string specifying the path to the output .bin file
 */
auto convertForGNURadio(std::array<float, MaxSamplesPerSymbol * MaxMessageLength> const& samples, std::uint16_t sampleNumber, char const* binFile) -> void;

}