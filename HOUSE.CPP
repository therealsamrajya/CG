#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
line(100,100,200,100);
line(100,100,90,120);
line(200,100,210,120);
line(90,120,210,120);
line(90,120,90,180);
line(210,120,210,180);
line(90,180,210,180);
line(150,180,150,155);
line(170,155,170,180);
line(150,155,170,155);
line(130,130,110,145);
line(130,130,150,145);
line(110,145,150,145);
line(190,130,170,145);
line(190,130,205,145);
line(170,145,205,145);


getch();
closegraph();
}