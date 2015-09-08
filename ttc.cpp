#include<graphics.h>
#include<conio.h>
#include<iostream.h>

int pos[9]={0,0,0,0,0,0,0,0,0};

void p1()
{
int i=0;
setcolor(BLUE);
outtextxy(40,425,"PLAYER 1'S TURN");
outtextxy(40,435,"ENTER BOX NUMBER: ");
cin>>i;
if ((i>=1) && (i<=9) && (pos[i-1]==0))
pos[i-1]=1;
else
{
outtextxy(290,425,"INVALID INPUT");
outtextxy(240,435, "PRESS ANY KEY TO CONTINUE");
getch();
}
}

void p2()
{
int i=0;
setcolor(BLUE);
outtextxy(40,425,"PLAYER 2'S TURN");
outtextxy(40,435,"ENTER BOX NUMBER: ");
cin>>i;
if ((i>=1) && (i<=9) && (pos[i-1]==0))
pos[i-1]=2;
else
{
outtextxy(290,425,"INVALID INPUT");
outtextxy(240,435, "PRESS ANY KEY TO CONTINUE");
getch();
}
}

void xdraw(int a)
{
int x,y;
setcolor(BROWN);
switch (a)
{
case 1: x=175,y=125;
	break;

case 2: x=275,y=125;
	break;

case 3: x=375,y=125;
	break;

case 4: x=175,y=200;
	break;

case 5: x=275,y=200;
	break;

case 6: x=375,y=200;
	break;

case 7: x=175,y=275;
	break;

case 8: x=275,y=275;
	break;

case 9: x=375, y=275;
	break;

default: outtextxy(230,420,"FATAL ERROR (X)");
}

line(x,y,x+50,y+40);
line(x,y+40,x+50,y);
}


void odraw(int a)
{
int x,y;
setcolor(LIGHTMAGENTA);
switch(a)
{
case 1:x=200,y=134.5;
       break;

case 2:x=300,y=134.5;
       break;

case 3:x=400,y=134.5;
       break;

case 4:x=200,y=209.5;
	break;

case 5:x=300,y=209.5;
       break;

case 6:x=400,y=209.5;
       break;

case 7:x=200,y=284.5;
       break;

case 8:x=300,y=284.5;
       break;

case 9:x=400,y=284.5;
       break;

default: outtextxy(230,430,"FATAL ERROR (O)");
}
circle(x,y,30);
}

void sdraw()
{
int i;
clrscr();
cleardevice();
setbkcolor(WHITE);
setcolor(GREEN);
setlinestyle(1,1,2);

for(i=1;i<=27;i++)
cout<<"\n";
for(i=1;i<=3;i++)
cout<<"\t";

line(250,100,250,325);
line(350,100,350,325);
line(150,175,450,175);
line(150,250,450,250);
setlinestyle(0,1,1);

setcolor(LIGHTBLUE);
line(0,400,640,400);
line(0,80,640,80);

setcolor(MAGENTA);
outtextxy(230,30,"TIC-TAC-TOE");
outtextxy(440,60,"ALIZISHAAN KHATRI");
outtextxy(440,70,"andy.bas007@gmail.com");

setcolor(DARKGRAY);
outtextxy(200,134.5,"1");
outtextxy(300,134.5,"2");
outtextxy(400,134.5,"3");
outtextxy(200,209.5,"4");
outtextxy(300,209.5,"5");
outtextxy(400,209.5,"6");
outtextxy(200,284.5,"7");
outtextxy(300,284.5,"8");
outtextxy(400,284.5,"9");

for(i=0;i<=8;i++)
{
if (pos[i]==1)
xdraw(i+1);
if (pos[i]==2)
odraw(i+1);
}
}


int wincheck()
{
int k=0,j=1;


if ((pos[0]==pos[1]) && (pos[1]==pos[2]) && (pos[0]!=0))
return (pos[0]);

if ((pos[0]==pos[3]) && (pos[3]==pos[6]) && (pos[0]!=0))
return (pos[0]);

if ((pos[0]==pos[4]) && (pos[4]==pos[8]) && (pos[0]!=0))
return (pos[0]);

if ((pos[2]==pos[4]) && (pos[4]==pos[6]) && (pos[2]!=0))
return (pos[2]);

if ((pos[2]==pos[5]) && (pos[5]==pos[8]) && (pos[2]!=0))
return (pos[2]);

if ((pos[6]==pos[7]) && (pos[7]==pos[8]) && (pos[6]!=0))
return (pos[6]);

if ((pos[1]==pos[4]) && (pos[4]==pos[7]) && (pos[1]!=0))
return (pos[1]);

if ((pos[3]==pos[4]) && (pos[4]==pos[5]) && (pos[3]!=0))
return (pos[3]);

for (k=0;k<=8;k++)
j=j && pos[k];

if (j!=0)
return (3);
else
return(0);
}


void main()
{
int gd=DETECT,gm,chnc=1;
initgraph(&gd,&gm,"egavga.bgi");

while (wincheck()==0)
{
sdraw();

if (chnc==1)
p1();

if (chnc==(-1))
p2();

chnc=chnc*(-1);
}

sdraw();

switch(wincheck())
{
case 1: outtextxy(250,440,"PLAYER 1 WINS");
	break;

case 2: outtextxy(250,440,"PLAYER 2 WINS");
	break;

case 3: outtextxy(250,440,"IT IS A DRAW");
}

getch();
closegraph();
}
