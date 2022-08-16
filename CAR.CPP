#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(i=1;i<600;i++)
{
cleardevice();
rectangle(200+i,210,50+i,150);
rectangle(130+i,150,90+i,95);
rectangle(i+165,150,130+i,95);
circle(110+i,230,20);
circle(160+i,230,20);

delay(16);
}

getch();
closegraph();
}