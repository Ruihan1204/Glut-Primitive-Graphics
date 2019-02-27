/*PRAKTIKUM 2*/
/*11S16059*/
/*Mia  C F Lingga */



#include <windows.h>
#include <GL/glut.h>



void drawLine()
{
	glLineWidth(10);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
		glVertex2d(150,150);
		glVertex2d(-150,150);
		glLineWidth(10);
		glVertex2d(-150,-150);
		glVertex2d(150,-150);
		glLineWidth(10);
		glVertex2d(-150,150);
		glVertex2d(-150,-150);
		glLineWidth(10);
		glVertex2d(150,150);
		glVertex2d(150,-150);
		glLineWidth(10);

	glEnd();
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutCreateWindow("SOAL 1");
		gluOrtho2D(-320.,320.,-240.,240.);
	glutDisplayFunc(drawLine);
	glutMainLoop();
}


