#include "ADSR.h"

void ADSR::prepare(double sr)
{
    sampleRate = sr;
}

void ADSR::noteOn()
{
    state = State::Attack;
}

void ADSR::noteOff()
{
    state = State::Release;
}

float ADSR::process()
{
    return level;
}

void ADSR::setAttack(float value)
{
    attack = value;
}

void ADSR::setDecay(float value)
{
    decay = value;
}

void ADSR::setSustain(float value)
{
    sustain = value;
}

void ADSR::setRelease(float value)
{
    release = value;
}

bool ADSR::isActive() const
{
    return state != State::Idle;
}
