#include<graphics.h>

 main()

{
    int gd=DETECT,gm,i,a;
    initgraph(&gd,&gm," ");

    rectangle(100,150,250,300);
    rectangle(250,150,500,300);
    line(100,150,180,70);
    line(180,70,250,150);
    line(180,70,430,70);
    line(430,70,500,150);
    rectangle(150,200,180,260);
    rectangle(330,200,430,250);
    line(200,70,270,150);
    line(220,70,290,150);
    line(240,70,310,150);
    line(260,70,330,150);
    line(280,70,350,150);
    line(300,70,370,150);
    line(320,70,390,150);
    line(340,70,410,150);
    line(360,70,430,150);
    line(380,70,450,150);
    line(400,70,470,150);

    getch();
    closegraph();

}
