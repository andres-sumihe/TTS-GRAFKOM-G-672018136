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

void elipse(string color, double x, double y, int model) {
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
		glColor3ub(230, 230, 230);
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

		glColor3ub(230, 230, 230);
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
	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glVertex2i(x , y - 6.25);
	glVertex2i(x , y - 2);
	glVertex2i(x - 2, y - 2);
	glVertex2i(x - 2, y);
	glVertex2i(x - 6.25, y);
	glVertex2i(x - 2, y);
	glVertex2i(x - 2, y + 2);
	glVertex2i(x , y+2);
	glVertex2i(x , y+6.25);
	glVertex2i(x , y+2);
	glVertex2i(x + 2 , y+2);
	glVertex2i(x + 2 , y);
	glVertex2i(x + 6.25 , y);
	glVertex2i(x + 2 , y);
	glVertex2i(x + 2 , y - 2);
	glVertex2i(x , y - 2);
	glEnd();

	glPointSize(2.0f);
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(245,239,234);

	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++) {
			belahKetupat(0.0 + 25.0 * i, 12.5 + 25.0 * j);
			belahKetupat(12.5 + 25.0 * i, 0 + 25.0 * j);
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

			elipse(color1, 25.0 * i, 25.0 * j, 1);
			elipse(color1, 11.0 + 25.0 * i,11.0 + 25.0 * j, 1);
				   
			elipse(color2, 25.0 * i - 11.0, 11.0 + 25 * j, 2);
			elipse(color2, 25.0 * i, 25.0 * j, 2);
		}
	}

	//kerangka();
	
	glColor3f(1.0f, 1.0f, 1.0f);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			titik(24.0 + (25.0 * i), 24.0 + (25.0 * j), 8.0f);
			titik(24.0 + (25.0 * i), 26.0 + (25.0 * j), 8.0f);
			titik(26.0 + (25.0 * i), 26.0 + (25.0 * j), 8.0f);
			titik(26.0 + (25.0 * i), 24.0 + (25.0 * j), 8.0f);
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			titik(11.0 + (25.0 * i), 11.0 + (25.0 * j), 8.0f);
			titik(11.0 + (25.0 * i), 13.0 + (25.0 * j), 8.0f);
			titik(13.0 + (25.0 * i), 13.0 + (25.0 * j), 8.0f);
			titik(13.0 + (25.0 * i), 11.0 + (25.0 * j), 8.0f);
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			titik(6.0 + (25.0 * i), 6.0 + (25.0 * j), 12.0f);
			titik(19.0 + (25.0 * i), 6.0 + (25.0 * j), 12.0f);
		}
	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			titik(8.0 + (25.0 * i), 8.0 + (25.0 * j), 12.0f);
			titik(17.0 + (25.0 * i), 8.0 + (25.0 * j), 12.0f);
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			titik(8.0 + (25.0 * i), 17.0 + (25.0 * j), 12.0f);
			titik(6.0 + (25.0 * i), 19.0 + (25.0 * j), 12.0f);
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			titik(17.0 + (25.0 * i), 17.0 + (25.0 * j), 12.0f);
			titik(19.0 + (25.0 * i), 19.0 + (25.0 * j), 12.0f);
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
	glutCreateWindow("Batik Kawung - 672018136");
	glutDisplayFunc(display);
	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_POLYGON_SMOOTH);
	myinit();
	glutMainLoop();

	return 0;
}