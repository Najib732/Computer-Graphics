#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,660 ,0,480);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

     glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(0, 0);
        glVertex2f(0, 180);
        glVertex2f(180, 180);
        glVertex2f(180,0);
    glEnd();

glColor3f(0.0, 0.13, 0.36);
    glBegin(GL_QUADS);
        glVertex2f(210,0 );
        glVertex2f(210, 480);
        glVertex2f(270, 480);
        glVertex2f(270,0);
    glEnd();

    glColor3f(0.0, 0.13, 0.36);
    glBegin(GL_QUADS);
        glVertex2f(0,210 );
        glVertex2f(0, 270);
        glVertex2f(660, 270);
        glVertex2f(660,210);
    glEnd();

       glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(0,300 );
        glVertex2f(0, 480);
        glVertex2f(180, 480);
        glVertex2f(180,300);
    glEnd();

        glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(300,480 );
        glVertex2f(660, 480);
        glVertex2f(660, 300);
        glVertex2f(300,300);
    glEnd();

        glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(300,0 );
        glVertex2f(300, 180);
        glVertex2f(660, 180);
        glVertex2f(660,0);
    glEnd();


glFlush();

    }

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(660, 480);
    glutCreateWindow("NORWAY");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
