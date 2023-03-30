//co-ordinate axis and draw Circle, Rectangle, Ellipse, arc in each quadrant.

#include<graphics.h>
#include<conio.h>
void main(){
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int max_x = getmaxx();
    int center_x = max_x / 2;
    
    int max_y = getmaxy();
    int center_y = max_y / 2;
    
    line(0, center_y , max_x, center_y);  //horizontal line
    line(center_x, 0, center_x, max_y); //vertical line
    
    circle(center_x - 200, center_y - 100, 50); // top right
    rectangle(center_x + 100, center_y - 200, center_x + 250, center_y - 100); // top right
    
    ellipse(center_x - 200, center_y + 100, 0, 360, 90, 60);// full ellipse bottom left
    ellipse(center_x + 200, center_y + 100, 90, 270, 90, 60); // half ellipse aka arc bottom right
    //arc(center_x + 200, center_y + 100, 90, 270, 90); // another way of creating arc bottom right
    
    getch();
    closegraph();
}
