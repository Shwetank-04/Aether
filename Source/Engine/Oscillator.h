#pragma once

#include <cmath>

class Oscillator
{
public:
    void prepare(double sampleRate);

    void setFrequency(float frequency);

    float process();

    void reset();

private:
    double sampleRate = 44100.0;

    float frequency = 440.0f;

    double phase = 0.0;

    double phaseIncrement = 0.0;
};
