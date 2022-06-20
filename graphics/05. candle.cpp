#include<graphics.h>
 main()
{
    int gd=DETECT,gm,i,a;
    initgraph(&gd,&gm," ");

  line(150,150,150,300);
  line(220,150,220,300);
  line(150,300,220,300);

  ellipse(185,150,0,360,35,10);
  line(170,150,200,150);
  line(170,150,185,100);
  line(200,150,185,100);

    getch();
    closegraph();

}

