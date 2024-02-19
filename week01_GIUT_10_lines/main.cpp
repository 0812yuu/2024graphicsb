/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include <GL/glut.h>///�ϥ�GLUT�~��
 void display()
 {
     glutSolidTeapot(0.3);
     glutSwapBuffers();
 }

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///��l�� GLUT 140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143

    glutCreateWindow("GLUT Shapes");///145
    glutDisplayFunc(display);///148 display�禡
    glutMainLoop();///174 �j��
}
