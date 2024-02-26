#include <GL/glut.h>///使用GLUT外掛
 void display()
 {
     glBegin(GL_POLYGON);
        glColor3f(1,1,1);
        glVertex2f((30-200)/200.0,-(45-200)/200.0);
        glVertex2f((46-200)/200.0,-(102-200)/200.0);
        glVertex2f((84-200)/200.0,-(23-200)/200.0);
        glEnd();
     glutSwapBuffers();
 }

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///初始化 GLUT 140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143

    glutCreateWindow("GLUT Shapes");///145
    glutDisplayFunc(display);///148 display函式
    glutMainLoop();///174 迴圈
}
