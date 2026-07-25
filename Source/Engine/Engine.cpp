#include "Engine.h"

void Engine::prepare(double sampleRate,
                     int samplesPerBlock)
{
    voiceManager.prepare(sampleRate,
                         samplesPerBlock);
}

void Engine::noteOn(int note,
                    float velocity)
{
    voiceManager.noteOn(note,
                        velocity);
}

void Engine::noteOff(int note)
{
    voiceManager.noteOff(note);
}

void Engine::process(float* left,
                     float* right,
                     int numSamples)
{
    voiceManager.render(left,
                        right,
                        numSamples);
}
