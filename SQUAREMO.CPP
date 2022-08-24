#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(i=0;i<400;i++)
{
cleardevice();
rectangle(50+i,50,100+i,100);
setfillstyle(1,RED);
floodfill(51+i,51,255);
delay(15);
}
for(i=0;i<400;i++)
{
cleardevice();
rectangle(450-i,50,500-i,100);
setfillstyle(1,RED);
floodfill(451-i,51,255);
delay(15);
}
for(i=0;i<400;i++)
{
cleardevice();
rectangle(50+i,50,100+i,100);
setfillstyle(1,RED);
floodfill(51+i,51,255);
delay(15);
}
getch();
closegraph();

}
