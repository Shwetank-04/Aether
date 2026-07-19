#pragma once

class Voice
{
public:

    Voice();

    void noteOn(int midiNote);

    void noteOff();

    void render();

private:

    int currentNote = -1;

    bool active = false;

};
