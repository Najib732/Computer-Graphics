#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,300 ,0,150);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

     glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(0, 0);
        glVertex2f(0, 50);
        glVertex2f(300, 50);
        glVertex2f(300,0);
    glEnd();

glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(0,100 );
        glVertex2f(0, 150);
        glVertex2f(300, 300);
        glVertex2f(300,100);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0,0 );
        glVertex2f(0, 150);
        glVertex2f(100, 75);

    glEnd();


glFlush();

    }

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(660, 480);
    glutCreateWindow("Palestine");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
