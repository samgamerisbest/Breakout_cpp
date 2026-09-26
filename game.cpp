// Include your header files
#include "ball.hpp"
#include <raylib.h>

int main(int argc, char* argv[])
{

    // Reference your scripts and create objects
    Ball ball;

    int screenWidth = 1920;
    int screenHeight = 1080;
    bool spacePressed = false;

    InitWindow(screenWidth, screenHeight, "Toxic Engine");
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();

        // Draw Functions
        ball.OnDraw();

        ClearBackground(BLACK);

        // Handle Inputs
        if (IsKeyPressed(KEY_SPACE))
        {
            spacePressed = true;
        }

        //  Update Functions
        if (spacePressed == true)
        {

            ball.Update();
        }
        pad();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
