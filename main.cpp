#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<math.h>
using namespace std;

float _move_plane = -0.5f;
float move_car1 = 0.0f;
float move_suv = 0.5f;
float angle_seesaw = 0.0f;
float move_cloud = 0.0f;
float angle_watchtower = 0.0f;

void AeroPlane()
{
    //body
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.5f);
	glVertex2f(-0.5f, 0.8f);
	glVertex2f(-0.55f, 0.92f);
	glVertex2f(-0.8f, 0.65f);
	glVertex2f(-0.85f, 0.725f);
	glVertex2f(-0.95f, 0.7f);
    glEnd();

    //Nose
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.5f, 0.8f);
	glVertex2f(-0.4f, 0.9f);
	glVertex2f(-0.48f, 0.95f);
	glVertex2f(-0.56f, 0.92f);
    glEnd();

    //wings
    glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.9f, 0.9f);
	glVertex2f(-0.8f, 0.45f);
	glVertex2f(-0.71f, 0.52f);
	glVertex2f(-0.61f, 0.73f);
	glVertex2f(-0.7f, 0.65f);
    glEnd();

    //door
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.6f);
	glVertex2f(-0.53f, 0.77f);
	glVertex2f(-0.55f, 0.82f);
	glVertex2f(-0.58f, 0.78f);
	glVertex2f(-0.56f, 0.74f);
    glEnd();

    //windows
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.6f);
	glVertex2f(-0.5f, 0.83f);
	glVertex2f(-0.44f, 0.885f);
	glVertex2f(-0.475f, 0.92f);
	glVertex2f(-0.53f, 0.9f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.6f);
	glVertex2f(-0.56f, 0.84f);
	glVertex2f(-0.57f, 0.86f);
	glVertex2f(-0.66f, 0.755f);
	glVertex2f(-0.65f, 0.735f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.6f);
	glVertex2f(-0.68f, 0.7f);
	glVertex2f(-0.69f, 0.72f);
	glVertex2f(-0.79f, 0.62f);
	glVertex2f(-0.78f, 0.59f);
    glEnd();
}

//Sound

void sound()
{

    PlaySound("fly.wav", NULL, SND_ASYNC|SND_FILENAME);


}
void sound2()
{

    PlaySound("birds.wav", NULL, SND_ASYNC|SND_FILENAME);


}


void Cloud()
{
 //cloud 1
     glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,1.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x+0.2,y+0.82 );
}
glEnd();

 glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,1.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x+0.28,y+0.79 );
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,1.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x+0.25,y+0.83 );
}
glEnd();

//cloud 2
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,1.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x-0.21,y+0.85 );
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,1.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x-0.27,y+0.79 );
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,1.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x-0.25,y+0.85 );
}
glEnd();
}


void Sun()
{
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,0.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.05;
float x = r * cos(A);
float y = 2*r * sin(A);
glVertex2f(x+0.53,y+0.85 );
}
glEnd();

}

void Moon()
{
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,1.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.05;
float x = r * cos(A);
float y = 2*r * sin(A);
glVertex2f(x-0.23,y+0.85 );
}
glEnd();

}


void Light_university()
{
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,1.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.02;
float x = r * cos(A);
float y = 2*r * sin(A);
glVertex2f(x+0.33,y-0.18 );
}
glEnd();

glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.6f, 0.6f, 0.4f);
	glVertex2f(0.36f, -0.21f);
	glVertex2f(0.3f, -0.21f);
	glEnd();
}

void Light_university_night()
{
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,0.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.02;
float x = r * cos(A);
float y = 2*r * sin(A);
glVertex2f(x+0.33,y-0.18 );
}
glEnd();

glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.6f, 0.6f, 0.4f);
	glVertex2f(0.36f, -0.21f);
	glVertex2f(0.3f, -0.21f);
	glEnd();
}


void Bench_university()
{
	glLineWidth(15.0);
	glBegin(GL_LINES);
	glColor3f(0.8f, 0.5f, 0.8f);
	glVertex2f(0.74f, -0.13f);
	glVertex2f(0.74f, -0.23f);
	glEnd();

	glLineWidth(15.0);
	glBegin(GL_LINES);
	glColor3f(0.8f, 0.5f, 0.8f);
	glVertex2f(0.92f, -0.13f);
	glVertex2f(0.92f, -0.23f);
	glEnd();

	glLineWidth(25.0);
	glBegin(GL_LINES);
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex2f(0.72f, -0.13f);
	glVertex2f(0.94f, -0.13f);
	glEnd();
}

