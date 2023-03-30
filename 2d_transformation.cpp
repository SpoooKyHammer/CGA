// 2d transformation of line

#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>

void translate(int x1, int y1, int x2, int y2){
    int tx, ty;
    cout << "enter tx and ty: " << endl;
    cin >> tx >> ty;
    setcolor(BLUE);
    line(x1+tx, y1+ty, x2+tx, y2+ty);
}

void scale(int x1, int y1, int x2, int y2){
    int sx, sy;
    cout << "enter sx and sy: " << endl;
    cin >> sx >> sy;
    setcolor(RED);
    line(x1*sx, y1*sy, x2*sx, y2*sy);
}

void main(){
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    
    cout << "enter x1 y1 x2 y2: " << endl;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    line(x1, y1, x2, y2);
    
    translate(x1, y1, x2, y2);
    scale(x1, y1, x2, y2);
    
    getch();
    closegraph();
}
