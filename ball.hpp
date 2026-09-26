#pragma once

#include <raylib.h>
class Ball
{
  public:
    Ball();
    ~Ball();
    void OnDraw();
    void Update();

  private:
    float bPosx;
    float bPosy;
    float bSpeedx;
    float bSpeedy;
    float bRadius;
    Color bColor;
};