void Tree()
{

//---------------------------------------------------

    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(0.14f, 0.30f);
    glVertex2f(0.17f, 0.30f);
    glVertex2f(0.17f, 0.5f);
    glVertex2f(0.14f, 0.5f);
    glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.21f, 0.45f);
    glVertex2f(0.1f, 0.45f);
    glVertex2f(0.16f, 0.60f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.4f, 0.0f);
    glVertex2f(0.21f, 0.52f);
    glVertex2f(0.1f, 0.52f);
    glVertex2f(0.16f, 0.68f);
    glEnd();
//---------------------------------------------------

glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.0f, 0.0f);
    glVertex2f(-0.23f, 0.10f);
    glVertex2f(-0.27f, 0.10f);
    glVertex2f(-0.27f, 0.4f);
    glVertex2f(-0.23f, 0.4f);
    glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.3f, 0.0f);
    glVertex2f(-0.35f, 0.4f);
    glVertex2f(-0.15f, 0.4f);
    glVertex2f(-0.25f, 0.60f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.3f, 0.0f);
    glVertex2f(-0.35f, 0.48f);
    glVertex2f(-0.15f, 0.48f);
    glVertex2f(-0.25f, 0.65f);
    glEnd();
//---------------------------------------------------
glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(-0.23f, -0.63f);
    glVertex2f(-0.27f, -0.63f);
    glVertex2f(-0.27f, -0.4f);
    glVertex2f(-0.23f, -0.4f);
    glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.3f, 0.0f);
    glVertex2f(-0.35f, -0.4f);
    glVertex2f(-0.15f, -0.4f);
    glVertex2f(-0.25f, -0.25f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.3f, 0.0f);
    glVertex2f(-0.35f, -0.35f);
    glVertex2f(-0.15f, -0.35f);
    glVertex2f(-0.25f, -0.15f);
    glEnd();
//--------------------------------------------------
glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(-0.78f, -0.55f);
    glVertex2f(-0.81f, -0.55f);
    glVertex2f(-0.81f, -0.23f);
    glVertex2f(-0.78f, -0.23f);
    glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.3f, 0.0f);
    glVertex2f(-0.86f, -0.23f);
    glVertex2f(-0.72f, -0.23f);
    glVertex2f(-0.795f, -0.03f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.3f, 0.0f);
    glVertex2f(-0.86f, -0.15f);
    glVertex2f(-0.72f, -0.15f);
    glVertex2f(-0.795f, 0.05f);
    glEnd();

}

void University()
{
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3f(0.3,0.3,0.3);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.17;
float x = r * cos(A);
float y = 2*r * sin(A);
glVertex2f(x+0.55,y-0.39 );
}
glEnd();
//building block
glBegin(GL_QUADS);
    glColor3f(0.3,0.0,0.0);
    glVertex2f(.2,-0.65);
    glVertex2f(.45,-0.65);
    glVertex2f(.45,-0.3);
    glVertex2f(.2,-0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex2f(.65,-0.65);
    glVertex2f(.9,-0.65);
    glVertex2f(.9,-0.3);
    glVertex2f(.65,-0.3);
    glEnd();
//doors
glBegin(GL_QUADS);
    glColor3f(0.1,0.0,0.0);
    glVertex2f(.735,-0.65);
    glVertex2f(.815,-0.65);
    glVertex2f(.815,-0.55);
    glVertex2f(.735,-0.55);
     glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1,0.0,0.0);
    glVertex2f(.305,-0.65);
    glVertex2f(.355,-0.65);
    glVertex2f(.355,-0.55);
    glVertex2f(.305,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1,0.0,0.0);
    glVertex2f(.525,-0.65);
    glVertex2f(.585,-0.65);
    glVertex2f(.585,-0.55);
    glVertex2f(.525,-0.55);
     glEnd();
 //windows right building
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.85,-0.54);
    glVertex2f(.88,-0.54);
    glVertex2f(.88,-0.57);
    glVertex2f(.85,-0.57);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.67,-0.54);
    glVertex2f(.7,-0.54);
    glVertex2f(.7,-0.57);
    glVertex2f(.67,-0.57);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.67,-0.52);
    glVertex2f(.88,-0.52);
    glVertex2f(.88,-0.49);
    glVertex2f(.67,-0.49);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.67,-0.44);
    glVertex2f(.88,-0.44);
    glVertex2f(.88,-0.41);
    glVertex2f(.67,-0.41);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.67,-0.38);
    glVertex2f(.88,-0.38);
    glVertex2f(.88,-0.35);
    glVertex2f(.67,-0.35);
     glEnd();

