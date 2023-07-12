#include "iGraphics.h"

int im1, im2, im3, im4, im5, im6, im7, im8, im9, im10, im11, im12, im13, im14, im15, im16, im17, im18, im19, im20, im21, im22, im23, im24, im25, im26, im27, im28, im29, im30 ;

int flag = 0;
int i=600;
int j=600;
int k=600;
int l=600;
int cube_positionX = 400;
int cube_positionY = 0;
int cube_speed = 8;
//int position_h1 = rand() % (1000 - 30);//heart
int position_h2 = rand() % (1000 - 30);//heart
int position_2 = rand() % (1000 - 80);//bo
int position_3 = rand() % (1000 - 80);//bo
int position_4 = rand() % (1000 - 80);//bo
int position_20 = rand() % (1000 - 60);//star
int position_21 = rand() % (1000 - 60);
int position_22 = rand() % (1000 - 60);
int position_23 = rand() % (1000 - 60);
int position_a = rand() % (1000 - 80);//box
int position_b = rand() % (1000 - 80);//box
int position_c = rand() % (1000 - 80);//box
void drop() //drop for level 1
{
i = i-5;
if(i<=0 ){
	//position_h1 = rand() % (1000 - 30);//heart
	position_3 = rand() % (1000 - 80);//bo
	position_20 = rand() % (1000 - 60);//star

	i=600;
}
}
void drop1()//drop for level 1
{
j = j-3;
if(j<=0 ){
	position_a = rand() % (1000 - 80);
	position_c = rand() % (1000 - 80);
	position_21 = rand() % (1000 - 60);//star
	position_2 = rand() % (1000 - 80);//bo
	j=600;
}
}
void drop2()//drop for level 1
{
k = k-3;
if(k<=0 ){
	//position_20 = rand() % (1000 - 60);
	position_b = rand() % (1000 - 80);
	position_22 = rand() % (1000 - 60);
	position_4 = rand() % (1000 - 80);//bo
	k=600;
}

}
void drop3()
{
l = l-1;
if(l<=0 ){
	position_23 = rand() % (1000 - 60);
	position_h2 = rand() % (1000 - 30);//heart
	l=600;
}
}

void images()
{
	iShowImage(cube_positionX, cube_positionY , 110, 110, im18);//cube
	iShowImage(position_h2, l, 30, 30, im16); //falling heart
	//iShowImage(position_h1, i, 30, 30, im16); //falling heart
	iShowImage(position_2 , j, 80, 80, im17);//falling bad object
	iShowImage(position_3 , i, 80, 80, im17);//falling bad object
    iShowImage(position_20 , i, 60, 60, im20);//falling star
	iShowImage(position_21 , j, 60, 60, im20);//falling star
	iShowImage(position_22 , k, 60, 60, im20);//falling star
	iShowImage(position_b , k, 80, 80, im11);//falling box
	iShowImage(position_a , j, 80, 80, im11);//falling box
}
void images2()
{
	iShowImage(cube_positionX, cube_positionY , 110, 110, im18);//cube
	iShowImage(position_h2, l, 30, 30, im16); //falling heart
	//iShowImage(position_h1, i, 30, 30, im16); //falling heart
	iShowImage(position_2 , j, 80, 80, im17);//falling bad object
	iShowImage(position_3 , i, 80, 80, im17);//falling bad object
    iShowImage(position_20 , i, 60, 60, im20);//falling star
	iShowImage(position_21 , j, 60, 60, im20);//falling star
	iShowImage(position_22 , k, 60, 60, im20);//falling star
	iShowImage(position_b , k, 80, 80, im11);//falling box
	iShowImage(position_a , j, 80, 80, im11);//falling box
}

