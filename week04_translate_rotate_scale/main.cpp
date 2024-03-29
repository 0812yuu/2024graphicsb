#include <GL/glut.h>///使用GLUT外掛
float teapotX=0.5, teapotY=0;
float angle=0;
float s=0.3;
 void display()
 {
     glClearColor(1,1,0.9,1);
     glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
     glColor3f(0,1,0);
     glPushMatrix();
        glTranslatef(teapotX,teapotY,0);
        glRotatef(angle++,0,0,1);
        glScalef(s,s,s);
        glutSolidTeapot(0.3);
     glPopMatrix();
     glutSwapBuffers();
 }

 void motion(int x,int y)
 {
     s= 1 +(x-150)/150.0;///變大變小
     display();

 }

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///初始化 GLUT 140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143

    glutCreateWindow("week04_translate_rotate_scale");///145
    glutDisplayFunc(display);///148 display函式
    glutMotionFunc(motion);
    glutMainLoop();///174 迴圈
}
