#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>


void init() {
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,90 ,0,60);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);


      glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(5, 60);
        glVertex2f(47.5, 36);
        glVertex2f(90, 36);
        glVertex2f(90,60);
    glEnd();

     glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(14, 60);
        glVertex2f(90, 60);
        glVertex2f(90, 40);
        glVertex2f(50,40);
    glEnd();

      glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(5, 0);
        glVertex2f(47.5, 24);
        glVertex2f(90, 24);
        glVertex2f(90,0);
    glEnd();

     glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(14, 0);
        glVertex2f(50, 20);
        glVertex2f(90, 20);
        glVertex2f(90,0);
    glEnd();


     glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0, 6);
        glVertex2f(37.5, 30);
        glVertex2f(0, 54);

    glEnd();

     glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0, 10);
        glVertex2f(32, 30);
        glVertex2f(0, 50);

    glEnd();





glFlush();

    }

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(660, 480);
    glutCreateWindow("South Africa");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
