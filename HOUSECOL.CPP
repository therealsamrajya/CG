#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setfillstyle(SOLID_FILL,YELLOW);
rectangle(200,400,450,200);
floodfill(301,251,WHITE);

setfillstyle(SOLID_FILL,RED);
rectangle(100,100,550,200);
floodfill(200,150,15);

rectangle(290,400,350,300);
setfillstyle(SOLID_FILL,GREEN);
floodfill(320,350,WHITE);

rectangle(220,290,260,260);
setfillstyle(SOLID_FILL,BLUE);
floodfill(230,271,WHITE);

rectangle(380,290,420,260);
setfillstyle(SOLID_FILL,BLUE);
floodfill(390,270,WHITE);

getch();
closegraph();
}