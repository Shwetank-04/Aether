#include "Voice.h"

Voice::Voice()
{

}

void Voice::noteOn(int midiNote)
{
    currentNote = midiNote;

    active = true;
}

void Voice::noteOff()
{
    active = false;

    currentNote = -1;
}

void Voice::render()
{

}
