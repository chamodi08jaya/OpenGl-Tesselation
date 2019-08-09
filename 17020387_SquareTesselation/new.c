#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display(){
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	
	glBegin(GL_POLYGON);
		glColor3f(0.133f,0.69411f,0.2980f);
		glVertex2f(-1.00,0.2);
		glVertex2f(-0.70,0.2);
		glVertex2f(-0.70,0.5);
		glVertex2f(-1.00,0.5);
	glEnd();
	
	glBegin(GL_POLYGON);
		glColor3f(0.247f,0.2823f,0.8f);
		glVertex2f(-0.70,0.2);
		glVertex2f(-0.40,0.2);
		glVertex2f(-0.40,0.5);
		glVertex2f(-0.70,0.5);
	glEnd();
	
	glBegin(GL_POLYGON);
		glColor3f(0.639f,0.2862f,0.6431f);
		glVertex2f(-0.40,0.2);
		glVertex2f(-0.10,0.2);
		glVertex2f(-0.10,0.5);
		glVertex2f(-0.40,0.5);
	glEnd();


	glBegin(GL_POLYGON);
		glColor3f(1.000f,0.9490f,0.0f);
		glVertex2f(-1.00,0.2);
		glVertex2f(-0.70,0.2);
		glVertex2f(-0.70,-0.1);
		glVertex2f(-1.00,-0.1);
	glEnd();
	
	glBegin(GL_POLYGON);
		glColor3f(0.501f,0.501f,1.0f);
		glVertex2f(-0.70,0.2);
		glVertex2f(-0.40,0.2);
		glVertex2f(-0.40,-0.1);
		glVertex2f(-0.70,-0.1);
	glEnd();
	
	glBegin(GL_POLYGON);
		glColor3f(1.000f,0.4980f,0.1529f);
		glVertex2f(-0.40,0.2);
		glVertex2f(-0.10,0.2);
		glVertex2f(-0.10,-0.1);
		glVertex2f(-0.40,-0.1);
	glEnd();

	glFlush();
	glutSwapBuffers(); 
		
}



int main(int argc,char** argv){
	//int mode=GLUT_RGB|GLUT_DOUBLE;
	glutInit(&argc, argv);
    	glutInitDisplayMode(GLUT_SINGLE);    
    	glutInitWindowSize(714,533);        
    	glutInitWindowPosition(1,1);    
    	glutCreateWindow("Square Tesselation"); 
    	glutDisplayFunc(display);            
    
    	glutMainLoop(); 
    return 0;
}
