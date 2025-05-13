#include<GL/glut.h>
#include "Pro.h"

float carposition = 0.0f, lcloudpos, rcloudpos;

int rFlag = 0;

void building(GLdouble bfx, GLdouble bfy, GLdouble bsx, GLdouble bsy, GLdouble btx, GLdouble bty, GLdouble blx, GLdouble bly, GLdouble r, GLdouble g, GLdouble b)

{
	glColor3f(r, g, b); glBegin(GL_QUADS); glVertex2f(bfx, bfy); glVertex2f(bsx, bsy); glVertex2f(btx, bty); glVertex2f(blx, bly); glEnd();
	glColor3f(0.5, 0.2, 0.4); //1D

	{
		glBegin(GL_QUADS); glVertex2f(-195, 135); glVertex2f(-175, 135); glVertex2f(-175, 105); glVertex2f(-195, 105); glEnd(); glBegin(GL_QUADS); glVertex2f(-175, 88); glVertex2f(-175, 62); glVertex2f(-155, 62); glVertex2f(-155, 88); glEnd();
		glBegin(GL_QUADS); glVertex2f(-195, 50); glVertex2f(-175, 50); glVertex2f(-175, 20); glVertex2f(-195, 20); glEnd();
	}
	glColor3f(0.2, 0.4, 0.8); //2D
	{
		glBegin(GL_QUADS); glVertex2f(-145, 105); glVertex2f(-110, 105); glVertex2f(-110, 80); glVertex2f(-145, 80); glEnd();
		glBegin(GL_QUADS); glVertex2f(-145, 50); glVertex2f(-110, 50); glVertex2f(-110, 25); glVertex2f(-145, 25); glEnd();
	}
	glColor3f(0.5, 0.5, 0.5); //3D
	{
		glBegin(GL_QUADS); glVertex2f(-80, 100); glVertex2f(-80, 150); glVertex2f(-60, 150); glVertex2f(-60, 100); glEnd();
		glBegin(GL_QUADS); glVertex2f(-100, 45); glVertex2f(-100, 100); glVertex2f(-80, 100); glVertex2f(-80, 45); glEnd();
		glBegin(GL_QUADS); glVertex2f(-80, 45); glVertex2f(-60, 45); glVertex2f(-60, -17); glVertex2f(-80, -15);
		glEnd();
	}
	glColor3f(0.1, 0.2, 0.3); //4D
	{
		glBegin(GL_QUADS); glVertex2f(-45, 130); glVertex2f(-20, 130); glVertex2f(-20, 80); glVertex2f(-45, 80); glEnd();
		glBegin(GL_QUADS); glVertex2f(-20, 80); glVertex2f(-20, 30); glVertex2f(0, 30); glVertex2f(0, 80); glEnd();
		glBegin(GL_QUADS); glVertex2f(-45, 30); glVertex2f(-45, -20); glVertex2f(-20, -25); glVertex2f(-20, 30);
		glEnd();
	}
	glColor3f(0.3, 0.4, 0.5); //5D
	{
		glBegin(GL_QUADS); glVertex2f(0, 140); glVertex2f(25, 140); glVertex2f(25, 110); glVertex2f(0, 110); glEnd(); glBegin(GL_QUADS); glVertex2f(25, 110); glVertex2f(50, 110); glVertex2f(50, 80); glVertex2f(25, 80); glEnd(); glBegin(GL_QUADS); glVertex2f(0, 70); glVertex2f(25, 70); glVertex2f(25, 40); glVertex2f(0, 40); glEnd(); glBegin(GL_QUADS); glVertex2f(25, 40); glVertex2f(50, 40); glVertex2f(50, 10); glVertex2f(25, 10);
		glEnd();
	}
	glColor3f(0.5, 0.4, 0.5); //6D
	{
		glBegin(GL_QUADS); glVertex2f(55, 30); glVertex2f(55, 55); glVertex2f(73, 55); glVertex2f(73, 30); glEnd(); glBegin(GL_QUADS); glVertex2f(80, 30); glVertex2f(80, 55); glVertex2f(98, 55); glVertex2f(98, 30); glEnd(); glBegin(GL_QUADS); glVertex2f(55, -10); glVertex2f(55, 15); glVertex2f(73, 15); glVertex2f(73, -10); glEnd(); glBegin(GL_QUADS); glVertex2f(80, -10); glVertex2f(80, 15); glVertex2f(98, 15); glVertex2f(98, -10); glEnd();
	}
	glColor3f(0.0, 0.4, 0.5); //7D
	{
		glBegin(GL_TRIANGLES);
		glVertex2f(100, 100); glVertex2f(150, 100); glVertex2f(150, 40); glEnd(); glBegin(GL_TRIANGLES); glVertex2f(100, 0); glVertex2f(100, 40); glVertex2f(150, 0);
		glEnd();
	}
	glColor3f(0.8, 0.7, 0.5); //8D
	{
		glBegin(GL_TRIANGLES); glVertex2f(150, 100); glVertex2f(200, 100); glVertex2f(200, 60); glEnd(); glBegin(GL_TRIANGLES); glVertex2f(200, 50); glVertex2f(150, 50); glVertex2f(150, 10); glEnd(); glBegin(GL_TRIANGLES); glVertex2f(200, 0); glVertex2f(150, 0); glVertex2f(200, -40); glEnd();
	}

}

