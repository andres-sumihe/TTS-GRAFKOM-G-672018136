#include <iostream>
#include <GL/glut.h>
#include <string>
#include"component.h"

using namespace std;
string color1, color2;
component a;
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(245,239,234);

	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++) {
			a.belahKetupat(0.0 + 25.0 * i, 12.5 + 25.0 * j);
			a.belahKetupat(12.5 + 25.0 * i, 0 + 25.0 * j);
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

			a.elipse(color1, 25.0 * i, 25.0 * j, 1);
			a.elipse(color1, 11.0 + 25.0 * i,11.0 + 25.0 * j, 1);
				   
			a.elipse(color2, 25.0 * i - 11.0, 11.0 + 25 * j, 2);
			a.elipse(color2, 25.0 * i, 25.0 * j, 2);
		}
	}

	//kerangka();
	
	glColor3f(1.0f, 1.0f, 1.0f);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a.titik(24.0 + (25.0 * i), 24.0 + (25.0 * j), 8.0f);
			a.titik(24.0 + (25.0 * i), 26.0 + (25.0 * j), 8.0f);
			a.titik(26.0 + (25.0 * i), 26.0 + (25.0 * j), 8.0f);
			a.titik(26.0 + (25.0 * i), 24.0 + (25.0 * j), 8.0f);
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			a.titik(11.0 + (25.0 * i), 11.0 + (25.0 * j), 8.0f);
			a.titik(11.0 + (25.0 * i), 13.0 + (25.0 * j), 8.0f);
			a.titik(13.0 + (25.0 * i), 13.0 + (25.0 * j), 8.0f);
			a.titik(13.0 + (25.0 * i), 11.0 + (25.0 * j), 8.0f);
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			a.titik(6.0 + (25.0 * i), 6.0 + (25.0 * j), 12.0f);
			a.titik(19.0 + (25.0 * i), 6.0 + (25.0 * j), 12.0f);
		}
	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			a.titik(8.0 + (25.0 * i), 8.0 + (25.0 * j), 12.0f);
			a.titik(17.0 + (25.0 * i), 8.0 + (25.0 * j), 12.0f);
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			a.titik(8.0 + (25.0 * i), 17.0 + (25.0 * j), 12.0f);
			a.titik(6.0 + (25.0 * i), 19.0 + (25.0 * j), 12.0f);
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			a.titik(17.0 + (25.0 * i), 17.0 + (25.0 * j), 12.0f);
			a.titik(19.0 + (25.0 * i), 19.0 + (25.0 * j), 12.0f);
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

//dont forget to visit codemaster.my.id