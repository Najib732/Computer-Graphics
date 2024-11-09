#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 400, 0, 490);
}

void display() {
    int x_store = 0;
    int y_store = 490;

    for (int r = 0; r < 7; r++) {
        glBegin(GL_QUADS);

        
        if (r == 0) {
            glColor3f(1.0f, 0.0f, 0.0f); // Red
        } else if (r == 1) {
            glColor3f(1.0f, 0.5f, 0.0f); // Orange
        } else if (r == 2) {
            glColor3f(1.0f, 1.0f, 0.0f); // Yellow
        } else if (r == 3) {
            glColor3f(0.0f, 1.0f, 0.0f); // Green
        } else if (r == 4) {
            glColor3f(0.0f, 0.0f, 1.0f); // Blue
        } else if (r == 5) {
            glColor3f(0.29f, 0.0f, 0.51f); // Indigo
        } else if (r == 6) {
            glColor3f(0.93f, 0.51f, 0.93f); // Violet
        }

        
        glVertex2d(x_store, y_store);
        glVertex2d(x_store + 400, y_store);
        glVertex2d(x_store + 400, y_store - 70);
        glVertex2d(x_store, y_store - 70);

        glEnd();

        x_store = 0;
        y_store = y_store - 70;
    }

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 490); // Set the window size
    glutCreateWindow("Rainbow Chessboard");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
