#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <ctime>
#include <cstdlib>

#include <iostream>


#include <stdlib.h>
//#include <glut.h>
#include <math.h>
#include <stdio.h>

using namespace std;
float x,y;
bool check = true;

void init(void)
{
glClearColor(1.0,1.0,1.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,200.0,0.0,280.0);
}



/*void display(void)
{
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);	


	glEnd();
	glFlush();	


}*/






   //IMPORTANT STUFF BELOW THIS


/*	void mouse(int button, int state, int mousex, int mousey)
	{	

		float mx = mousex;
		float my = mousey;

	

		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			check = true;
			
			ox =  (mx/1000 -0.5);
			oy = -(my/1000 -0.5);
	
			//cout<<mx; cout<<my;
		}
		glutPostRedisplay();

	}

}*/



/*
void motion(int xco, int yco)
{
	x = xco;
	y = yco;
}*/

int randomnum()
{
	
	int min = 0;
	int max = 5;
		

	int random = (rand() % ((max + 1 - min) + min));
	//cout<<random<<" ";

	return random;
}	

void setup()
{
		//srand(5);
		glClear(GL_COLOR_BUFFER_BIT);
		//glColor3f(1.0,0.0,0.0);	
		//srand(5);
			int shiftright = 17;
			int shiftdown = 35;
			float color = 0.0;
			
	
		//int randi = rand();
		//int randj = rand();

		//cout<<randi<<" ";//<<randj;
	int x = randomnum();
	int y = randomnum();
	cout<<x<<" "<<y<<endl;

	for(int j=0; j<4; j++)
	{
		int k = 4;
		int l = 0;
		
		for(int i=0; i<5; i++)
		{
			//if(i == 4)
			//{
			//	glColor3f(0.0f,0.0f,0.0f);
			//}		
		//int random = randomnum();
			if(i == x && j == y) 
				color = 0.5;
		else
			color = 0.0;


			glBegin(GL_QUADS);
			
		glColor3f(color,color,color);	
		glVertex2i(10+shiftright,180-shiftdown);  //P1
		glVertex2i(10+shiftright,145-shiftdown);  //P2
		glVertex2i(25+shiftright,145-shiftdown);  //P3
		glVertex2i(25+shiftright,180-shiftdown);  //P3
			shiftright = shiftright + 17;
			
				
		}
	
		shiftdown = shiftdown - 37;
		shiftright = 17;
		//color = color + 0.2;
		//k = k + l;
		//l = l + (k-1);

	/*if(check)
	{
		if(
	}*/
		glEnd();
			glFlush();
	
	}	

	
	
}


	
void changecolor(void)
{
	

	









}

/*void upline(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);	
	int x = 10;

	for(int i=0; i<6; i++)
	{	
		glBegin(GL_LINES);
		glVertex2i(500,x);
		glVertex2i(100,x);
		x = x+25;

		glEnd();
		glFlush();
	}
}*/
int main(int argc,char **argv)
{



glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(852,480);
glutInitWindowSize(1000,1000);
glutCreateWindow("CLICK THE BOX");

init();
	int x = randomnum();
	int y = randomnum();

	glutDisplayFunc(setup);
	system("clear");

	//cout<<"!"<<endl;
	//glutTimerFunc(2000,setup,0);


//glutDisplayFunc(upline);
glutMainLoop();
}
