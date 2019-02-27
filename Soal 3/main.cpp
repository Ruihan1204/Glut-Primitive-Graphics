/*PRAKTIKUM 2*/
/*11S16059*/
/*Mia  C F Lingga */

#include <windows.h>
#include <GL/glut.h>





void drawPoliline() {
	glLineWidth(10);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex2d(50,50);
	glVertex2d(100,50);

	glVertex2d(100,50);
	glVertex2d(100,100);

	glVertex2d(100,100);
	glVertex2d(50,100);

	glVertex2d(50,100);
	glVertex2d(50,50);

	glVertex2d(-50,150);
	glVertex2d(-50,200);

	glVertex2d(-50,200);
	glVertex2d(-100,200);

	glVertex2d(-100,200);
	glVertex2d(-100,150);

	glVertex2d(-100,150);
	glVertex2d(-50,150);
	glEnd();
	glFlush();
}
int main(int argc,char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutCreateWindow("SOAL 3");
		gluOrtho2D(-320.,320.,-240.,240);
	glutDisplayFunc(drawPoliline);
	glutMainLoop();
}
