#pragma once

class MainView
{
public:
    MainView();

    void initialize();

    void resize(int width,
                int height);

private:

    int windowWidth = 1280;
    int windowHeight = 720;
};
