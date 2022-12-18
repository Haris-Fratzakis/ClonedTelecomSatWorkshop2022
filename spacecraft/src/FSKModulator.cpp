#include "FSKModulator.hpp"
#include <cmath>
#include <type_traits>

namespace FSK {

/**
 * Declaration of the PI constant, you can use it as PI<float> in the code below
 * @tparam T
 */
template<typename T>
constexpr inline std::enable_if_t<std::is_floating_point_v<T>, T> PI = 3.141592653589793238462643383279502884L;

/**
 * Implement the FSK Modulator here!
 *
 * Remember that:
 * - Binary FSK Modulation consists of two cosine signals of different frequency f1 and f2 for each of the two symbols
 * - The length of each waveform for each input bit should be samplesPerSymbol long
 * -
 */
void FSKModulator::modulate() {
    // Add you code here!
}

}
