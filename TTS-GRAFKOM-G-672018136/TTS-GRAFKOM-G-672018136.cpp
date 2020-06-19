#include <iostream>
#include <GL/glut.h>
#include <string>
using namespace std;

string color1, color2;
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

void elipse(string color, int x, int y, int model) {
	int r = 59, g = 47, b = 49;
	if (color == "cream") {
		r = 141;
		g = 120;
		b = 77;
	}else if (color == "red") {
		r = 111;
		g = 25;
		b = 8;
	}
	if (model == 1) {
		glColor3ub(r, g, b);
		glBegin(GL_POLYGON);

		glVertex2d(7.0 + x, 3.0 + y);
		glVertex2d(4.0 + x, 4.0 + y);
		glVertex2d(3.0 + x, 7.0 + y);
		glVertex2d(7.0 + x, 11.0 + y);
		glVertex2d(10.0 + x, 10.0 + y);
		glVertex2d(11.0 + x, 7.0 + y);

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
	if (model == 2) {
		glColor3ub(r, g, b);
		glBegin(GL_POLYGON);

		glVertex2d(18.0 + x, 3.0 + y);
		glVertex2d(21.0 + x, 4.0 + y);
		glVertex2d(22.0 + x, 6.0 + y);
		glVertex2d(18.0 + x, 10.0 + y);
		glVertex2d(14.5 + x, 10.0 + y);
		glVertex2d(14.0 + x, 7.0 + y);

		glEnd();

		glColor3ub(105, 105, 105);
		glLineWidth(4.0f);
		glBegin(GL_LINE_LOOP);

		glVertex2d(18.0 + x, 3.0 + y);
		glVertex2d(21.0 + x, 4.0 + y);
		glVertex2d(22.0 + x, 6.0 + y);
		glVertex2d(18.0 + x, 10.0 + y);
		glVertex2d(14.5 + x, 10.0 + y);
		glVertex2d(14.0 + x, 7.0 + y);

		glEnd();
	}
}

void belahKetupat(int x, int y) {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);

	glVertex2d(x,y - 6.25);
	glVertex2d(x + 6.25,y);
	glVertex2d(x,y + 6.25);
	glVertex2d(x - 6.25,y);

	glEnd();

	glColor3ub(0, 0, 0);
	glLineWidth(4.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2d(x -2, y + 3);
	glVertex2d(x , y +2);
	glVertex2d(x - 2, y +2);
	glVertex2d(x , y +3);
	glEnd();
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(215,219,214);

	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++) {
			belahKetupat(0 + 25 * i, 12.5 + 25 * j);
			belahKetupat(12.5 + 25 * i, 0 + 25 * j);
		}
	}

	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 4; j++) {
			if (i == 0 && j % 2 == 1) { color1 = "black"; color2 = "red"; }
			else if (i == 1 && j % 2 == 0) { color1 = "black"; color2 = "red"; }
			else if ( i == 2 && j % 2 == 1) { color1 = "black"; color2 = "red"; }
			else if ( i == 3 && j % 2 == 0) { color1 = "black"; color2 = "red"; }

			else {
				color1 = "cream"; color2 = "cream";
			}

			elipse(color1, 25 * i, 25 * j, 1);
			elipse(color1, 11 + 25 * i,11 + 25 * j, 1);
				   
			elipse(color2, 25 * i - 11, 11 + 25 * j, 2);
			elipse(color2, 25 * i, 25 * j, 2);
		}
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

	glColor3ub(215, 219, 214);
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