void iDraw()
{
	iClear();
	if(flag==0){

	iShowImage(0, 0, 1000, 600, im1);// start page
	iSetColor(255,0,0);
	iText(339, 50, "Press E N T E R to go to MENU", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if(flag==1)
	//menu
	{
	iShowImage(0, 0, 1000, 600, im2);//background
	iShowImage(340, 430, 340, 150, im3);//options

	iShowImage(340, 370, 340, 80, im4);//resume
	iShowImage(340, 310, 340, 80, im5);//new game
	iShowImage(340, 250, 340, 80, im6);//level
	iShowImage(340, 190, 340, 80, im8);//help
	iShowImage(340, 130, 340, 80, im9);//high score
	iShowImage(340, 70, 340, 80, im10);//exit


    iSetColor(255,255,255);
	iText(339, 50, "Press I N S E R T  to go to BACK", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if(flag == 2){
		iShowImage(0, 0, 1000, 600, im23);//enter to resume
		 iSetColor(255,255,255);
	iText(339, 50, "Press A to go to MENU", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if(flag == 3){
		iShowImage(0, 0, 1000, 600, im29);//enter to new game 
		images();//function call
	iSetColor(255,255,255);
	iText(339, 50, "Press A to go to MENU", GLUT_BITMAP_TIMES_ROMAN_24);

	
	
	}
	else if(flag == 9){
		iShowImage(0, 0, 1000, 600, im29);
		iSetColor(255,255,255);
	iText(339, 50, "Press A to go to MENU", GLUT_BITMAP_TIMES_ROMAN_24);//enter to high score
	}
	else if(flag==4){
	iShowImage(0, 0, 1000, 600, im26);//enter to level
	iShowImage(340, 300, 340, 100, im13);
	iShowImage(340, 200, 340, 100, im14);
	 iSetColor(255,255,255);
	iText(339, 50, "Press A to go to MENU", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	
	else if(flag==5){
		iShowImage(0, 0, 1000, 600, im12);//enter to help
		 iSetColor(255,0,0);
	iText(339, 30, "Press A to go to MENU", GLUT_BITMAP_TIMES_ROMAN_24);
	}

	else if(flag == 6){
		exit(0);//enter to exit
	}

	
	else if(flag ==7 )
	 {
		iShowImage(0, 0, 1000, 600, im29);//enter to level 1
		images();//function call
		 iSetColor(255,255,255);
	iText(339, 50, "Press C to go back", GLUT_BITMAP_TIMES_ROMAN_24);

	
	}
	else if(flag == 8){
		iShowImage(0, 0, 1000, 600, im21);//enter to level 2
		images();//function call
	
	iShowImage(position_4 , i, 80, 80, im17);//falling bad object
	iShowImage(position_23 , l, 60, 60, im20);//falling star
	iShowImage(position_c , j, 80, 80, im11);//falling box
		 iSetColor(255,255,255);
	iText(339, 50, "Press C to go back", GLUT_BITMAP_TIMES_ROMAN_24);

	
	} 

	if((flag==3)||(flag==7)||(flag==8)) //COLLISION FOR NEW GAME OR LEVEL 1 OR LEVEL 2
	{
	//COLLISION for box
	if((position_a>=cube_positionX && position_a<= cube_positionX+110) && (j<=cube_positionY+110&& j>=cube_positionY))
	{
		iShowImage(10, 10, 200, 200, im20);//BOX COLLISION
	}

	if((position_b>=cube_positionX && position_b<= cube_positionX+110) && (k<=cube_positionY+110&& k>=cube_positionY))
	{
		iShowImage(10, 10, 200, 200, im20);
	}
	if((position_c>=cube_positionX && position_c<= cube_positionX+110) && (j<=cube_positionY+110&&j>=cube_positionY))
	{
		iShowImage(10, 10, 200, 200, im20);
	}
	//collition for star
	if((position_20>=cube_positionX && position_20<= cube_positionX+110) && (i<=cube_positionY+110&&i>=cube_positionY))
	{
		 iSetColor(255,255,255);
	iText(450,300, "SCORE+10", GLUT_BITMAP_TIMES_ROMAN_24);

	}
	if((position_21>=cube_positionX && position_21<= cube_positionX+110) && (j<=cube_positionY+110&&j>=cube_positionY))
	{
		 iSetColor(255,255,255);
	iText(450,300, "SCORE+10", GLUT_BITMAP_TIMES_ROMAN_24);

	}
	if((position_22>=cube_positionX && position_22<= cube_positionX+110) && (k<=cube_positionY+110&&k>=cube_positionY))
	{
		 iSetColor(255,255,255);
	iText(450,300, "SCORE+10", GLUT_BITMAP_TIMES_ROMAN_24);

	}
	//COLLISION FOR BAD OBJECT 
	if((position_2>=cube_positionX && position_2<= cube_positionX+110) && (j<=cube_positionY+110&&j>=cube_positionY))
	{
		
		iShowImage(cube_positionX, cube_positionY , 110, 110, im18);
		/* iSetColor(255,255,255);
	iText(450,300, "color change", GLUT_BITMAP_TIMES_ROMAN_24);*/

	}
	if((position_3>=cube_positionX && position_3<= cube_positionX+110) && (i<=cube_positionY+110&&i>=cube_positionY))
	{
		 iSetColor(255,255,255);
	iText(450,300, "color change", GLUT_BITMAP_TIMES_ROMAN_24);

	}
	if((position_4>=cube_positionX && position_4<= cube_positionX+110) && (i<=cube_positionY+110&&i>=cube_positionY))
	{
		 iSetColor(255,255,255);
	iText(450,300, "color change", GLUT_BITMAP_TIMES_ROMAN_24);

	}

	//COLLISION FOR HEART 
	if((position_h2>=cube_positionX && position_h2<= cube_positionX+110) && (l<=cube_positionY+110&&l>=cube_positionY))
	{
		 iSetColor(255,0,0);
	iText(450,300, "life+1", GLUT_BITMAP_TIMES_ROMAN_24);

	}
	}
}







void iMouseMove(int mx, int my)
{
	
}

void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf("%d %d",mx,my);
		if(flag==1)
		{
			//click on resume
			if (mx>=340 && mx<=680 && my>=392 && my<=450)
			{
				flag =2;
			}
			//click on new game
			if (mx>=340 && mx<=680 && my>=332 && my<=390)
			{
				flag =3;
			}
			//click on level
			if (mx>=340 && mx<=680 && my>=272 && my<=330)
			{
				flag =4;
			}
			//click on help
			if (mx>=340 && mx<=680 && my>=212 && my<=270)
			{
				flag =5;
			}
			//click on high score
			if (mx>=340 && mx<=680 && my>=152 && my<=210)
			{
				flag =9;
			}
			//click on exit
			if (mx>=340 && mx<=680 && my>=92 && my<=150)
			{
				flag =6;
			}
		}
		if(flag==4)//level page
		{
			if (mx>=411 && mx<=611 && my>=334 && my<=390)//enter to level 1
			{
				flag =7;
			}
			if (mx>=410 && mx<=610 && my>=224 && my<=274)//enter to level 2
			{
				flag =8;
			}
		
		}
		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		

	}
}

void iKeyboard(unsigned char key)
{
	if (flag == 0 )
	{
		if (key == '\r' ) //1st page to menu page
		{
			flag = 1;
		}
	}
	if (flag == 2 )
	{
		if (key == '\A' ) //resume to menu page
		{
			flag = 1;
		}
	}
	if (flag == 3 )
	{
		if (key == '\A' ) //new game to menu page//high score to menu
		{
			flag = 1;
		}
	}
	if (flag == 4 )
	{
		if (key == '\A' ) //level to menu page
		{
			flag = 1;
		}
	}
	if (flag == 5 )
	{
		if (key == '\A' ) // help to menu page
		{
			flag = 1;
		}
	}
	if (flag == 7 )
	{
		if (key == '\C' ) // level 1  to level page
		{
			flag = 4;
		}
	}
	if (flag == 8)
	{
		if (key == '\C' ) // level 2  to level page
		{
			flag = 4;
		}
	}
	if (flag == 9 )
	{
		if (key == '\A' ) //high score to menu
		{
			flag = 1;
		}
	}
}

void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
			if(cube_positionX<=1000-110)//move cube to right
		cube_positionX += cube_speed;
	}
	if (key == GLUT_KEY_LEFT)
	{
			if(cube_positionX>=0)
		cube_positionX -= cube_speed;
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	if (key == GLUT_KEY_END)//exit the game
	{
		exit(0);
	}
	if (flag == 1 )
	{
		if (key == GLUT_KEY_INSERT )//2nd page to 1st page
		{
			flag = 0;
		}
	}
}

int main()
{
	///srand((unsigned)time(NULL));
	
	iInitialize(1000, 600, "SAVE THAT CUBE");
	iSetTimer(20, drop);
	iSetTimer(30, drop1);
	iSetTimer(40, drop2);
	iSetTimer(2, drop3);
	

	im1 = iLoadImage("pic\\main.jpg");//main page
	im2 = iLoadImage("pic\\j.jpg");//menu
	im3 = iLoadImage("pic\\i.png");//options
	im4 = iLoadImage("pic\\a.png");//newgame
	im5 = iLoadImage("pic\\b.png");
	im6 = iLoadImage("pic\\c.png");
	im7 = iLoadImage("pic\\d.png");
	im8 = iLoadImage("pic\\e.png");
	im9 = iLoadImage("pic\\f.png");
	im10 = iLoadImage("pic\\g.png");//exit
	im11 = iLoadImage("pic\\box.png");
	im12 = iLoadImage("pic\\in.jpg");//instruction
	im13 = iLoadImage("pic\\lv1.png");
	im14 = iLoadImage("pic\\lv2.png");
	im15 = iLoadImage("pic\\j.jpg");
	im16 = iLoadImage("pic\\h.png");//heart
	im17 = iLoadImage("pic\\bo.png");//bad object 
	im18 = iLoadImage("pic\\cube.png");//cube
	im19 = iLoadImage("pic\\s1.png");//star 1
	im20 = iLoadImage("pic\\s2.png");//star 2
	im21 = iLoadImage("pic\\dm1.jpg");
	im22 = iLoadImage("pic\\dm2.jpg");
	im23 = iLoadImage("pic\\nm1.jpg");
	im24 = iLoadImage("pic\\nm2.jpg");
	im25 = iLoadImage("pic\\nm3.jpg");
	im26 = iLoadImage("pic\\nm4.jpg");
	im27 = iLoadImage("pic\\nm5.jpg");
	im28 = iLoadImage("pic\\nm6.jpg");
	im29 = iLoadImage("pic\\bp.jpg");//background
	im30 = iLoadImage("pic\\earth.jpg");//earth

	iStart();
	
}


