#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>



void init() {
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,160 ,0,100);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

     glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(0, 20);
        glVertex2f(0, 40);
        glVertex2f(160, 40);
        glVertex2f(160,20);
    glEnd();

     glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(0, 60);
        glVertex2f(0, 80);
        glVertex2f(160, 80);
        glVertex2f(160,60);
    glEnd();

         glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(0, 40);
        glVertex2f(0, 100);
        glVertex2f(60, 100);
        glVertex2f(60,40);
    glEnd();

       glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(20, 55);
        glVertex2f(30, 90);
        glVertex2f(40, 55);
        glVertex2f(30,60);
    glEnd();

       glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(15, 77);
        glVertex2f(45, 77);
        glVertex2f(30, 62.5);

    glEnd();



glFlush();

    }

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 400);
    glutCreateWindow("Togo");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
