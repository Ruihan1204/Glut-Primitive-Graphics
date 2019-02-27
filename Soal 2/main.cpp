/*PRAKTIKUM 2*/
/*11S16059*/
/*Mia  C F Lingga */



#include <windows.h>
#include <GL/glut.h>




void drawLine()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2d(0,0);
		glVertex2d(90,90);
		glVertex2d(90,0);
		glVertex2d(-90,90);
		glVertex2d(0,0);
		glVertex2d(90,-90);

	glEnd();
	glFlush();
}


int main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutCreateWindow("SOAL 2");
		gluOrtho2D(-320.,320.,-240.,240.);
	glutDisplayFunc(drawLine);
	glutMainLoop();
}







