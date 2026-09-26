#include "paddle.hpp"


Rectangle rect = {000,1000,100,50};
void pad()
{
    int screenwidth = GetScreenWidth();
    int screenheight = GetScreenHeight();
     
     if(IsKeyDown(KEY_A) == true)
        rect.x -= 8;
     else   
        if(IsKeyDown(KEY_D)== true)
            rect.x += 8;

    if(rect.x < 0)
        rect.x = 0;
    if(rect.x < rect.x - screenwidth)
        rect.x = rect.x - screenwidth;

     if(rect.y < 0)
        rect.y = 0;
    if(rect.y < rect.y - screenwidth)
        rect.y = rect.y - screenwidth;



    DrawRectangleRec(rect, RED);

        
    
};
