#include "ball.hpp"
#include <raylib.h>

Ball::Ball()
{
    bPosx = 960;
    bPosy = 1050;
    bRadius = 20;
    bColor = WHITE;
    bSpeedx = 8;
    bSpeedy = 8;
}
Ball::~Ball() {}

void Ball::OnDraw()
{
    DrawCircle(bPosx, bPosy, bRadius, bColor);
}

void Ball ::Update()
{

    bPosy -= bSpeedy;

    if (bPosx >= 1920 || bPosx <= 0)
    {
        bPosx -= bSpeedx;
    }
    if (bPosy >= 1080 - bRadius || bPosy <= 0 + bRadius)
    {
        bSpeedy = -bSpeedy;
    }
}
