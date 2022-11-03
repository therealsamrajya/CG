#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void linebres(int,int,int,int)
void main()
{
int x1,y1,x2,y2;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("enter starting coordinates");
scanf("%d %d",&x1,&y1);
printf("enter ending coordinates");
scanf("%d %d",&x2,&y2);
linebres(x1,y1,x2,y2);
getch();
}
void linebres(int x1,int y1,int x2,int y2)
{
int dx=x2-x1,dy=y2-y1;
int di=2*dy-dx;
int ds=2*dy,dt=2*(dy-dx);
putpixel(x1,y1,RED);
while(x1<x2)
{
x1++;
if(di<0)
di=di+ds;
else
{
y1++;
di=di+dt;
}
putpixel(x1,y1,RED);
delay(10);
}
}