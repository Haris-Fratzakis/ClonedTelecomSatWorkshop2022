#include "FSKModulator.hpp"
#include "helpers.hpp"
#include <fstream>

int main() {
    using FSK::FSKModulator;

    std::fstream file("../fskOutput.bin");

    // Initialize the variables used to configure FSKModulator
    // Note that samplesPerSymbol should be larger than 2 times the highest frequency of the two
    // following the Nyquist criterion (Fs > 2 * Fmax)
    const std::uint32_t frequency1 = 20;
    const std::uint32_t frequency2 = 60;
    const std::uint32_t samplesPerSymbol = 200;
    const std::uint32_t messageLength = 6;
    std::bitset<MaxMessageLength> message = 0b110010;

    // Initialize the fskModulator object
    FSKModulator fskModulator(frequency1, frequency2, samplesPerSymbol, messageLength, message);

    // TODO: The modulate method should be implemented in "FSKModulator.cpp"
    fskModulator.modulate();

    // This function converts your output waveform to a GNURadio compatible .bin file in order to be able to visualize it
    GNURadioHelpers::convertForGNURadio(fskModulator.getOutputBuffer(), fskModulator.getSamplesPerSymbol() * messageLength, "../io/fskOutput.bin");

    file.close();

    return 0;
}