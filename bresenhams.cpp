// draw a line using Bresenham’s algorithim

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

    float dx = x2 - x1;
    float dy = y2 - y1;
    
    int i = 0;
    float x = x1;
    float y = y1;
    float e = (2 * dy) - dx;

    do{
        delay(100);
	      putpixel(x, y, RED);
        while(e >= 0){
	        y += 1;
	        e = e - (2 * dx);
	    }
	      x += 1;
	      e = e + (2 * dy);
	      i += 1;
    }while(i <= dx);
    
    getch();
    closegraph();
}