void car(void)

{
	//car
	glColor3ub(172, 57, 57);//Car 2 glBegin(GL_POLYGON); glVertex2i(-157.73, -115.84); glVertex2i(-27.73, -115.84); glVertex2i(-27.73, -75.84); glVertex2i(-157.73, -75.84); glEnd();
	glColor3ub(0, 25, 51);//Car 2 UP glBegin(GL_POLYGON); glVertex2i(-159.12, -75.53); glVertex2i(-39.12, -75.53); glVertex2i(-59.12, -45.53); glVertex2i(-99.12, -45.53); glEnd();
	//Car Wheel 1 int p5, x5, y5;
	int xc5 = -137.73, yc5 = -115.84, r5 = 15;
	p5 = 1 - r5;
	x5 = 0;
	y5 = r5;
	while (x5 <= y5)
	{
		if (p5 < 0)
		{
			x5 = x5 + 1;
			p5 = p5 + 2 * x5 + 1;
		}
		else
		{
			x5 = x5 + 1;
			y5 = y5 - 1;
			p5 = p5 + 2 * (x5 + 1) - 2 * (y5 + 1);
		}
		glColor3ub(20, 20, 20); glBegin(GL_POLYGON); glVertex2i(x5 + xc5, y5 + yc5); glVertex2i(x5 + xc5, -y5 + yc5); glVertex2i(-x5 + xc5, -y5 + yc5); glVertex2i(-x5 + xc5, y5 + yc5); glVertex2i(y5 + xc5, x5 + yc5); glVertex2i(y5 + xc5, -x5 + yc5); glVertex2i(-y5 + xc5, -x5 + yc5); glVertex2i(-y5 + xc5, x5 + yc5);
		glEnd();
	}
	//Car Wheel 2 int p6, x6, y6;
	int xc6 = -47.73, yc6 = -115.84, r6 = 15;
	p6 = 1 - r6;
	x6 = 0;
	y6 = r6;
	while (x6 <= y6)
	{
		if (p6 < 0)
		{
			x6 = x6 + 1;
			p6 = p6 + 2 * x6 + 1;
		}
		else
		{
			x6 = x6 + 1;
			y6 = y6 - 1;
			p6 = p6 + 2 * (x6 + 1) - 2 * (y6 + 1);
		}
		glColor3ub(20, 20, 20); glBegin(GL_POLYGON); glVertex2i(x6 + xc6, y6 + yc6); glVertex2i(x6 + xc6, -y6 + yc6); glVertex2i(-x6 + xc6, -y6 + yc6); glVertex2i(-x6 + xc6, y6 + yc6); glVertex2i(y6 + xc6, x6 + yc6); glVertex2i(y6 + xc6, -x6 + yc6); glVertex2i(-y6 + xc6, -x6 + yc6); glVertex2i(-y6 + xc6, x6 + yc6);
		glEnd();
	}
	glColor3ub(255, 255, 255);//Car Middle Line glBegin(GL_LINE_LOOP);
	glVertex2i(-95.43, -115.96);
	glVertex2i(-95.43, -45.96);
	glEnd();
}

