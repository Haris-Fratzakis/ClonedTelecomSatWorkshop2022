#include <array>
#include <bitset>
#include <cstdint>

namespace FSK {

class FSKModulator {
  public:
    /**
     * Maximum number of samplesPerSymbol and in this context the maximum
     * sampling frequency as well (20kHz).
     */
    static constexpr std::uint32_t MaxSamplesPerSymbol = 20000;

    /**
     * Type declaration of the output buffer
     */
    using BufferType = std::array<float, MaxSamplesPerSymbol * 6>;

    /**
     * FSKModulator class constructor
     * @param frequency1
     * @param frequency2
     * @param samplesPerSymbol
     */
    FSKModulator(std::uint32_t frequency1, std::uint32_t frequency2, std::uint32_t samplesPerSymbol)
        : f1(frequency1), f2(frequency2), samplesPerSymbol(samplesPerSymbol), inputData(0b110010){};

    /**
     * Getter for samplesPerSymbol variable
     * @return samplesPerSymbol
     */
    [[nodiscard]] auto getSamplesPerSymbol() const { return samplesPerSymbol; }

    /**
     * Getter for outputBuffer variable
     * @return outputBuffer
     */
    [[nodiscard]] auto const& getOutputBuffer() const { return outputBuffer; }

    /**
     * FSK Modulation method
     * Needs to be implemented in the scope of the workshop
     */
    void modulate();
  private:

    /**
     * Frequency of the snusoidal waveform representing symbol "0"
     */
    std::uint32_t f1;

    /**
     * Frequency of the sinusoidal waveform representing symbol "1"
     */
    std::uint32_t f2;

    /**
     * Number of samples from the waveform representing a single symbol
     * In this context it's also the sample rate
     */
    std::uint32_t samplesPerSymbol;

    /**
     * Internal buffer for the input data
     */
    std::bitset<6> inputData;

    /**
     * Internal buffer for the output modulated waveform
     * This can be used as an array
     */
    BufferType outputBuffer{};
};

}