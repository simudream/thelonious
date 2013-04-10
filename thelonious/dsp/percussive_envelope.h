#ifndef THELONIOUS_PERCUSSIVE_ENVELOPE_H
#define THELONIOUS_PERCUSSIVE_ENVELOPE_H

#include "thelonious/types.h"
#include "envelope.h"

namespace thelonious {
namespace dsp {

template <size_t N>
class EnvelopeN : public EnvelopeN<N> {
public:
    PercussiveEnvelopeN(float attack, float release) :
            EnvelopeN<N>(0.0f, {1.0f, 0.0f}, {attack, release}) {
    }
};

typedef PercussiveEnvelopeN<1> PercussiveEnvelope;

} // namespace dsp
} // namespace thelonious

#endif