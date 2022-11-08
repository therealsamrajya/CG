#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i,r,x,y;
initgraph(&gd,&gm,"C://TC//BGI");
printf("enter radius of circle");
scanf("%d",&r);
printf("enter coordinates of circle");
scanf("%d %d",&x,&y);
while(x<y)
{
y=sqrt(pow(r,2)-pow(x,2));
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

