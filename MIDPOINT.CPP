 #include<stdio.h>
 #include<dos.h>
 #include<conio.h>
 #include<graphics.h>
 void circlemidpoint(int,int,int) ;
 void drawcircle(int,int,int,int);
 void main()
 {
 int xc,yc,r;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C://TC//BGI");
 printf("enter coordinates of circle");
 scanf("%d %d",&xc,&yc);
 printf("enter radius of circle");
 scanf("%d",&r);
 circlemidpoint(xc,yc,r);
 getch();
 }
 void circlemidpoint(int xc,int yc,int r)
 {
 int x=0,y=r;
 int p=1-r;
 while(x<y)
 {
 drawcircle(xc,yc,x,y);
 x++;
 if(p<0)
 p=p+2*x+1;
 else
 {
 y--;
 p=p+2*(x-y)+1;
 }
 drawcircle(xc,yc,x,y);
 delay(50);
 }
 }
 void drawcircle(int xc,int yc,int x,int y)
 {
 putpixel(xc+x,yc+y,RED);
 putpixel(xc-x,yc+y,RED);
 putpixel(xc+x,yc-y,RED);
 putpixel(xc-x,yc-y,RED);
 putpixel(xc+y,yc+x,RED);
 putpixel(xc-y,yc+x,RED);
 putpixel(xc+y,yc-x,RED);
 putpixel(xc-y,yc-x,RED);
 }



