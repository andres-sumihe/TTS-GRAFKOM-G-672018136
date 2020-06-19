#include <iostream>
#include <GL/glut.h>
#include <string>
using namespace std;


void kerangka() {
	glLineWidth(1.0f);
	for (int i = 1; i <= 3; i++) {
		glBegin(GL_LINES);
		glVertex2f(25*i, 0);
		glVertex2f(25*i, 100);
		glEnd();

	}
	
	for (int i = 1; i <= 3; i++) {
		glBegin(GL_LINES);
		glVertex2f(0, 25*i);
		glVertex2f(100, 25*i);
		glEnd();
	}

}

void titik(double x, double y, float size) {
	
	glPointSize(size);
	glBegin(GL_POINTS);
	glVertex2d(x, y);
	glEnd();
}

void titikBanyak(double x, double y, float size) {
	for (int i = 0; i < 6; i++) {

	}
}

void elipse(string color, int x, int y) {


	glColor3f(1.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);

	glVertex2d(7.0 + x, 3.0  + y);
	glVertex2d(4.0 + x, 4.0  + y);
	glVertex2d(3.0 + x, 7.0  + y);
	glVertex2d(7.0 + x, 11.0 + y );
	glVertex2d(10.0+ x, 10.0 + y );
	glVertex2d(11.0+ x, 7.0  + y);

	glEnd();
	glColor3ub(105, 105, 105);
	glLineWidth(4.0f);
	glBegin(GL_LINE_LOOP);

	glVertex2d(7.0 + x, 3.0 + y);
	glVertex2d(4.0 + x, 4.0 + y);
	glVertex2d(3.0 + x, 7.0 + y);
	glVertex2d(7.0 + x, 11.0 + y);
	glVertex2d(10.0 + x, 10.0 + y);
	glVertex2d(11.0 + x, 7.0 + y);

	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 0.0f, 0.0f);

	

	for (int i = 0; i < 4; i++) {
		elipse("black", 25 * i, 0);
	}
	kerangka();

	
	glColor3f(1.0f, 1.0f, 1.0f);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			titik(24 + (25 * i), 24 + (25 * j), 8.0f);
			titik(24 + (25 * i), 26 + (25 * j), 8.0f);
			titik(26 + (25 * i), 26 + (25 * j), 8.0f);
			titik(26 + (25 * i), 24 + (25 * j), 8.0f);
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			titik(11 + (25 * i), 11 + (25 * j), 8.0f);
			titik(11 + (25 * i), 13 + (25 * j), 8.0f);
			titik(13 + (25 * i), 13 + (25 * j), 8.0f);
			titik(13 + (25 * i), 11 + (25 * j), 8.0f);
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			titik(6 + (25 * i), 6 + (25 * j), 12.0f);
			titik(19 + (25 * i), 6 + (25 * j), 12.0f);
		}
	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			titik(8 + (25 * i), 8 + (25 * j), 12.0f);
			titik(17 + (25 * i), 8 + (25 * j), 12.0f);
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			titik(8 + (25 * i), 17 + (25 * j), 12.0f);
			titik(6 + (25 * i), 19 + (25 * j), 12.0f);
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			titik(17 + (25 * i), 17 + (25 * j), 12.0f);
			titik(19 + (25 * i), 19 + (25 * j), 12.0f);
		}
	}
	glFlush();
}

void myinit() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 100.0, 100.0, 0.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Points");
	glutDisplayFunc(display);
	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_POLYGON_SMOOTH);
	myinit();
	glutMainLoop();

	return 0;
}