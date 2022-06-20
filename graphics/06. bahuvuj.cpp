
#include<graphics.h>

 main()

{
  //  clrscr();
    int gd=DETECT,gm,i,a;
    initgraph(&gd,&gm," ");

    rectangle(100,100,300,300);
    rectangle(200,200,400,400);
    line(100,100,200,200);
    line(300,100,400,200);
    line(100,300,200,400);
    line(300,300,400,400);

        getch();
    closegraph();

}
