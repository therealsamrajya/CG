#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:/TC/BGI");
for(i=0;i<100;i++)
{
putpixel(50+i,50,RED);
}
getch();
closegraph();
}