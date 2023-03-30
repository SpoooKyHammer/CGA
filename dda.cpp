//draw line using dda algorithim

#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void main(){
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    
    int center_x = getmaxx() / 2;
    int center_y = getmaxy() / 2;
    
    float x1 = center_x - 50;
    float x2 = center_x;
    float y1 = center_y;
    float y2 = y1;

    float dx = abs(x2 - x1);
    float dy = abs(y2 - y1);
    
    float length = dx >= dy ? dx : dy;
    int i = 0;
    
    dx = (x2-x1)/length;
    dy = (y2-y1)/length;
    float x = x1 + 0.5;
    float y = y1 + 0.5;
    while(i < length){
	    putpixel(x, y, WHITE);
	    x += dx;
    	y += dy;
    	i += 1;
	    delay(100);
    }
    getch();
    closegraph();
}
