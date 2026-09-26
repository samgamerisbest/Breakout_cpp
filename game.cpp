//Game Engine


#include <raylib.h>
//Include your header files 

int main(int argc, char* argv[])
{

   //Reference your scripts and create objects 

    int screenWidth = 1920;
    int screenHeight = 1080;

    InitWindow(screenWidth, screenHeight, "Toxic Engine");
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();

        // Draw Functions
       

        ClearBackground(BLACK);

        // Update Functions


      
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
