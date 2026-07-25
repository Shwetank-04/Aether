#pragma once

class Oscillator
{
public:
    Oscillator();

    void prepare(double sampleRate);
    void setFrequency(float newFrequency);

    float process();

private:
    double sampleRate = 44100.0;

    float frequency = 440.0f;

    double phase = 0.0;

    double phaseIncrement = 0.0;
};
