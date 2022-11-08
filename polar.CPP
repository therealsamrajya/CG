#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<math.h>

void main()
{
 int  r = 60,i;

 int x=0,y;

 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:/TC/BGI");

 for(i=0;i<360;i++){
 x = r*cos(i);
 y = r*sin(i);
  putpixel(80+x,100+y,RED);
  putpixel(80-x,100+y,RED);
  putpixel(80+x,100-y,RED);
  putpixel(80-x,100-y,RED);
  putpixel(80+y,100+x,RED);
  putpixel(80-y,100+x,RED);
  putpixel(80+y,100-x,RED);
  putpixel(80-y,100-x,RED);
  x++;
 }
 getch();
 closegraph();
}
