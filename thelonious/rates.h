#ifndef RATES_H
#define RATES_H

#include "sizes.h"

namespace thelonious {

const float AUDIO_RATE = 44100.0f;
const float SAMPLE_RATE = AUDIO_RATE;
const float CONTROL_RATE = AUDIO_RATE / BLOCK_SIZE;
const float INV_AUDIO_RATE = 1.0f / AUDIO_RATE;
const float INV_SAMPLE_RATE = INV_AUDIO_RATE;
const float INV_CONTROL_RATE = 1.0f / CONTROL_RATE;

}


#endif
