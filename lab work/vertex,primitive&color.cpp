#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

void init() {
    glClearColor(0.5, 0.5, 0.5, 1.0); // Set background color to grey
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-250, 250, -250, 250); // Set orthographic projection to range -250 to 250
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw vertical and horizontal lines
    
    glBegin(GL_LINES);
        glColor3f(0.0, 1.0, 0.0); // Green color
        glVertex2f(0.0, -250.0);
        glColor3f(1.0, 0.0, 0.0);//red
        glVertex2f(0.0, 250.0);
        glColor3f(0.0, 1.0, 0.0); // Green color
        glVertex2f(-250.0, 0.0);
        glColor3f(1.0, 0.0, 0.0);//red
        glVertex2f(250.0, 0.0);
    glEnd();
      
    // Draw red triangle (top-left)
   
    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-200.0, 50.0);
        glVertex2f(-100.0, 50.0);
        glVertex2f(-150.0, 200.0);
    glEnd();

    // Draw yellow hexagon (top-right)
    
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(100.0, 50.0);//left_buttom
        glVertex2f(170.0, 50.0);//right_buttom
        glVertex2f(180.0, 115.0);//*
        glVertex2f(170.0, 180.0);//right_top
        glVertex2f(100.0, 180.0);//left_top
        glVertex2f(90.0, 115.0);//*
    glEnd();

    // Draw green square (bottom-left)
   
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
    //  gelvertex2f(x----------y);
    glVertex2f(-200.0, -60.0);  // Top-left
    glVertex2f(-50.0, -60.0);   // Top-right
    glVertex2f(-50.0, -210.0);  // Bottom-right
    glVertex2f(-200.0, -210.0); // Bottom-left
 
    glEnd();

    // Draw orange triangle (bottom-right)
  
    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.5, 0.0);
        glVertex2f(75.0, -150.0);//left point
        glVertex2f(125.0, -90.0);//upper point
        glVertex2f(175.0, -150.0);//right point
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Vertex, Primitive & Color");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
