#ifndef UTIL_H
#define UTIL_H

#include <cmath>

namespace thelonious {

Sample wrap(Sample value, Sample length) {
    return value - std::floor(value / length) * length;
}

constexpr uint32_t secondsToSamples(Sample seconds) {
    return seconds * SAMPLE_RATE;
}

constexpr Sample samplesToSeconds(uint32_t samples) {
    return samples * INV_SAMPLE_RATE;
}

}

#endif

