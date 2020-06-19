#pragma once
#include <iostream>
#include <GL/glut.h>
#include <string>
using namespace std;


class component
{
public:
	
	void kerangka() {
		glLineWidth(1.0f);
		for (int i = 1; i <= 3; i++) {
			glBegin(GL_LINES);
			glVertex2f(25 * i, 0);
			glVertex2f(25 * i, 100);
			glEnd();

		}

		for (int i = 1; i <= 3; i++) {
			glBegin(GL_LINES);
			glVertex2f(0, 25 * i);
			glVertex2f(100, 25 * i);
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
		}
		else if (color == "red") {
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

		glVertex2d(x, y - 6.25);
		glVertex2d(x + 6.25, y);
		glVertex2d(x, y + 6.25);
		glVertex2d(x - 6.25, y);

		glEnd();

		glColor3ub(0, 0, 0);
		glLineWidth(2.0f);
		glBegin(GL_LINE_STRIP);
		glVertex2i(x, y - 6.25);
		glVertex2i(x, y - 2);
		glVertex2i(x - 2, y - 2);
		glVertex2i(x - 2, y);
		glVertex2i(x - 6.25, y);
		glVertex2i(x - 2, y);
		glVertex2i(x - 2, y + 2);
		glVertex2i(x, y + 2);
		glVertex2i(x, y + 6.25);
		glVertex2i(x, y + 2);
		glVertex2i(x + 2, y + 2);
		glVertex2i(x + 2, y);
		glVertex2i(x + 6.25, y);
		glVertex2i(x + 2, y);
		glVertex2i(x + 2, y - 2);
		glVertex2i(x, y - 2);
		glEnd();

		glPointSize(2.0f);
		glBegin(GL_POINTS);
		glVertex2i(x, y);
		glEnd();
	}
};

