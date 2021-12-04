#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>

void rocket();
void air();
void space();

int p,i,j,count=0,flag=1;

void rocket()
{
	if (flag==1)
		air();

	else if (flag>1)
		space();

    flag++;
}

void air()
{
    for(i=0;i<=480;i++)
    {
        glClearColor(0.4, 0.8, 1.0, 1.0);   //Sky
        glClear(GL_COLOR_BUFFER_BIT);

        glColor3f(0.8,0.5,0.2);
        glBegin(GL_POLYGON);                //Core
        glVertex2f(237.5,20.0+i);
        glVertex2f(262.5,20.0+i);
        glVertex2f(262.5,120.0+i);
        glVertex2f(237.5,120.0+i);
        glEnd();

        glColor3f(0.8,0.8,0.8);         //Top
        glBegin(GL_POLYGON);
        glVertex2f(237.5,120.0+i);
        glVertex2f(262.5,120.0+i);
        glVertex2f(250,170.0+i);
        glEnd();

        glColor3f(0.8,0.8,0.8);
        glBegin(GL_POLYGON);            //Left booster
        glVertex2f(237.5,20.0+i);
        glVertex2f(217.5,20.0+i);
        glVertex2f(217.5,70.0+i);
        glVertex2f(227.5,85.0+i);
        glVertex2f(237.5,70.0+i);
        glEnd();

        glBegin(GL_POLYGON);            //Right booster
        glVertex2f(262.5,20.0+i);
        glVertex2f(282.5,20.0+i);
        glVertex2f(282.5,70.0+i);
        glVertex2f(272.5,85.0+i);
        glVertex2f(262.5,70.0+i);
        glEnd();

        if((p%2)==0)
            glColor3f(1.0,1.0,0.0);     //Yellow
        else
            glColor3f(1.0,0.0,0.0);     //Red

        glBegin(GL_POLYGON);            //Outer fume
        glVertex2f(237.5,20+i);
        glVertex2f(234.16,16.66+i);
        glVertex2f(230.82,13.32+i);
        glVertex2f(227.48,9.98+i);
        glVertex2f(224.14,6.64+i);
        glVertex2f(220.8,3.3+i);
        glVertex2f(217.5,0+i);
        glVertex2f(221.56,-5+i);
        glVertex2f(225.62,-10+i);
        glVertex2f(229.68,-15+i);
        glVertex2f(233.74,-20+i);
        glVertex2f(237.8,-25+i);
        glVertex2f(241.86,-30+i);
        glVertex2f(245.92,-35+i);
        glVertex2f(250,-40+i);
        glVertex2f(254.06,-35+i);
        glVertex2f(258.12,-30+i);
        glVertex2f(262.18,-25+i);
        glVertex2f(266.24,-20+i);
        glVertex2f(270.3,-15+i);
        glVertex2f(274.36,-10+i);
        glVertex2f(278.42,-5+i);
        glVertex2f(282.5,0+i);
        glVertex2f(278.5,4+i);
        glVertex2f(274.5,8+i);
        glVertex2f(270.5,12+i);
        glVertex2f(266.5,16+i);
        glVertex2f(262.5,20+i);
        glEnd();

        if((p%2)==0)
            glColor3f(1.0,0.0,0.0);     //Red
        else
            glColor3f(1.0,1.0,0.0);     //Yellow

        glBegin(GL_POLYGON);            //Inner fume
        glVertex2f(237.5,20+i);
        glVertex2f(236.5,17.5+i);
        glVertex2f(235.5,15+i);
        glVertex2f(234.5,12.5+i);
        glVertex2f(233.5,10+i);
        glVertex2f(232.5,7.5+i);
        glVertex2f(236,5+i);
        glVertex2f(239.5,2.5+i);
        glVertex2f(243,0+i);
        glVertex2f(246.5,-2.5+i);
        glVertex2f(250,-5+i);
        glVertex2f(253.5,-2.5+i);
        glVertex2f(257,0+i);
        glVertex2f(260.5,2.5+i);
        glVertex2f(264,5+i);
        glVertex2f(267.5,7.5+i);
        glVertex2f(266.5,10+i);
        glVertex2f(265.5,12.5+i);
        glVertex2f(264.5,15+i);
        glVertex2f(263.5,17.5+i);
        glVertex2f(262.5,20+i);
        glEnd();

        p++;
        for(j=0;j<=3000000;j++);
        glutSwapBuffers();
        glFlush();
    }
}