//windows left building
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.22,-0.54);
    glVertex2f(.25,-0.54);
    glVertex2f(.25,-0.57);
    glVertex2f(.22,-0.57);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.4,-0.54);
    glVertex2f(.43,-0.54);
    glVertex2f(.43,-0.57);
    glVertex2f(.4,-0.57);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.22,-0.52);
    glVertex2f(.43,-0.52);
    glVertex2f(.43,-0.49);
    glVertex2f(.22,-0.49);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.22,-0.44);
    glVertex2f(.43,-0.44);
    glVertex2f(.43,-0.41);
    glVertex2f(.22,-0.41);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.22,-0.38);
    glVertex2f(.43,-0.38);
    glVertex2f(.43,-0.35);
    glVertex2f(.22,-0.35);
     glEnd();
//circle window
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.45,-0.36);
    glVertex2f(.65,-0.36);
    glVertex2f(.65,-0.32);
    glVertex2f(.45,-0.32);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.42,-0.28);
    glVertex2f(.68,-0.28);
    glVertex2f(.68,-0.24);
    glVertex2f(.42,-0.24);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.47,-0.21);
    glVertex2f(.63,-0.21);
    glVertex2f(.63,-0.17);
    glVertex2f(.47,-0.17);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(.45,-0.44);
    glVertex2f(.65,-0.44);
    glVertex2f(.65,-0.4);
    glVertex2f(.45,-0.4);
     glEnd();
//road
glBegin(GL_QUADS);
    glColor3f(0.5,0.0,0.0);
    glVertex2f(0.43,-0.65);
    glVertex2f(0.68,-0.65);
    glVertex2f(.68,-0.7);
    glVertex2f(.43,-0.7);
    glEnd();

}

void University_night()
{
    //doors
glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(.735,-0.65);
    glVertex2f(.815,-0.65);
    glVertex2f(.815,-0.55);
    glVertex2f(.735,-0.55);
     glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(.305,-0.65);
    glVertex2f(.355,-0.65);
    glVertex2f(.355,-0.55);
    glVertex2f(.305,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(.525,-0.65);
    glVertex2f(.585,-0.65);
    glVertex2f(.585,-0.55);
    glVertex2f(.525,-0.55);
     glEnd();
 //windows right building
glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(.85,-0.54);
    glVertex2f(.88,-0.54);
    glVertex2f(.88,-0.57);
    glVertex2f(.85,-0.57);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(.67,-0.54);
    glVertex2f(.7,-0.54);
    glVertex2f(.7,-0.57);
    glVertex2f(.67,-0.57);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(.67,-0.52);
    glVertex2f(.88,-0.52);
    glVertex2f(.88,-0.49);
    glVertex2f(.67,-0.49);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(.67,-0.44);
    glVertex2f(.88,-0.44);
    glVertex2f(.88,-0.41);
    glVertex2f(.67,-0.41);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(.67,-0.38);
    glVertex2f(.88,-0.38);
    glVertex2f(.88,-0.35);
    glVertex2f(.67,-0.35);
     glEnd();

//windows left building
glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(.22,-0.54);
    glVertex2f(.25,-0.54);
    glVertex2f(.25,-0.57);
    glVertex2f(.22,-0.57);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(.4,-0.54);
    glVertex2f(.43,-0.54);
    glVertex2f(.43,-0.57);
    glVertex2f(.4,-0.57);
     glEnd();

     glBegin(GL_QUADS);
   glColor3f(0.9,0.9,0.0);
    glVertex2f(.22,-0.52);
    glVertex2f(.43,-0.52);
    glVertex2f(.43,-0.49);
    glVertex2f(.22,-0.49);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(.22,-0.44);
    glVertex2f(.43,-0.44);
    glVertex2f(.43,-0.41);
    glVertex2f(.22,-0.41);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.0);
    glVertex2f(.22,-0.38);
    glVertex2f(.43,-0.38);
    glVertex2f(.43,-0.35);
    glVertex2f(.22,-0.35);
     glEnd();
//circle window
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(.45,-0.36);
    glVertex2f(.65,-0.36);
    glVertex2f(.65,-0.32);
    glVertex2f(.45,-0.32);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(.42,-0.28);
    glVertex2f(.68,-0.28);
    glVertex2f(.68,-0.24);
    glVertex2f(.42,-0.24);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(.47,-0.21);
    glVertex2f(.63,-0.21);
    glVertex2f(.63,-0.17);
    glVertex2f(.47,-0.17);
     glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(.45,-0.44);
    glVertex2f(.65,-0.44);
    glVertex2f(.65,-0.4);
    glVertex2f(.45,-0.4);
     glEnd();
}


