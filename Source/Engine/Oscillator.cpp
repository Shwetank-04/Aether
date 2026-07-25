#include "Oscillator.h"

constexpr double pi = 3.14159265358979323846;

void Oscillator::prepare(double sr)
{
    sampleRate = sr;
}

void Oscillator::setFrequency(float freq)
{
    frequency = freq;

    phaseIncrement = (2.0 * pi * frequency) / sampleRate;
}

float Oscillator::process()
{
    float sample = std::sin(phase);

    phase += phaseIncrement;

    if (phase >= 2.0 * pi)
        phase -= 2.0 * pi;

    return sample;
}

void Oscillator::reset()
{
    phase = 0.0;
}
