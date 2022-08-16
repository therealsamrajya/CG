#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(i=1;i<400;i++)
{
delay(20);
cleardevice();
circle(120+i,150,80);

}
getch();
closegraph();
}