void lclouds() {

	//lcloud glPushMatrix();
	glTranslatef(-140.0, 200.0, 0.0); //bottom left glColor3f(1.0, 1.0, 1.0); glutSolidSphere(20.0, 30, 30); glTranslatef(30.0, -5.0, 0.0); //bottom right glutSolidSphere(20.0, 30, 30);
	glTranslatef(-20, 30, 0); //top left glutSolidSphere(20.0, 30, 30); glTranslatef(-20.0, 0.0, 0.0);//top right glutSolidSphere(20.0, 30, 30); glPopMatrix();
	glPushMatrix();
	glTranslatef(-100.0, 200.0, 0.0); //bottom left glColor3f(1.0, 1.0, 1.0); glutSolidSphere(20.0, 30, 30); glTranslatef(20.0, -5.0, 0.0); //bottom right glutSolidSphere(20.0, 30, 30);
	glTranslatef(-5, 30, 0); //top left glutSolidSphere(20.0, 30, 30); glTranslatef(0.0, 0.0, 0.0);//top right glutSolidSphere(20.0, 30, 30);
	glPopMatrix();
}

void rclouds() {

	//rcloud glPushMatrix();
	glTranslatef(140.0, 200.0, 0.0); //bottom left glutSolidSphere(20.0, 30, 30); glTranslatef(25.0, 0.0, 0.0); //bottom right glutSolidSphere(20.0, 30, 30);
	glTranslatef(-10, 20, 0); //top left glutSolidSphere(20.0, 30, 30); glTranslatef(30.0, 5.0, 0.0);//top right glutSolidSphere(20.0, 30, 30); glPopMatrix();
	glPushMatrix();

	glTranslatef(110.0, 200.0, 0.0); //bottom left glutSolidSphere(20.0, 30, 30); glTranslatef(15.0, 0.0, 0.0); //bottom right glutSolidSphere(20.0, 30, 30);
	glTranslatef(-5, 20, 0); //top left glutSolidSphere(20.0, 30, 30); glTranslatef(20.0, 5.0, 0.0);//top right
	glutSolidSphere(20.0, 30, 30);
	glPopMatrix();

}

void road(GLdouble fx, GLdouble fy, GLdouble sx, GLdouble sy, GLdouble tx, GLdouble ty, GLdouble lx, GLdouble ly, GLdouble r, GLdouble g, GLdouble b)

{
	glColor3f(r, g, b); glBegin(GL_QUADS); glVertex2f(fx, fy); glVertex2f(sx, sy); glVertex2f(tx, ty); glVertex2f(lx, ly); glEnd();
	glColor3f(1.0, 1.0, 1.0);
	for (GLdouble x = fx + 30; x < sx - 30; x += 60) {

		for (GLdouble y = fy + 30; y < ty - 30; y += 60) {

			glBegin(GL_QUADS); glVertex2f(x, y); glVertex2f(x + 20, y); glVertex2f(x + 20, y + 20); glVertex2f(x, y + 20); glEnd();
		}

	}

}

GLfloat motion, llcloud, rrcloud;

void display(void)

