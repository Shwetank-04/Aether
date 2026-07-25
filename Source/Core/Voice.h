#pragma once

class Voice
{
public:
    Voice();

    void prepare(double sampleRate, int samplesPerBlock);

    void noteOn(int midiNote, float velocity);

    void noteOff();

    void render(float* left, float* right, int numSamples);

    bool isActive() const;

private:
    bool active = false;

    int currentNote = -1;

    float currentVelocity = 0.0f;

    double sampleRate = 44100.0;
};
