#include<graphics.h>
#include<conio.h>
void main(){
    int gd=DETECT,gm,n=0;
    int x1=110;y1=110;
    char ch;
    initgraph(&gd, &gm, “c://TURBOC3//BGI");

	rectangle(100,100,220,220);
	line(140,100,140,220);
	line(180,100,180,220);
	line(100,140,220,140);
	line(100,180,220,180);


	rectangle(x1,y1,x1+20,y1+20);

	while(1){

		if(n%2==1){
			setcolor(BLACK);
			settextstyle(1,0,3);
			outtextxy(10,10,"Player 2");

			setcolor(WHITE);
			settextstyle(1,0,3);
			outtextxy(10,10,"Player 1");
		}else{
			setcolor(BLACK);
			settextstyle(1,0,3);
			outtextxy(10,10,"Player 1");

			setcolor(WHITE);
			settextstyle(1,0,3);
			outtextxy(10,10,"Player 2");
		}

		ch = getch();

		if(ch==13){
			if(n%2==1){
				settextstyle(1,0,3);
				outtextxy(x1,y1,"X");
			}
			else{
				settextstyle(1,0,3);
				outtextxy(x1,y1,"0");
			}
			n++;
		}


		if(ch=='e'){
			break;
		}
		if(ch=='a'){
			setcolor(BLACK);
			rectangle(x1,y1,x1+20,y1+20);

			x1=x1-40;
			setcolor(WHITE);
			rectangle(x1,y1,x1+20,y1+20);

		}
		if(ch=='d'){
			setcolor(BLACK);
			rectangle(x1,y1,x1+20,y1+20);

			x1=x1+40;
			setcolor(WHITE);
			rectangle(x1,y1,x1+20,y1+20);
		}
		if(ch=='w'){
			setcolor(BLACK);
			rectangle(x1,y1,x1+20,y1+20);
			y1=y1-40;
			setcolor(WHITE);
			rectangle(x1,y1,x1+20,y1+20);
		}
		if(ch=='s'){
			setcolor(BLACK);
			rectangle(x1,y1,x1+20,y1+20);
			y1=y1+40;
			setcolor(WHITE);
			rectangle(x1,y1,x1+20,y1+20);
		}

	}	




	getch();
	closegraph();
	restorecrtmode();
}
