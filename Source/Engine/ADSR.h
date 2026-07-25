#pragma once

class ADSR
{
public:
    void prepare(double sampleRate);

    void noteOn();
    void noteOff();

    float process();

    void setAttack(float seconds);
    void setDecay(float seconds);
    void setSustain(float level);
    void setRelease(float seconds);

    bool isActive() const;

private:
    enum class State
    {
        Idle,
        Attack,
        Decay,
        Sustain,
        Release
    };

    State state = State::Idle;

    double sampleRate = 44100.0;

    float attack = 0.01f;
    float decay = 0.15f;
    float sustain = 0.8f;
    float release = 0.4f;

    float level = 0.0f;
};
