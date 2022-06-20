#include<graphics.h>

 main()

{
  //  clrscr();
    int gd=DETECT,gm,i,a;
    initgraph(&gd,&gm," ");

 rectangle(100,100,300,300);
 circle(200,200,100);

        getch();
    closegraph();

}