{

	glClearColor(0.52, 0.8, 0.92, 0.0); glClear(GL_COLOR_BUFFER_BIT); glPushMatrix(); glTranslatef(rcloudpos, 0, 0); glColor3f(1, 1, 1);
	rclouds(); glPopMatrix(); rcloudpos += rrcloud; if (rcloudpos > 200)
		rcloudpos = -200;

	else if (rcloudpos < -200)

		rcloudpos = 200;

	building(-200, 0, -200, 150, -150, 150, -150.77, -6.15, 0.5, 0.2, 0.7);

	building(-150.77, -6.15, -150.1, 130.61, -101.39, 117.96, -102.87, -12.6, 0.3, 0.0, 0.5); building(-102.87, -12.6, -102.87, 150.58, -50, 150, -50.65, -18.67, 0.3, 0.5, 0.7); building(-50.65, -18.67, -50.07, 131.31, 0, 129.91, 0, -25, 0.2, 0.8, 0.6);
	building(0, -25, 0, 166.45, 50.72, 171.37, 48.44, -31.05, 0.3, 0.2, 0.2); building(48.44, -31.05, 49.71, 81.41, 99.71, 74.89, 99.39, -37.42, 0.4, 0.2, 0.8); building(99.39, -37.42, 100, 150, 150.39, 122.8, 149.48, -43.15, 0.0, 0.2, 0.3); building(200, -50, 149.48, -43.15, 150.45, 134.12, 200, 109.53, 0.7, 0.5, 0.6);


	road(-200, 0, -200, -200, 200, -200, 200, -50, 0.18, 0.18, 0.18);

	road(-200, -100, 200, -80, 200, -95, -200, -140, 0.7, 0.7, 0.7); //GREY

	road(-79.23, -200, 200, -128, 200, -200, 200, -200, 0.0, 0.7, 0.2);




	glPushMatrix(); glTranslatef(lcloudpos, 0, 0); glColor3f(1, 1, 1);
	lclouds(); glPopMatrix(); lcloudpos += llcloud; if (lcloudpos > 200)
		lcloudpos = -200;

	else if (lcloudpos < -200)

		lcloudpos = 200; glPushMatrix(); glTranslatef(carposition, 0, 0);
	car();

	glPopMatrix();

	//signboard glColor3ub(25, 25, 25);
	{

		glBegin(GL_QUADS); glVertex2f(140, -200); glVertex2f(140, 20); glVertex2f(156.07, 20); glVertex2f(155.74, -200); glEnd(); glBegin(GL_QUADS); glVertex2f(140.85, 15); glVertex2f(96.43, 15); glVertex2f(96.74, -10); glVertex2f(140.73, -103.22); glEnd(); glBegin(GL_QUADS); glVertex2f(140.85, -87.89); glVertex2f(156.07, -85.71); glVertex2f(96.43, -83.23); glVertex2f(116.31, -80.74); glEnd();
	}

	glColor3f(1.0, 1.0, 0.0);

	glRasterPos2f(110, -20); //define position on the screen const char* string;
	string = "CITY SPEED LIMIT";

	while (*string) {

		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *string++);

	}

	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2f(115, -30); //define position on the screen const char* string1;
	string1 = " ' 40 kmph '    ";

	while (*string1) {

		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *string1++);

	}

	glColor3f(1.0, 1.0, 1.0);

	glRasterPos2f(120, -45); //define position on the screen const char* string2;
	string2 = "DRIVE SAFELY!";

	while (*string2) {

		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *string2++);

	} glPushMatrix(); glTranslatef(0.0, 220.0, 0.0); glColor3f(0.8, 0.3, 0.0); glutSolidSphere(20.0, 40, 40); glPopMatrix();
	carposition += motion;

	if (carposition > 200)

		carposition = -200;

	else if (carposition < -200)

		carposition = 200; glFlush(); glutPostRedisplay();
	glMatrixMode(GL_MODELVIEW);

}

void init(void) {
	glPointSize(4.0); glViewport(0, 0, 400, 400);
	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();
	glOrtho(-200.0, 200.0, -200.0, 250.0, 200, -200);

}

void car_menu(int choice) {

	switch (choice) {

	case 1: motion = -0.060;

		break;

	case 2: motion = 0.060;

		break;

	case 3: motion = 0.0;

		break;

	}

}

void lcloud_menu(int choice) {

	switch (choice) {

	case 4: llcloud = -0.040;

		break;

	case 5: llcloud = 0.040;

		break;

	case 6: llcloud = 0.0;

		break;

	}

}

void rcloud_menu(int choice) {

	switch (choice) {

	case 7: rrcloud = -0.040;

		break;

	case 8: rrcloud = 0.040;

		break;

	case 9: rrcloud = 0.0;

		break;

	}

}
void menu(int choice) {

	switch (choice) {

	case 1: car_menu(choice); break;
	case 2: car_menu(choice); break;
	case 3: car_menu(choice);

		break;

	case 4: lcloud_menu(choice); break;
	case 5: lcloud_menu(choice); break;
	case 6: lcloud_menu(choice);

		break;

	case 7: rcloud_menu(choice); break;
	case 8: rcloud_menu(choice); break;
	case 9: rcloud_menu(choice);

		break;

	}

	glutPostRedisplay(); // Update the display

}

int carmenu, lcloud, rcloud;
int main(int argc, char** argv)

{

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

	glutInitWindowSize(500, 500); glutInitWindowPosition(0, 0); glutCreateWindow("CAR AND CLOUD "); glutDisplayFunc(display);
	init(); carmenu = glutCreateMenu(car_menu); glutAddMenuEntry("left", 1); glutAddMenuEntry("right", 2); glutAddMenuEntry("stop", 3);
	lcloud = glutCreateMenu(lcloud_menu); glutAddMenuEntry("left", 4); glutAddMenuEntry("right", 5); glutAddMenuEntry("stop", 6);
	rcloud = glutCreateMenu(rcloud_menu); glutAddMenuEntry("left", 7); glutAddMenuEntry("right", 8); glutAddMenuEntry("stop", 9); glutCreateMenu(menu); glutAddSubMenu("Car", carmenu); glutAddSubMenu("Left Cloud", lcloud); glutAddSubMenu("Right Cloud", rcloud); glutAttachMenu(GLUT_RIGHT_BUTTON); glutMainLoop();
	return 0;

}