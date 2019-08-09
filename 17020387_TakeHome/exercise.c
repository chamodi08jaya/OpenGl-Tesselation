#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display(){
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	glBegin(GL_QUADS);
		glColor3f(0.42f,0.14f,0.08f);
		glVertex2f(-0.6,-0.48);
		glVertex2f(-0.7,-0.5);
		glVertex2f(-0.7,-0.6);
		glVertex2f(-0.65,-0.6);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.66f,0.27f,0.14f);
		glVertex2f(-0.6,-0.48);
		glVertex2f(-0.65,-0.6);
		glVertex2f(-0.52,-0.6);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.82f,0.38f,0.2f);
		glVertex2f(-0.4,-0.3);
		glVertex2f(-0.6,-0.48);
		glVertex2f(-0.52,-0.6);
		glVertex2f(-0.55,-0.6);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.93f,0.57f,0.25f);
		glVertex2f(-0.4,-0.3);
		glVertex2f(-0.55,-0.6);
		glVertex2f(-0.39,-0.6);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.96f,0.74f,0.48f);
		glVertex2f(-0.4,-0.3);
		glVertex2f(-0.39,-0.6);
		glVertex2f(-0.33,-0.6);
		glVertex2f(-0.15,-0.4);
	glEnd();
	

	glBegin(GL_TRIANGLES);
		glColor3f(0.96f,0.69f,0.33f);
		glVertex2f(-0.15,-0.4);
		glVertex2f(-0.33,-0.6);
		glVertex2f(-0.19,-0.6);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.93f,0.73f,0.47f);
		glVertex2f(-0.15,-0.4);
		glVertex2f(-0.19,-0.6);
		glVertex2f(0.0,-0.6);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.74f,0.64f,0.58f);
		glVertex2f(-0.15,-0.4);
		glVertex2f(0.0,-0.6);
		glVertex2f(0.1,-0.6);
		glVertex2f(0.15,-0.4);
	glEnd();	
	
	glBegin(GL_QUADS);
		glColor3f(0.50f,0.60f,0.57f);
		glVertex2f(0.15,-0.4);
		glVertex2f(0.1,-0.6);
		glVertex2f(0.3,-0.6);
		glVertex2f(0.35,-0.5);
	glEnd();
		
	glBegin(GL_TRIANGLES);
		glColor3f(0.32f,0.54f,0.54f);
		glVertex2f(0.35,-0.5);
		glVertex2f(0.3,-0.6);
		glVertex2f(0.36,-0.6);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.16f,0.63f,0.56f);
		glVertex2f(0.5,-0.4);
		glVertex2f(0.35,-0.5);
		glVertex2f(0.36,-0.6);
		glVertex2f(0.55,-0.6);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.10f,0.41f,0.49f);
		glVertex2f(0.5,-0.4);
		glVertex2f(0.55,-0.6);
		glVertex2f(0.60,-0.6);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.10f,0.33f,0.46f);
		glVertex2f(0.7,-0.5);
		glVertex2f(0.5,-0.4);
		glVertex2f(0.6,-0.6);
		glVertex2f(0.7,-0.6);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.50f,0.15f,0.09f);
		glVertex2f(-0.67,-0.3);
		glVertex2f(-0.7,-0.45);
		glVertex2f(-0.7,-0.5);
		glVertex2f(-0.6,-0.48);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.29f,0.08f,0.05f);
		glVertex2f(-0.7,-0.19);
		glVertex2f(-0.7,-0.5);
		glVertex2f(-0.67,-0.3);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.29f,0.09f,0.06f);
		glVertex2f(-0.6,-0.19);
		glVertex2f(-0.7,-0.19);
		glVertex2f(-0.67,-0.3);
	glEnd();	
	glBegin(GL_QUADS);
		glColor3f(0.46f,0.16f,0.09f);
		glVertex2f(-0.6,-0.19);
		glVertex2f(-0.67,-0.3);
		glVertex2f(-0.6,-0.48);
		glVertex2f(-0.57,-0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.60f,0.30f,0.24f);
		glVertex2f(-0.57,-0.19);
		glVertex2f(-0.6,-0.48);
		glVertex2f(-0.48,-0.25);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.79f,0.45f,0.35f);
		glVertex2f(-0.48,-0.25);
		glVertex2f(-0.6,-0.48);
		glVertex2f(-0.4,-0.3);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.37f,0.24f,0.25f);
		glVertex2f(-0.35,-0.19);
		glVertex2f(-0.57,-0.19);
		glVertex2f(-0.48,-0.25);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.55f,0.39f,0.4f);
		glVertex2f(-0.35,-0.19);
		glVertex2f(-0.48,-0.25);
		glVertex2f(-0.4,-0.3);
		glVertex2f(-0.3,-0.19);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.41f,0.32f,0.35f);
		glVertex2f(-0.3,-0.19);
		glVertex2f(-0.4,-0.3);
		glVertex2f(-0.15,-0.25);
		glVertex2f(-0.28,-0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.70f,0.53f,0.52f);
		glVertex2f(-0.15,-0.25);
		glVertex2f(-0.4,-0.3);
		glVertex2f(-0.15,-0.4);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.48f,0.43f,0.47f);
		glVertex2f(-0.15,-0.25);
		glVertex2f(-0.15,-0.4);
		glVertex2f(0.0,-0.3);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.54f,0.52f,0.54f);
		glVertex2f(0.0,-0.3);
		glVertex2f(-0.15,-0.4);
		glVertex2f(0.15,-0.4);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.21f,0.27f,0.32f);
		glVertex2f(-0.28,-0.19);
		glVertex2f(-0.15,-0.25);
		glVertex2f(0.15,-0.26);
		glVertex2f(-0.26,-0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.26f,0.37f,0.43f);
		glVertex2f(0.15,-0.26);
		glVertex2f(-0.15,-0.25);
		glVertex2f(0.0,-0.3);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.32f,0.48f,0.51f);
		glVertex2f(0.15,-0.26);
		glVertex2f(0.0,-0.3);
		glVertex2f(0.15,-0.4);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.14f,0.27f,0.33f);
		glVertex2f(-0.26,-0.19);
		glVertex2f(0.15,-0.26);
		glVertex2f(0.15,-0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.12f,0.41f,0.52f);
		glVertex2f(0.15,-0.19);
		glVertex2f(-0.15,-0.26);
		glVertex2f(0.35,-0.5);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.10f,0.30f,0.47f);
		glVertex2f(0.15,-0.19);
		glVertex2f(0.35,-0.5);
		glVertex2f(0.48,-0.3);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.13f,0.24f,0.43f);
		glVertex2f(0.48,-0.3);
		glVertex2f(0.35,-0.5);
		glVertex2f(0.5,-0.4);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.101f,0.27f,0.42f);
		glVertex2f(0.48,-0.3);
		glVertex2f(0.5,-0.4);
		glVertex2f(0.7,-0.5);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.14f,0.15f,0.32f);
		glVertex2f(0.48,-0.3);
		glVertex2f(0.7,-0.4);
		glVertex2f(0.7,-0.5);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.105f,0.29f,0.44f);
		glVertex2f(0.48,-0.3);
		glVertex2f(0.7,-0.4);
		glVertex2f(0.7,-0.2);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.21f,0.27f,0.32f);
		glVertex2f(0.7,-0.19);
		glVertex2f(0.7,-0.2);
		glVertex2f(0.48,-0.3);
		glVertex2f(0.6,-0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.105f,0.29f,0.44f);
		glVertex2f(0.48,-0.3);
		glVertex2f(0.6,-0.19);
		glVertex2f(0.3,-0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.133f,0.14f,0.30f);
		glVertex2f(0.48,-0.3);
		glVertex2f(0.1,-0.19);
		glVertex2f(0.3,-0.19);
	glEnd();

	//2 row

	glBegin(GL_QUADS);
		glColor3f(0.160f,0.588f,0.49f);
		glVertex2f(-0.6,-0.08);
		glVertex2f(-0.7,-0.1);
		glVertex2f(-0.7,-0.19);
		glVertex2f(-0.65,-0.19);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.18f,0.65f,0.55f);
		glVertex2f(-0.6,-0.08);
		glVertex2f(-0.65,-0.19);
		glVertex2f(-0.52,-0.19);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.18f,0.72f,0.63f);
		glVertex2f(-0.4,0.1);
		glVertex2f(-0.6,-0.08);
		glVertex2f(-0.52,-0.19);
		glVertex2f(-0.50,-0.19);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.20f,0.74f,0.71f);
		glVertex2f(-0.4,0.1);
		glVertex2f(-0.55,-0.19);
		glVertex2f(-0.39,-0.19);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.21f,0.67f,0.67f);
		glVertex2f(-0.4,0.1);
		
		glVertex2f(-0.39,-0.19);
		glVertex2f(-0.33,-0.19);
		glVertex2f(-0.15,0.07);
		
	glEnd();
	

	glBegin(GL_TRIANGLES);
		glColor3f(0.25f,0.61f,0.65f);
		glVertex2f(-0.15,0.07);
		glVertex2f(-0.33,-0.19);
		glVertex2f(-0.19,-0.19);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.25f,0.49f,0.677f);
		glVertex2f(-0.15,0.07);
		glVertex2f(-0.19,-0.19);
		glVertex2f(0.0,-0.19);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.28f,0.4f,0.63f);
		glVertex2f(-0.15,0.07);
		glVertex2f(0.0,-0.19);
		glVertex2f(0.1,-0.19);
		glVertex2f(0.15,0.17);
	glEnd();	
	
	glBegin(GL_QUADS);
		glColor3f(0.28f,0.34f,0.61f);
		glVertex2f(0.15,0.17);
		glVertex2f(0.1,-0.19);
		glVertex2f(0.3,-0.19);
		glVertex2f(0.35,-0.15);
	glEnd();
		
	glBegin(GL_TRIANGLES);
		glColor3f(0.29f,0.28f,0.52f);
		glVertex2f(0.35,-0.15);
		glVertex2f(0.3,-0.19);
		glVertex2f(0.36,-0.19);
	glEnd();
	
	
	glBegin(GL_QUADS);
		glColor3f(0.24f,0.18f,0.33f);
		glVertex2f(0.5,-0.1);
		glVertex2f(0.35,-0.15);
		glVertex2f(0.36,-0.19);
		glVertex2f(0.55,-0.19);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.19f,0.14f,0.30f);
		glVertex2f(0.5,-0.1);
		glVertex2f(0.55,-0.19);
		glVertex2f(0.60,-0.19);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.18f,0.12f,0.25f);
		glVertex2f(0.7,-0.05);
		glVertex2f(0.5,-0.1);
		glVertex2f(0.6,-0.19);
		glVertex2f(0.7,-0.19);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.13f,0.52f,0.43f);
		glVertex2f(-0.67,0.06);
		glVertex2f(-0.7,0.04);
		glVertex2f(-0.7,-0.1);
		glVertex2f(-0.6,-0.08);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.10f,0.36f,0.32f);
		glVertex2f(-0.7,0.19);
		glVertex2f(-0.7,0.04);
		glVertex2f(-0.67,0.06);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.17f,0.66f,0.59f);
		glVertex2f(-0.6,0.19);
		glVertex2f(-0.7,0.19);
		glVertex2f(-0.67,0.06);
	glEnd();	
	glBegin(GL_QUADS);
		glColor3f(0.14f,0.72f,0.65f);
		glVertex2f(-0.6,0.19);
		glVertex2f(-0.67,0.06);
		glVertex2f(-0.6,-0.08);
		glVertex2f(-0.57,0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.18f,0.68f,0.65f);
		glVertex2f(-0.57,0.19);
		glVertex2f(-0.6,-0.08);
		glVertex2f(-0.48,0.1);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.14f,0.54f,0.60f);
		glVertex2f(-0.48,0.1);
		glVertex2f(-0.6,-0.08);
		glVertex2f(-0.4,0.1);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.14f,0.53f,0.66f);
		glVertex2f(-0.35,0.19);
		glVertex2f(-0.57,0.19);
		glVertex2f(-0.48,0.1);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.21f,0.61f,0.71f);
		glVertex2f(-0.35,0.19);
		glVertex2f(-0.48,0.1);
		glVertex2f(-0.4,0.1);
		glVertex2f(-0.3,0.19);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.20f,0.51f,0.72f);
		glVertex2f(-0.3,0.19);
		glVertex2f(-0.4,0.1);
		glVertex2f(-0.15,0.15);
		glVertex2f(-0.28,0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.25f,0.48f,0.67f);
		glVertex2f(-0.15,0.15);
		glVertex2f(-0.4,0.1);
		glVertex2f(-0.15,0.07);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.23f,0.43f,0.67f);
		glVertex2f(-0.15,0.15);
		glVertex2f(-0.15,0.07);
		glVertex2f(0.0,0.16);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.27f,0.38f,0.65f);
		glVertex2f(0.0,0.16);
		glVertex2f(-0.15,0.07);
		glVertex2f(0.15,0.17);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.21f,0.27f,0.32f);
		glVertex2f(-0.28,0.19);
		glVertex2f(-0.15,0.07);
		glVertex2f(0.15,0.17);
		glVertex2f(-0.26,0.19);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.26f,0.37f,0.43f);
		glVertex2f(0.15,0.17);
		glVertex2f(0.35,-0.15);
		glVertex2f(0.5,-0.1);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.30f,0.30f,0.56f);
		glVertex2f(0.15,0.17);
		glVertex2f(0.5,-0.1);
		glVertex2f(0.6,0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.176f,0.15f,0.35f);
		glVertex2f(0.6,0.19);
		glVertex2f(0.5,-0.1);
		glVertex2f(0.7,-0.05);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.12f,0.41f,0.52f);
		glVertex2f(0.6,0.19);
		glVertex2f(0.7,-0.05);
		glVertex2f(0.7,0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.10f,0.30f,0.47f);
		glVertex2f(-0.28,0.19);
		glVertex2f(0.15,0.17);
		glVertex2f(0.6,0.19);
	glEnd();

	//row3
	glBegin(GL_QUADS);
		glColor3f(0.23f,0.69f,0.56f);
		glVertex2f(-0.6,0.48);
		glVertex2f(-0.7,0.5);
		glVertex2f(-0.7,0.6);
		glVertex2f(-0.65,0.6);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.54f,0.8f,0.62f);
		glVertex2f(-0.6,0.48);
		glVertex2f(-0.65,0.6);
		glVertex2f(-0.52,0.6);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.52f,0.79f,0.61f);
		glVertex2f(-0.4,0.3);
		glVertex2f(-0.6,0.48);
		glVertex2f(-0.52,0.6);
		glVertex2f(-0.55,0.6);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.69f,0.84f,0.67f);
		glVertex2f(-0.4,0.3);
		glVertex2f(-0.55,0.6);
		glVertex2f(-0.39,0.6);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.65f,0.83f,0.65f);
		glVertex2f(-0.4,0.3);
		glVertex2f(-0.39,0.6);
		glVertex2f(-0.33,0.6);
		glVertex2f(-0.15,0.4);
	glEnd();
	

	glBegin(GL_TRIANGLES);
		glColor3f(0.47f,0.78f,0.58f);
		glVertex2f(-0.15,0.4);
		glVertex2f(-0.33,0.6);
		glVertex2f(-0.19,0.6);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.58f,0.81f,0.62f);
		glVertex2f(-0.15,0.4);
		glVertex2f(-0.19,0.6);
		glVertex2f(0.0,0.6);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.55f,0.78f,0.6f);
		glVertex2f(-0.15,0.4);
		glVertex2f(0.0,0.6);
		glVertex2f(0.1,0.6);
		glVertex2f(0.15,0.4);
	glEnd();	
	
	
	glBegin(GL_QUADS);
		glColor3f(0.83f,0.89f,0.72f);
		glVertex2f(0.15,0.4);
		glVertex2f(0.1,0.6);
		glVertex2f(0.3,0.6);
		glVertex2f(0.35,0.5);
	glEnd();
		
	glBegin(GL_TRIANGLES);
		glColor3f(0.80f,0.88f,0.69f);
		glVertex2f(0.35,0.5);
		glVertex2f(0.3,0.6);
		glVertex2f(0.36,0.6);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.71f,0.85f,0.65f);
		glVertex2f(0.5,0.4);
		glVertex2f(0.35,0.5);
		glVertex2f(0.36,0.6);
		glVertex2f(0.55,0.6);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.57f,0.81f,0.61f);
		glVertex2f(0.5,0.4);
		glVertex2f(0.55,0.6);
		glVertex2f(0.60,0.6);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.62f,0.82f,0.61f);
		glVertex2f(0.7,0.5);
		glVertex2f(0.5,0.4);
		glVertex2f(0.6,0.6);
		glVertex2f(0.7,0.6);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.37f,0.75f,0.54f);
		glVertex2f(-0.67,0.3);
		glVertex2f(-0.7,0.45);
		glVertex2f(-0.7,0.5);
		glVertex2f(-0.6,0.48);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.64f,0.8f,0.66f);
		glVertex2f(-0.7,0.19);
		glVertex2f(-0.7,0.5);
		glVertex2f(-0.67,0.3);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.83f,0.87f,0.74f);
		glVertex2f(-0.6,0.19);
		glVertex2f(-0.7,0.19);
		glVertex2f(-0.67,0.3);
	glEnd();
		
	glBegin(GL_QUADS);
		glColor3f(0.88f,0.90f,0.76f);
		glVertex2f(-0.6,0.19);
		glVertex2f(-0.67,0.3);
		glVertex2f(-0.6,0.48);
		glVertex2f(-0.57,0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.8f,0.86f,0.76f);
		glVertex2f(-0.57,0.19);
		glVertex2f(-0.6,0.48);
		glVertex2f(-0.48,0.25);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.91f,0.90f,0.80f);
		glVertex2f(-0.48,0.25);
		glVertex2f(-0.6,0.48);
		glVertex2f(-0.4,0.3);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.94f,0.91f,0.81f);
		glVertex2f(-0.35,0.19);
		glVertex2f(-0.57,0.19);
		glVertex2f(-0.48,0.25);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.86f,0.89f,0.74f);
		glVertex2f(-0.35,0.19);
		glVertex2f(-0.48,0.25);
		glVertex2f(-0.4,0.3);
		glVertex2f(-0.3,0.19);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.8f,0.87f,0.70f);
		glVertex2f(-0.3,0.19);
		glVertex2f(-0.4,0.3);
		glVertex2f(-0.15,0.25);
		glVertex2f(-0.28,0.19);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.80f,0.88f,0.70f);
		glVertex2f(-0.15,0.25);
		glVertex2f(-0.4,0.3);
		glVertex2f(-0.15,0.4);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.86f,0.89f,0.74f);
		glVertex2f(-0.15,0.25);
		glVertex2f(-0.15,0.4);
		glVertex2f(0.0,0.3);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.85f,0.89f,0.73f);
		glVertex2f(0.0,0.3);
		glVertex2f(-0.15,0.4);
		glVertex2f(0.15,0.4);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.92f,0.91f,0.8f);
		glVertex2f(-0.28,0.19);
		glVertex2f(-0.15,0.25);
		glVertex2f(0.15,0.26);
		glVertex2f(-0.26,0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.90f,0.91f,0.79f);
		glVertex2f(0.15,0.26);
		glVertex2f(-0.15,0.25);
		glVertex2f(0.0,0.3);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.74f,0.89f,0.74f);
		glVertex2f(0.15,0.26);
		glVertex2f(0.0,0.3);
		glVertex2f(0.15,0.4);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.92f,0.91f,0.8f);
		glVertex2f(-0.26,0.19);
		glVertex2f(0.15,0.26);
		glVertex2f(0.15,0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.88f,0.90f,0.76f);
		glVertex2f(0.15,0.19);
		glVertex2f(-0.15,0.26);
		glVertex2f(0.35,0.5);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.90f,0.91f,0.79f);
		glVertex2f(0.15,0.19);
		glVertex2f(0.35,0.5);
		glVertex2f(0.48,0.3);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.83f,0.87f,0.70f);
		glVertex2f(0.48,0.3);
		glVertex2f(0.35,0.5);
		glVertex2f(0.5,0.4);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.83f,0.89f,0.70f);
		glVertex2f(0.48,0.3);
		glVertex2f(0.5,0.4);
		glVertex2f(0.7,0.5);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.81f,0.87f,0.69f);
		glVertex2f(0.48,0.3);
		glVertex2f(0.7,0.4);
		glVertex2f(0.7,0.5);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.78f,0.85f,0.64f);
		glVertex2f(0.48,0.3);
		glVertex2f(0.7,0.4);
		glVertex2f(0.7,0.2);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.81f,0.87f,0.69f);
		glVertex2f(0.7,0.19);
		glVertex2f(0.7,0.2);
		glVertex2f(0.48,0.3);
		glVertex2f(0.6,0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.82f,0.878f,0.70f);
		glVertex2f(0.48,0.3);
		glVertex2f(0.6,0.19);
		glVertex2f(0.3,0.19);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.81f,0.87f,0.69f);
		glVertex2f(0.48,0.3);
		glVertex2f(0.1,0.19);
		glVertex2f(0.3,0.19);
	glEnd();


		
	
	

	glutSwapBuffers(); 
		


}

int main(int argc,char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);    
    glutInitWindowSize(714,533);         
    glutInitWindowPosition(1,1);     
    glutCreateWindow("Triangle Tesselation"); 
    glutDisplayFunc(display);           
    
    glutMainLoop(); 
    return 0;
}
