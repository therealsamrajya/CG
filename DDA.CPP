#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
void lineDDA(int,int,int,int);
void main()
{
int x1,y1,x2,y2;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:/TC/BGI");
printf("enter inital coordinates of line");
scanf("%d %d",&x1,&y1);
printf("enter final coordinates ofline");
scanf("%d %d",&x2,&y2);
lineDDA(x1,y1,x2,y2);
getch();
}
void lineDDA(int x1,int y1,int x2,int y2)
{
int dx,dy,m,i;
m=(y2-y1)/(x2-x1);
for(i=x1;i<=x2;i++)
{
if(m<=1)
{
dx=1;
dy=m*dx;
}
else
{
dy=1;
dx=dy/m;
}
x1=x1+dx;
y1=y1+dy;
putpixel(x1,y1,RED);
delay(20);
}
}