void update_Plane(int value)
 {
    _move_plane += .02;
    if(_move_plane > 1.0)
    {
        _move_plane = -0.3;
    }
	glutPostRedisplay();
	glutTimerFunc(50, update_Plane, 0);
}


void updateCloud(int value) {

 move_cloud += 0.2f;
	if (move_cloud > 1.3)
    {
        move_cloud = -1.3;
    }
glutPostRedisplay();
glutTimerFunc(1500, updateCloud, 0);
}

void display_day() {
      glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
Sun();
//Cloud movement
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud, 0.0f, 0.0f);
Cloud();
glPopMatrix();
glutSwapBuffers();

University();

Tree();

Light_university();

Bench_university();

//PLANE
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(_move_plane-0.9, _move_plane+0.3, 0.0f);
glScalef(0.3f, 0.3f, 1.0f);
AeroPlane();
glPopMatrix();
glutSwapBuffers();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_car1, 0.0f, 0.0f);
glPopMatrix();
glutSwapBuffers();


//SEESAW SLIDE
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.55f, -0.5f, 0.0f);
glRotatef(angle_seesaw, 0.0f, 0.0f,1.0f);
//Seats();
glPopMatrix();
glutSwapBuffers();

//SWING LEFT SETUP
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.6f, 0.3f, 0.0f);
glScalef(0.3f, 0.3f, 1.0f);
//Swing_left();
glPopMatrix();

//SWING RIGHT SETUP
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.3f, 0.3f, 0.0f);
glScalef(0.3f, 0.3f, 1.0f);
//Swing_right();
glPopMatrix();

//SUV Setup
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_suv, -0.95f, 0.0f);
glScalef(0.2f, 0.3f, 1.0f);
//Car_suv();
//glutTimerFunc(100, updateSUV, 0);
glPopMatrix();
glutSwapBuffers();

 glFlush(); // Render now
}

void display_night()
{
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
Moon();

University();
University_night();

Tree();

Light_university_night();

//Bench_park();
Bench_university();

//PLANE
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(_move_plane-0.9, _move_plane+0.3, 0.0f);
glScalef(0.3f, 0.3f, 1.0f);
AeroPlane();
glPopMatrix();
glutSwapBuffers();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_car1, 0.0f, 0.0f);

glPopMatrix();
glutSwapBuffers();


//SEESAW SLIDE
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.55f, -0.5f, 0.0f);
glRotatef(angle_seesaw, 0.0f, 0.0f,1.0f);

glPopMatrix();
glutSwapBuffers();

//SWING LEFT SETUP
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.6f, 0.3f, 0.0f);
glScalef(0.3f, 0.3f, 1.0f);

glPopMatrix();

//SWING RIGHT SETUP
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.3f, 0.3f, 0.0f);
glScalef(0.3f, 0.3f, 1.0f);
//Swing_right();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_suv, -0.95f, 0.0f);
glScalef(0.2f, 0.3f, 1.0f);

glPopMatrix();
glutSwapBuffers();

glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'd':
glClearColor(0.0f, 0.79f, 0.99f, 1.0f); // Set background color
    glutDisplayFunc(display_day);
    glutPostRedisplay();
    sound2();
    break;
case 'n':
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color
    glutDisplayFunc(display_night);
    break;
glutPostRedisplay();
//sound();
	}}

int main(int argc, char** argv) {
glutInit(&argc, argv);

glutInitWindowSize(1140, 650);
glutCreateWindow("Gulshan Lake Park");

glutDisplayFunc(display_day);
sound();

glutTimerFunc(50, update_Plane, 0); //timer for lane moving

glutTimerFunc(1500, updateCloud, 0);

glutKeyboardFunc(handleKeypress);
glutMainLoop();
return 0;
}
