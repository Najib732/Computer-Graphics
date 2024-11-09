#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 640, 0, 640);
}

void display() {
    int x = 0;
    int y = 640;
    int x_store = x;
    int y_store = y;

    for (int r = 0; r < 8; r++) {
        for (int c = 0; c < 8; c++) {
            
            if ((r+c) % 2 == 0) {
                glColor3f(1.0f, 1.0f, 1.0f); // White
            } else {
                glColor3f(0.0f, 0.0f, 0.0f); // Black
            }

           
            glBegin(GL_QUADS);
            glVertex2d(x_store, y_store);
            glVertex2d(x_store + 80, y_store);
            glVertex2d(x_store + 80, y_store - 80);
            glVertex2d(x_store, y_store - 80);
            glEnd();

            
            x_store += 80;// Move to the next column
        }

        // Move to the next row and reset x to 0
        y_store -= 80;
        x_store = 0;
    }

    glFlush(); // Render the shapes
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 640);//set the windo size
    glutCreateWindow("Chessboard");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