void space()
{
        i=200;
        count++;

        glClearColor(0.0 ,0.0 ,0.0,1.0);
        glClear(GL_COLOR_BUFFER_BIT);

        if(count<=50)                   //Exhaust
        {
            glColor3f(1.0, 1.0, 0.0);
            glBegin(GL_POLYGON);
            glVertex2f(240.5,20.0+i);
            glVertex2f(259.5,20.0+i);
            glVertex2f(249.5,-20.0+i);
            glEnd();

            glBegin(GL_POLYGON);
            glVertex2f(265.5,20.0+i);
            glVertex2f(279.5,20.0+i);
            glVertex2f(272.5,-5.0+i);
            glEnd();

            glBegin(GL_POLYGON);
            glVertex2f(234.5,20.0+i);
            glVertex2f(220.5,20.0+i);
            glVertex2f(227.5,-5.0+i);
            glEnd();
        }

        if(count<=80)
        {
            glColor3f(0.8,0.8,0.8);
            glBegin(GL_POLYGON);        //Left_booster
            glVertex2f(237.5,20.0+i);
            glVertex2f(217.5,20.0+i);
            glVertex2f(217.5,70.0+i);
            glVertex2f(227.5,85.0+i);
            glVertex2f(237.5,70.0+i);
            glEnd();

            glBegin(GL_POLYGON);        //Right booster
            glVertex2f(262.5,20.0+i);
            glVertex2f(282.5,20.0+i);
            glVertex2f(282.5,70.0+i);
            glVertex2f(272.5,85.0+i);
            glVertex2f(262.5,70.0+i);
            glEnd();
        }

        if(count<=120)
        {
            glColor3f(0.8,0.5,0.2);
            glBegin(GL_POLYGON);        //Core
            glVertex2f(237.5,20.0+i);
            glVertex2f(262.5,20.0+i);
            glVertex2f(262.5,120.0+i);
            glVertex2f(237.5,120.0+i);
            glEnd();
        }

        if(count>=150)
        {
            glColor3f(0.7,0.7,0.7);     //Satellite
            glBegin(GL_POLYGON);
            glVertex2f(235,150.0+i);
            glVertex2f(255,150.0+i);
            glVertex2f(255,120.0+i);
            glVertex2f(235,120.0+i);
            glEnd();

            glBegin(GL_LINES);
            glVertex2f(255,135.0+i);
            glVertex2f(265,135.0+i);
            glEnd();

            glBegin(GL_LINES);
            glVertex2f(235,135.0+i);
            glVertex2f(225,135.0+i);
            glEnd();

            glColor3f(0.0,0.0,0.8);
            glBegin(GL_POLYGON);        //Panels
            glVertex2f(265,155.0+i);
            glVertex2f(345,155.0+i);
            glVertex2f(345,115.0+i);
            glVertex2f(265,115.0+i);
            glEnd();

            glBegin(GL_POLYGON);        //core
            glVertex2f(145,155.0+i);
            glVertex2f(225,155.0+i);
            glVertex2f(225,115.0+i);
            glVertex2f(145,115.0+i);
            glEnd();
        }

        else
        {
            glColor3f(0.8,0.8,0.8);     //Top
            glBegin(GL_POLYGON);
            glVertex2f(237.5,120.0+i);
            glVertex2f(262.5,120.0+i);
            glVertex2f(250,170.0+i);
            glEnd();
        }

        for(j=0;j<=25000000;j++);
        glutSwapBuffers();
        glFlush();
}

void display()
{
	rocket();
	glFlush();
}

void myinit()
{
	gluOrtho2D(0.0,640,0.0,480);
}

int main(int argc,char*argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(640,480);
	glutCreateWindow("Rocket Launch and Deploy");
	myinit();
	glutDisplayFunc(display);
	glutIdleFunc(display);
    glutMainLoop();
    return 0;
}
