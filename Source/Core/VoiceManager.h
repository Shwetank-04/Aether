#pragma once

#include <vector>
#include "Voice.h"

class VoiceManager
{
public:
    void prepare(double sampleRate, int samplesPerBlock);

    void noteOn(int midiNote, float velocity);

    void noteOff(int midiNote);

    void render(float* left, float* right, int numSamples);

private:
    std::vector<Voice> voices;
};
