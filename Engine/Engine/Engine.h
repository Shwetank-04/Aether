#pragma once

#include "../DSP/Voice.h"

class Engine
{
public:

    Engine();

    void prepare();

    void process();

private:

    Voice voice;

};
