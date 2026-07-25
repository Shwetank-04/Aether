#include "Voice.h"

Voice::Voice()
{
}

void Voice::prepare(double sr, int)
{
    sampleRate = sr;
}

void Voice::noteOn(int midiNote, float velocity)
{
    currentNote = midiNote;
    currentVelocity = velocity;
    active = true;
}

void Voice::noteOff()
{
    active = false;
}

void Voice::render(float*, float*, int)
{
    // Audio generation will come later.
}

bool Voice::isActive() const
{
    return active;
}
