#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int i,j;
initgraph(&gd,&gm,"C:/TC/BGI");
for(j=0;j<=3;j++)
{


for(i=0;i<300;i++)
{
cleardevice();
circle(100,50+i,50);
setfillstyle(1,RED);
floodfill(101,51+i,255);
delay(10);
}
if(j<3)
{
for(i=0;i<300;i++)
{
cleardevice();
circle(100,350-i,50);
setfillstyle(1,RED);
floodfill(101,351-i,255);
delay(2);
}
}
}
getch();
closegraph();
}
