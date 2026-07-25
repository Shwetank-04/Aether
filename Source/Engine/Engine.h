#pragma once

#include "VoiceManager.h"

class Engine
{
public:
    void prepare(double sampleRate,
                 int samplesPerBlock);

    void noteOn(int note,
                float velocity);

    void noteOff(int note);

    void process(float* left,
                 float* right,
                 int numSamples);

private:
    VoiceManager voiceManager;
};
