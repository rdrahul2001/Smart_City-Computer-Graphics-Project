#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include<Windows.h>
#include<mmsystem.h>
using namespace std;

float _movefir = 0.0f;///fish
float _movet = 0.0f;///train
float _moveca = 0.0f;///Yellow car
float _movefiy = 0.0f;///yellow fish
float _moveb = 0.0f;///boat
float _movecl1 = 0.0f;///cloud1
float _movecl2 = 0.0f;///cloud2
float speed = 0.0f;///Red car
float speedt = 0.0f;///train speed
float sr=133;///sky Color
float sg=204;
float sb=250;
float cr=255;///cloud Color
float cg=255;
float cb=255;
float str=133;///star Color
float stg=204;
float stb=250;
float mr=255;///moon and sun
float mg=255;
float mb=0;
float br= 130;///building and train window red
float bg= 150;
float bb= 137;
float la=102;///car light red
float lb=102;
float lc=102;
float ra=102;///road red
float rb=102;
float rc=102;
float _angle1 = 0.0f;///Red car
int dcheck=0;

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity(); ///Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

	///sky
    glPushMatrix();
        glBegin(GL_POLYGON);
        glColor3ub(sr,sg,sb);
        glVertex2f(1.00f,  0.09f);
        glVertex2f(1.00f, 1.00f);
        glVertex2f(-1.00f,1.00f);
        glVertex2f(-1.00f, 0.09f);
        glEnd();
        glPopMatrix();

 ///Stars///

    glPushMatrix();


                    glPointSize(2.0);
                   glColor3ub(str,stg,stb);

                   glBegin(GL_POINTS);

                    glVertex2f(0.33,0.65);
                    glVertex2f(-0.33,0.7);
                    glVertex2f(-0.43,0.8);
                    glVertex2f(0.6,0.88);
                    glVertex2f(0.67,0.68);
                    glVertex2f(-0.53,0.8);
                    glVertex2f(-.41,0.65);
                    glVertex2f(-0.19,0.78);
                    glVertex2f(0.07,0.9);
                    glVertex2f(0.23,0.96);
                    glVertex2f(0.27,1.05);
                    glVertex2f(0.13,1.1);
                    glVertex2f(-0.75,0.75);
                    glVertex2f(-0.56,0.90);

       glEnd();



    glPopMatrix();

    	///Moon and sun //

	glPushMatrix();
    glTranslatef(0.787, 0.87, 0.0);
    glColor3ub(mr,mg,mb);
	glutSolidSphere(0.1, 50, 50);
	glPopMatrix();

///

    ///clouds///
	///cloud1///

	    glPushMatrix();
   glTranslatef(_movecl1+0.2, 0.8, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

       glPushMatrix();
   glTranslatef(_movecl1+0.28, 0.8, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

  glPushMatrix();
   glTranslatef(_movecl1+0.35, 0.8, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl1+0.2, 0.75, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl1+0.28, 0.75, 0.0);
   glColor3ub(cr,cg,cb);
   glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl1+0.35, 0.75, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl1+0.15, 0.77, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl1+0.39, 0.77, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

///Cloud 2///
            glPushMatrix();
   glTranslatef(_movecl2+0.6, 0.6, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl2+0.68, 0.6, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl2+0.75, 0.6, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl2+0.6, 0.65, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glEnd();
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl2+0.68, 0.65, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl2+0.75, 0.65, 0.0);
   glColor3ub(cr,cg,cb);
glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl2+0.55, 0.62, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

	  glPushMatrix();
   glTranslatef(_movecl2+0.79, 0.62, 0.0);
   glColor3ub(cr,cg,cb);
	glutSolidSphere(0.05, 50, 50);
	glPopMatrix();

///Cloud End///

    ///Road Start
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(ra,rb,rc);
        glVertex2f(1.00f, -0.13f);
        glVertex2f(1.00f, -0.27f);
        glVertex2f(-1.00f, -0.27f);
        glVertex2f(-1.00f, -0.13f);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(ra,rb,rc);
        glVertex2f(1.00f, 0.05f);
        glVertex2f(1.00f, -0.09f);
        glVertex2f(-1.00f,-0.09f);
        glVertex2f(-1.00f, 0.05f);
	glEnd();
    glPopMatrix();

    ///road white strips
    glPushMatrix();

    glColor3ub(255,255,255);

    for(float i=-1;i<1;i+=0.06){

        glBegin(GL_POLYGON);
        glVertex2f(i, -0.12f);
        glVertex2f(i, -0.10f);
        glVertex2f(i+0.04f, -0.10f);
        glVertex2f(i+0.04f,-0.12f);
        glEnd();

    }
glPopMatrix();
///road finished

///Rail Tracks///
glPushMatrix();
    for(float i=-1;i<1;i+=0.06){
        glColor3ub(120,54,5);
        glBegin(GL_POLYGON);
        glVertex2f(0.02+i,-0.33f);
        glVertex2f(0.02+i,-0.31f);
        glVertex2f(0.06f+i,-0.31f);
        glVertex2f(0.06f+i,-0.33f);
        glEnd();

        glColor3ub(153,153,153);
        glBegin(GL_POLYGON);
        glVertex2f(0.029f+i,-0.33f);
        glVertex2f(0.051f+i,-0.33f);
        glVertex2f(0.051f+i,-0.42f);
        glVertex2f(0.029f+i,-0.42f);
        glEnd();


        glColor3ub(120,54,5);
        glBegin(GL_POLYGON);
        glVertex2f(0.02f+i,-0.44f);
        glVertex2f(0.02f+i,-0.42f);
        glVertex2f(0.06f+i,-0.42f);
        glVertex2f(0.06f+i,-0.44f);
        glEnd();

    }


glPopMatrix();

///Train///
glPushMatrix();
glTranslatef(_movet, 0.00f, 0.0f);
    ///TrB1 Train Engine blue
    glPushMatrix();
        glBegin(GL_POLYGON);
     glColor3ub(0,43,85);
                glVertex2f(-0.2f,-0.38f);
                glVertex2f(-0.57f,-0.38f);
                glVertex2f(-0.6f,-0.41f);
                glVertex2f(-0.2f,-0.41f);
        glEnd();
       glBegin(GL_POLYGON);
     glColor3ub(0,43,85);
                glVertex2f(-0.2f,-0.38f);
                glVertex2f(-0.57f,-0.38f);
                glVertex2f(-0.57f,-0.32f);
                glVertex2f(-0.2f,-0.32f);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3ub(255,255,255);
                glVertex2f(-0.2f,-0.32f);
                glVertex2f(-0.57f,-0.32f);
                glVertex2f(-0.56f,-0.30f);
                glVertex2f(-0.2f,-0.30f);
        glEnd();
    glPopMatrix();
///Connectors///
glPushMatrix();
    glBegin(GL_POLYGON);
        glColor3ub(153,0,79);
        glVertex2f(-0.2f,-0.40f);
        glVertex2f(-0.2f,-0.385f);
        glVertex2f(-0.18f,-0.385f);
        glVertex2f(-0.18f,-0.40f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(153,0,79);
        glVertex2f(0.22f,-0.40f);
        glVertex2f(0.22f,-0.385f);
        glVertex2f(0.24f,-0.385f);
        glVertex2f(0.24f,-0.40f);
    glEnd();
    glPopMatrix();

    ///TrB2 Train Body 1 green
    glPushMatrix();
        glBegin(GL_POLYGON);
     glColor3ub(0,97,0);
                    glVertex2f(0.22f,-0.41f);
                    glVertex2f(-0.18f,-0.41f);
                    glVertex2f(-0.18f,-0.30f);
                    glVertex2f(0.22f,-0.30f);
        glEnd();
    glPopMatrix();
    ///TrB3 Train Body 2 white
    glPushMatrix();
        glBegin(GL_POLYGON);
     glColor3ub(237,237,237);
                    glVertex2f(0.24f,-0.41f);
                    glVertex2f(0.64f,-0.41f);
                    glVertex2f(0.64f,-0.30f);
                    glVertex2f(0.24f,-0.30f);
        glEnd();
    glPopMatrix();
        ///TrWndB1 Train Engine
    glPushMatrix();
        for(float i=0.15;i<0.5;i+=0.05){
            glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
                glVertex2f(-0.702+i,-0.373);
                glVertex2f(-0.678+i,-0.373);
                glVertex2f(-0.678+i,-0.327);
                glVertex2f(-0.702+i,-0.327);
            glEnd();
        }
        for(float i=0.15;i<0.5;i+=0.05){
            glBegin(GL_POLYGON);
     glColor3ub(br,bg,bb);
                glVertex2f(-0.7f+i,-0.37);
                glVertex2f(-0.68f+i,-0.37f);
                glVertex2f(-0.68f+i,-0.33f);
                glVertex2f(-0.7f+i,-0.33f);
            glEnd();
        }
    glPopMatrix();
    ///TrWndB2 Green
    glPushMatrix();
        for(float i=0.54;i<0.92;i+=0.05){
            glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
                glVertex2f(-0.702f+i,-0.373f);
                glVertex2f(-0.68f+i,-0.373f);
                glVertex2f(-0.68f+i,-0.327f);
                glVertex2f(-0.702f+i,-0.327f);
            glEnd();
        }
        for(float i=0.54;i<0.92;i+=0.05){
            glBegin(GL_POLYGON);
     glColor3ub(br,bg,bb);
                glVertex2f(-0.7+i,-0.37f);
                glVertex2f(-0.68+i,-0.37f);
                glVertex2f(-0.68+i,-0.33f);
                glVertex2f(-0.7+i,-0.33f);
            glEnd();
        }
    glPopMatrix();
       ///TrWndB3 White
    glPushMatrix();
        for(float i=0.96;i<1.34;i+=0.05){
            glBegin(GL_POLYGON);
                glColor3ub(0,0,0);
                glVertex2f(-0.702+i,-0.373);
                glVertex2f(-0.68+i,-0.373f);
                glVertex2f(-0.68+i,-0.327f);
                glVertex2f(-0.702+i,-0.327f);
            glEnd();
        }
        for(float i=0.96;i<1.34;i+=0.05){
            glBegin(GL_POLYGON);
     glColor3ub(br,bg,bb);
                glVertex2f(-0.7+i,-0.37);
                glVertex2f(-0.68+i,-0.37f);
                glVertex2f(-0.68+i,-0.33f);
                glVertex2f(-0.7+i,-0.33f);
            glEnd();
        }
    glPopMatrix();
    ///TrB1whealf
    glPushMatrix();
           glColor3ub(0,0,0);
           glTranslatef(-0.53,-0.41, 0.0f);
           glutSolidSphere(0.02, 50, 50);
    glPopMatrix();
    ///TrB1whealb
    glPushMatrix();
           glColor3ub(0,0,0);
           glTranslatef(-0.27,-0.41, 0.0f);
           glutSolidSphere(0.02, 50, 50);
    glPopMatrix();
    ///TrB2whealf
    glPushMatrix();
           glColor3ub(0,0,0);
           glTranslatef(-0.11,-0.41, 0.0f);
           glutSolidSphere(0.02, 50, 50);
    glPopMatrix();
    ///TrB2whealb
    glPushMatrix();
           glColor3ub(0,0,0);
           glTranslatef(0.15,-0.41, 0.0f);
           glutSolidSphere(0.02, 50, 50);
    glPopMatrix();
    ///TrB3whealf
    glPushMatrix();
           glColor3ub(0,0,0);
           glTranslatef(0.31f,-0.41f, 0.0f);
           glutSolidSphere(0.02, 50, 50);
    glPopMatrix();
    ///TrB3whealb
    glPushMatrix();
           glColor3ub(0,0,0);
           glTranslatef(0.57f,-0.41f, 0.0f);
           glutSolidSphere(0.02, 50, 50);
    glPopMatrix();
glPopMatrix();


///Car1_Begin Red

///CarT1Uplane
    glPushMatrix();
glTranslatef(_angle1, 0.35f,0.0f );

    glPushMatrix();
    ///LBody///
   glBegin(GL_POLYGON);
    glColor3ub(la,lb,lc);
        glVertex2f(-0.99f, -0.35f);
        glVertex2f(-0.99f, -0.36f);
        glVertex2f(-1.1f, -0.40f);
        glVertex2f(-1.1f, -0.33f);
	glEnd();
    ///LBody///
    glBegin(GL_POLYGON);
    glColor3ub(255,0.0,0.0);
        glVertex2f(-1.00f, -0.40f);
        glVertex2f(-0.99f, -0.34f);
        glVertex2f(-0.71f, -0.34f);
        glVertex2f(-0.70f, -0.40f);
	glEnd();
	glBegin(GL_POLYGON);
	///UBody///
    glColor3ub(255,0.0,0.0);
        glVertex2f(-0.92f, -0.34f);
        glVertex2f(-0.88f, -0.29f);
        glVertex2f(-0.82f, -0.29f);
        glVertex2f(-0.78f, -0.34f);
	glEnd();
	///BWin///
	glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
        glVertex2f(-0.915f, -0.34f);
        glVertex2f(-0.875f, -0.295f);
        glVertex2f(-0.852f, -0.295f);
        glVertex2f(-0.852f, -0.34f);
	glEnd();
	///MidLine///
	glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
        glVertex2f(-0.851f, -0.34f);
        glVertex2f(-0.851f, -0.295f);
        glVertex2f(-0.848f, -0.295f);
        glVertex2f(-0.848f, -0.34f);
	glEnd();
	///FWin///
	glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
        glVertex2f(-0.785f, -0.34f);
        glVertex2f(-0.825f, -0.295f);
        glVertex2f(-0.847f, -0.295f);
        glVertex2f(-0.847f, -0.34f);
	glEnd();
	glPopMatrix();
    ///BWheal///
    glPushMatrix();
	   glColor3ub(0,0,0);
	   glTranslatef (-0.95, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    ///FWheal///
    glPushMatrix();
	   glColor3ub(0,0,0);
	   glTranslatef (-0.75, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    glPopMatrix();

///car1_Finish

///MiniBus_start
     glPushMatrix();
    glTranslatef(_moveca, 0.21f,0.0f );
    ///LBody///
    glBegin(GL_POLYGON);
    glColor3ub(la,lb,lc);
        glVertex2f(0.59f, -0.35f);
        glVertex2f(0.59f, -0.36f);
        glVertex2f(0.7f, -0.40f);
        glVertex2f(0.7f, -0.34f);
	glEnd();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,0.0);
        glVertex2f(.3f, -0.40f);
        glVertex2f(.3f, -0.34f);
        glVertex2f(0.59f, -0.34f);
        glVertex2f(0.6f, -0.40f);
	glEnd();
	glBegin(GL_POLYGON);
	///UBody///
    glColor3ub(255,255,0);
        glVertex2f(.3f, -0.34f);
        glVertex2f(.3f, -0.29f);
        glVertex2f(.505f, -0.29f);
        glVertex2f(.545f, -0.34f);
	glEnd();

	///MidLine///
	glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
        glVertex2f(.47f, -0.34f);
        glVertex2f(.47f, -0.295f);
        glVertex2f(.48f, -0.295f);
        glVertex2f(.48f, -0.34f);
	glEnd();
	///FWin///
	glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
        glVertex2f(.54f, -0.34f);
        glVertex2f(.5f, -0.295f);
        glVertex2f(.48f, -0.295f);
        glVertex2f(.48f, -0.34f);
	glEnd();
	glPopMatrix();
    ///BWheal///
    glPushMatrix();
	   glColor3ub(0,0,0);
	   glTranslatef (0.35f, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    ///FWheal///
    glPushMatrix();
	   glColor3ub(0,0,0);
	   glTranslatef (0.55f, -0.40f, 0.0f);
	   glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    glPopMatrix();
///MiniBus_Finish

///GrassField///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0,204,26);
        glVertex2f(1.00f,  -0.48);
        glVertex2f(1.00f, -0.58);
        glVertex2f(-1.00f, -0.58f);
        glVertex2f(-1.00f, -0.48f);
	glEnd();
    glPopMatrix();

     ///Lake///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(102,102,255);
        glVertex2f(1.00f,  -0.51);
        glVertex2f(1.00f, -1.0f);
        glVertex2f(-1.00f, -1.00f);
        glVertex2f(-1.00f, -0.51f);
	glEnd();
    glPopMatrix();

        ///Fish1_start///
        ///Fish1_start Yellow///
   ///

	 glPushMatrix();
     glTranslatef(_movefiy, -0.00f, 0.0f);
     glColor3ub(255,255,0);//yellow fish
     glBegin(GL_TRIANGLES);
     glVertex2f(0.75f, -0.66f);
     glVertex2f(0.75f, -0.583f);
     glVertex2f(0.85f, -0.63f);

    glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(_movefiy, -0.0f, 0.0f);
    glColor3ub(255,255,0.0);//yellow fish
    glBegin(GL_TRIANGLES);
    glVertex2f(0.75f, -0.66f);

     glVertex2f(0.75f, -0.583f);
     glVertex2f(0.70f, -0.63f);

    glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(_movefiy, 0.0f, 0.0f );
    glBegin(GL_TRIANGLES);
    glVertex2f(0.83f, -0.63f);
    glColor3ub(255,128,0.0);
    glVertex2f(0.9f,-0.66f);
    glVertex2f(0.9f,-0.583f);
    glEnd();
 glPopMatrix();

    glPushMatrix();
    glTranslatef(_movefiy, 0.0f,0.0f );
    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,0.0);
    glVertex2f(0.76f,-0.65f);
    glVertex2f(0.79f,-0.64f);
    glVertex2f(0.80f,-0.68f);
    glEnd();
     glPopMatrix();


    glPushMatrix();
    glTranslatef(_movefiy, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
	glVertex2f(0.76f,-0.59f);
    glVertex2f(0.79f,-0.61f);
    glVertex2f(0.80f,-0.55f);
    glEnd();
     glPopMatrix();

      glPushMatrix();
     glTranslatef(_movefiy, -0.00f, 0.0f);
    glColor3ub(0,0,0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(0.73f, -0.62f);
    glEnd();
    glPopMatrix();
	///

	  ///Fish1_finish Yellow///


///Fish2_Start Yellow and Red///

 glPushMatrix();
glTranslatef(_movefir, 0.00f,0.0f );

    glColor3ub(255, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.77, -0.85);
    glVertex2f(-0.75, -0.89);
    glVertex2f(-0.77, -0.91);
    glEnd();
    glPopMatrix();
    glPushMatrix();
glTranslatef(_movefir, 0.00f,0.0f );

    ///fishTail
    glColor3ub(255, 255, 0); ///yellow fish
    glBegin(GL_POLYGON);
    glVertex2f(-0.7, -0.93);
    glVertex2f(-0.75, -0.89);
    glVertex2f(-0.85,-0.93);
    glVertex2f(-0.75, -0.96);
    glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(_movefir, 0.0f,0.0f );
    glColor3ub(255, 255, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.83, -0.93);
    glColor3ub(0.412, 0.412, 0.412);
    glVertex2f(-0.90, -0.97);
    glVertex2f(-0.87, -0.93);
    glVertex2f(-0.90, -0.89);
    glEnd();
    glPopMatrix();



glPushMatrix();
glTranslatef(_movefir, 0.0f,0.0f );

    glColor3ub(255, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.75, -0.96);
    glVertex2f(-0.77, -0.955);
    glVertex2f(-0.763, -0.999);
    glEnd();
    glPopMatrix();

glPushMatrix();
glTranslatef(_movefir, 0.0f,0.0f );

    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(-0.73, -0.93);
    glEnd();
    glPopMatrix();


///Fish2_finish Yellow and Red///

    ///Boat///
     ///Boat///
     glPushMatrix();
     glTranslatef(_moveb, 0.0f, 0.0f);
     glBegin(GL_POLYGON);
     glColor3ub(199,21,133);
     glVertex2f(-0.833f, -0.96f);
     glVertex2f(-0.33f, -0.96f);
     glVertex2f(-0.25f, -0.783f);
     glVertex2f(-0.916f, -0.783f);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(255,255,77);
     glVertex2f(-0.833f, -0.783f);
     glVertex2f(-0.33f, -0.783f);
     glVertex2f(-0.33f, -0.75f);
     glVertex2f(-0.833f, -0.75f);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3ub(255,0,77);
     glVertex2f(-0.8f, -0.75f);
     glVertex2f(-0.36f, -0.75f);
     glVertex2f(-0.36f, -0.72f);
     glVertex2f(-0.8f, -0.72f);
     glEnd();
      glBegin(GL_POLYGON);
     glColor3ub(255,0.0,255);
     glVertex2f(-0.77f, -0.72f);
     glVertex2f(-0.39f, -0.72f);

     glVertex2f(-0.39f, -0.69f);
     glVertex2f(-0.77f, -0.69f);
     glEnd();

        //pipe1//
      glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.64f,-0.6f);
     glVertex2f(-0.62f,-0.6f);
     glVertex2f(-0.62f,-0.7f);
     glVertex2f(-0.64f,-0.7f);
     glEnd();
     //pipe2//
      glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.55f,-0.6f);
     glVertex2f(-0.53f,-0.6f);
     glVertex2f(-0.53f,-0.7f);
     glVertex2f(-0.55f,-0.7f);
     glEnd();
     //centrepipe//
      glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.60f,-0.566f);
     glVertex2f(-0.57f,-0.566f);
     glVertex2f(-0.57f,-0.7f);
     glVertex2f(-0.60f,-0.7f);
     glEnd();
     //smoke11//
      glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.63f,-0.58f);
     glVertex2f(-0.62f,-0.58f);
     glVertex2f(-0.62f,-0.59f);
     glVertex2f(-0.63f,-0.59f);
     glEnd();
      //smoke12//
      glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.62f,-0.56f);
     glVertex2f(-0.61f,-0.56f);
     glVertex2f(-0.61f,-0.57f);
     glVertex2f(-0.62f,-0.57f);
     glEnd();
      //smoke13//
      glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.61f,-0.54f);
     glVertex2f(-0.60f,-0.54f);
     glVertex2f(-0.60f,-0.55f);
     glVertex2f(-0.61f,-0.55f);
     glEnd();
      //smoke14//
      glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.60f,-0.52f);
     glVertex2f(-0.59f,-0.52f);
     glVertex2f(-0.59f,-0.53f);
     glVertex2f(-0.60f,-0.53f);
     glEnd();
  //smoke21//

      glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.58f,-0.55f);
     glVertex2f(-0.57f,-0.55f);
     glVertex2f(-0.57f,-0.56f);
     glVertex2f(-0.58f,-0.56f);
     glEnd();
       //smoke22//
          glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.57f,-0.53f);
     glVertex2f(-0.56f,-0.53f);
     glVertex2f(-0.56f,-0.54f);
     glVertex2f(-0.57f,-0.54f);
     glEnd();
        //smoke23//
          glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.56f,-0.51f);
     glVertex2f(-0.55f,-0.51f);
     glVertex2f(-0.55f,-0.52f);
     glVertex2f(-0.56f,-0.52f);
     glEnd();
      //smoke31//
      glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.54f,-0.58f);
     glVertex2f(-0.53f,-0.58f);
     glVertex2f(-0.53f,-0.59f);
     glVertex2f(-0.54f,-0.59f);
     glEnd();
      //smoke32//
      glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.53f,-0.56f);
     glVertex2f(-0.52f,-0.56f);
     glVertex2f(-0.52f,-0.57f);
     glVertex2f(-0.53f,-0.57f);
     glEnd();
      //smoke32//
      glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.52f,-0.54f);
     glVertex2f(-0.51f,-0.54f);
     glVertex2f(-0.51f,-0.55f);
     glVertex2f(-0.52f,-0.55f);
     glEnd();
     //smoke33//
       glBegin(GL_POLYGON);
     glColor3ub(0.0,0.0 , 0.0);
     glVertex2f(-0.51f,-0.52f);
     glVertex2f(-0.50f,-0.52f);
     glVertex2f(-0.50f,-0.53f);
     glVertex2f(-0.51f,-0.53f);
     glEnd();


       glPopMatrix();

       ///Building Start//

    ///building1 Right Most Building
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(110, 0, 0);
        glVertex2f(0.96f, 0.09f);
        glVertex2f(0.96f, 0.75f);
        glVertex2f(0.8f, 0.75f);
        glVertex2f(0.8f, 0.09f);
	glEnd();
    glPopMatrix();
    ///buildings1 right corner
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(64, 0.0, 0.0);
        glVertex2f(0.98, 0.09f);
        glVertex2f(0.98, 0.63f);
        glVertex2f(0.96f, 0.75f);
        glVertex2f(0.96f, 0.09f);
	glEnd();
    glPopMatrix();
    ///b1 gate
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
        glVertex2f(0.92f, 0.09f);
        glVertex2f(0.92f, 0.18f);
        glVertex2f(0.84f, 0.18f);
        glVertex2f(0.84f, 0.09f);
	glEnd();
    glPopMatrix();
    ///b1 windows
    glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
        glVertex2f(0.93f, 0.25f);
        glVertex2f(0.93f, 0.31f);
        glVertex2f(0.91f, 0.31f);
        glVertex2f(0.91f, 0.25f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
  glColor3ub(255,255,255);
        glVertex2f(0.83f, 0.25f);
        glVertex2f(0.83f, 0.31f);
        glVertex2f(0.85f, 0.31f);
        glVertex2f(0.85f, 0.25f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

        glVertex2f(0.83f, 0.39f);
        glVertex2f(0.83f, 0.45f);
        glVertex2f(0.85f, 0.45f);
        glVertex2f(0.85f, 0.39f);
	glEnd();
    glPopMatrix();
       //
     glPushMatrix();
    glBegin(GL_POLYGON);
glColor3ub(255,255,255);
        glVertex2f(0.93f, 0.39f);
        glVertex2f(0.93f, 0.45f);
        glVertex2f(0.91f, 0.45f);
        glVertex2f(0.91f, 0.39f);
	glEnd();
    glPopMatrix();
     //
     glPushMatrix();
    glBegin(GL_POLYGON);
glColor3ub(255,255,255);
        glVertex2f(0.93f, 0.51f);
        glVertex2f(0.93f, 0.57f);
        glVertex2f(0.91f, 0.57f);
        glVertex2f(0.91f, 0.51f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3ub(255,102,0);
        glVertex2f(0.83f, 0.51f);
        glVertex2f(0.83f, 0.57f);
        glVertex2f(0.85f, 0.57f);
        glVertex2f(0.85f, 0.51f);
	glEnd();
    glPopMatrix();
    //
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
        glVertex2f(0.83f, 0.64f);
        glVertex2f(0.83f, 0.7f);
        glVertex2f(0.85f, 0.7f);
        glVertex2f(0.85f, 0.64f);
	glEnd();
    glPopMatrix();

  ///building1 Light window
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255,0);
        glVertex2f(0.93f, 0.64f);
        glVertex2f(0.93f, 0.7f);
        glVertex2f(0.91f, 0.7f);
        glVertex2f(0.91f, 0.64f);
	glEnd();
    glPopMatrix();


    ///buildings2 Left Most Building
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(200, 0.0, 0.0);
        glVertex2f(-0.96f, 0.09f);
        glVertex2f(-0.96f, 0.75f);
        glVertex2f(-0.8f, 0.75f);
        glVertex2f(-0.8f, 0.09f);
	glEnd();
    glPopMatrix();

   ///buildings2 right corner
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(120, 0, 0);
        glVertex2f(-0.78f, 0.09f);
        glVertex2f(-0.78f, 0.63f);
        glVertex2f(-0.8f, 0.75f);
        glVertex2f(-0.8f, 0.09f);
	glEnd();
    glPopMatrix();

    ///b2 gate
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
        glVertex2f(-0.92f, 0.09f);
        glVertex2f(-0.92f, 0.18f);
        glVertex2f(-0.84f, 0.18f);
        glVertex2f(-0.84f, 0.09f);
	glEnd();
    glPopMatrix();

     ///b2 windows
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(br,bg,bb);
        glVertex2f(-0.93f, 0.25f);
        glVertex2f(-0.93f, 0.31f);
        glVertex2f(-0.91f, 0.31f);
        glVertex2f(-0.91f, 0.25f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3ub(br,bg,bb);
        glVertex2f(-0.83f, 0.25f);
        glVertex2f(-0.83f, 0.31f);
        glVertex2f(-0.85f, 0.31f);
        glVertex2f(-0.85f, 0.25f);
	glEnd();
    glPopMatrix();

    ///building2 Light window
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
        glVertex2f(-0.83f, 0.39f);
        glVertex2f(-0.83f, 0.45f);
        glVertex2f(-0.85f, 0.45f);
        glVertex2f(-0.85f, 0.39f);
	glEnd();
    glPopMatrix();
       //
     glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3ub(br,bg,bb);
        glVertex2f(-0.93f, 0.39f);
        glVertex2f(-0.93f, 0.45f);
        glVertex2f(-0.91f, 0.45f);
        glVertex2f(-0.91f, 0.39f);
	glEnd();
    glPopMatrix();
     //
     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(br,bg,bb);
        glVertex2f(-0.93f, 0.51f);
        glVertex2f(-0.93f, 0.57f);
        glVertex2f(-0.91f, 0.57f);
        glVertex2f(-0.91f, 0.51f);
	glEnd();
    glPopMatrix();
    //
     glPushMatrix();
    glBegin(GL_POLYGON);
   glColor3ub(br,bg,bb);
        glVertex2f(-0.83f, 0.51f);
        glVertex2f(-0.83f, 0.57f);
        glVertex2f(-0.85f, 0.57f);
        glVertex2f(-0.85f, 0.51f);
	glEnd();
    glPopMatrix();

    ///building2 closed window
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
        glVertex2f(-0.83f, 0.64f);
        glVertex2f(-0.83f, 0.7f);
        glVertex2f(-0.85f, 0.7f);
        glVertex2f(-0.85f, 0.64f);
	glEnd();
    glPopMatrix();

  //
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(br,bg,bb);
        glVertex2f(-0.93f, 0.64f);
        glVertex2f(-0.93f, 0.7f);
        glVertex2f(-0.91f, 0.7f);
        glVertex2f(-0.91f, 0.64f);
	glEnd();
    glPopMatrix();

///mosq Mosque start
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 51);
        glVertex2f(-0.47f, 0.09f);
        glVertex2f(-0.47f, 0.38f);
        glVertex2f(-0.13f, 0.38f);
        glVertex2f(-0.13f, 0.09f);
	glEnd();
    glPopMatrix();
///mosque right corner
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 30);
        glVertex2f(-0.13f, 0.09f);
        glVertex2f(-0.13f, 0.38f);
        glVertex2f(-0.11f, 0.3f);
        glVertex2f(-0.11f, 0.09f);
	glEnd();
    glPopMatrix();
///mosque left door
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
        glVertex2f(-0.44f, 0.1f);
        glVertex2f(-0.44f, 0.21f);
        glVertex2f(-0.39f, 0.21f);
        glVertex2f(-0.39f, 0.1f);
	glEnd();
    glPopMatrix();

   ///mosque middle door
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
        glVertex2f(-0.33f, 0.1f);
        glVertex2f(-0.33f, 0.21f);
        glVertex2f(-0.28f, 0.21f);
        glVertex2f(-0.28f, 0.1f);
	glEnd();
    glPopMatrix();


   ///mosque right door
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
        glVertex2f(-0.23f, 0.1f);
        glVertex2f(-0.23f, 0.21f);
        glVertex2f(-0.18f, 0.21f);
        glVertex2f(-0.18f, 0.1f);
	glEnd();
    glPopMatrix();

///line  of middle door
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3ub(205,133,63);
        glVertex2f(-0.30f, 0.1f);
        glVertex2f(-0.30f, 0.21f);
        glVertex2f(-0.305f, 0.21f);
        glVertex2f(-0.305f, 0.1f);
	glEnd();
    glPopMatrix();

///mos line bottom to up
 glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
        glVertex2f(-0.47f, 0.26f);
        glVertex2f(-0.47f, 0.27f);
        glVertex2f(-0.13f, 0.27f);
        glVertex2f(-0.13f, 0.26f);
	glEnd();
	glPopMatrix();

	///mos line 2
	glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
        glVertex2f(-0.47f, 0.29f);
        glVertex2f(-0.47f, 0.3f);
        glVertex2f(-0.13f, 0.3f);
        glVertex2f(-0.13f, 0.29f);
	glEnd();
    glPopMatrix();

    ///mos line 3
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
        glVertex2f(-0.47f, 0.31f);
        glVertex2f(-0.47f, 0.32f);
        glVertex2f(-0.13f, 0.32f);
        glVertex2f(-0.13f, 0.31f);
	glEnd();
    glPopMatrix();
///Mos dome
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 80);
        glVertex2f(-0.38f, 0.38f);
        glVertex2f(-0.38f, 0.42f);
        glVertex2f(-0.42f, 0.42f);
        glVertex2f(-0.42f, 0.38f);
	glEnd();
    glPopMatrix();

     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 95);
        glVertex2f(-0.385f, 0.42f);
        glVertex2f(-0.385f, 0.46f);
        glVertex2f(-0.415f, 0.46f);
        glVertex2f(-0.415f, 0.42f);
	glEnd();
    glPopMatrix();

     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 115);
        glVertex2f(-0.39f, 0.46f);
        glVertex2f(-0.39f, 0.50f);
        glVertex2f(-0.41f, 0.50f);
        glVertex2f(-0.41f, 0.46f);
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0.0, 0.0, 140);
        glVertex2f(-0.395f, 0.50f);
        glVertex2f(-0.395f, 0.54f);
        glVertex2f(-0.405f, 0.54f);
        glVertex2f(-0.405f, 0.50f);
	glEnd();
    glPopMatrix();


///Playground
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3ub(0,255,0);
        glVertex2f(0.02f, 0.09f);
        glVertex2f(0.07f, 0.6f);
        glVertex2f(0.33f, 0.6f);
        glVertex2f(0.38f, 0.09f);
	glEnd();
    glPopMatrix();

///field Mid line
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3ub(255,255,255);
        glVertex2f(0.047f, 0.375f);
        glVertex2f(0.047f, 0.383f);
        glVertex2f(0.35f, 0.383f);
        glVertex2f(0.35f, 0.375f);
	glEnd();
    glPopMatrix();

   ///field Circle

	 glPushMatrix();
	   glColor3ub(255,255,255);
	   glTranslatef(0.2, 0.37, 0.0);
	   glutSolidSphere(0.07, 50, 50);

    glPopMatrix();

///bar1
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3ub(255,255,255);
        glVertex2f(0.15f, 0.09f);
        glVertex2f(0.15f, 0.16f);
        glVertex2f(0.155f, 0.16f);
        glVertex2f(0.155f, 0.09f);
	glEnd();
    glPopMatrix();

///
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3ub(255,255,255);
        glVertex2f(0.25f, 0.09f);
        glVertex2f(0.25f, 0.16f);
        glVertex2f(0.255f, 0.16f);
        glVertex2f(0.255f, 0.09f);
	glEnd();
    glPopMatrix();
///
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3ub(255,255,255);
        glVertex2f(0.15f, 0.16f);
        glVertex2f(0.15f, 0.17f);
        glVertex2f(0.255f, 0.17f);
        glVertex2f(0.255f, 0.16f);
	glEnd();
    glPopMatrix();

///bar 2
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3ub(255,255,255);
        glVertex2f(0.15f, 0.60f);
        glVertex2f(0.15f, 0.64f);
        glVertex2f(0.155f, 0.64f);
        glVertex2f(0.155f, 0.60f);
	glEnd();
    glPopMatrix();

///
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3ub(255,255,255);
        glVertex2f(0.25f, 0.60f);
        glVertex2f(0.25f, 0.64f);
        glVertex2f(0.255f, 0.64f);
        glVertex2f(0.255f, 0.60f);
	glEnd();
    glPopMatrix();

//
glPushMatrix();
    glBegin(GL_POLYGON);
     glColor3ub(255,255,255);
        glVertex2f(0.15f, 0.64f);
        glVertex2f(0.15f, 0.65f);
        glVertex2f(0.255f, 0.65f);
        glVertex2f(0.255f, 0.64f);
	glEnd();
    glPopMatrix();

    ///Trees start


  ///tree Left
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(98,78,44);

        glVertex2f(-0.74f, -0.25f);
        glVertex2f(-0.75f, -0.25f);
        glVertex2f(-0.741f, -0.39f);
        glVertex2f(-0.741f, -0.41f);
        glVertex2f(-0.75f, -0.5f);
        glVertex2f(-0.743f, -0.49f);
        glVertex2f(-0.74f, -0.5f);
        glVertex2f(-0.737f, -0.49f);
        glVertex2f(-0.713f, -0.5f);
        glVertex2f(-0.725f, -0.41f);
        glVertex2f(-0.725f, -0.39f);

        glVertex2f(-0.713f, -0.25f);
        glVertex2f(-0.72f, -0.25f);
        glVertex2f(-0.727f, -0.38f);
        glVertex2f(-0.74f, -0.25f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(-.7,-0.25,0.0);
      glColor3ub(0,204,26);
             glutSolidSphere(0.04, 50, 50);
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-0.73,-0.195,0.0);
      glColor3ub(0,204,26);
            glutSolidSphere(0.04, 50, 50);
            glPopMatrix();

            glPushMatrix();
         glTranslatef(-.75,-0.25,0.0);
         glColor3ub(0,204,26);
            glutSolidSphere(0.04, 50, 50);
            glPopMatrix();


  ///tree Right
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(98,78,44);
         glVertex2f(0.72f, -0.25f);
        glVertex2f(0.707f, -0.25f);
        glVertex2f(0.719f, -0.39f);
        glVertex2f(0.719f, -0.41f);
        glVertex2f(0.707f, -0.5f);
        glVertex2f(0.717f, -0.49f);
        glVertex2f(0.72f, -0.5f);
        glVertex2f(0.723f, -0.49f);
        glVertex2f(0.747f, -0.5f);
        glVertex2f(0.735f, -0.41f);
        glVertex2f(0.735f, -0.39f);

        glVertex2f(0.747f, -0.25f);
        glVertex2f(0.74f, -0.25f);
        glVertex2f(0.73f, -0.38f);
        glVertex2f(0.72f, -0.25f);
	glEnd();
    glPopMatrix();
    ///tree up

       glPushMatrix();
         glTranslatef(.7,-0.25,0.0);
      glColor3ub(0,204,26);
             glutSolidSphere(0.04, 50, 50);
            glPopMatrix();

            glPushMatrix();
         glTranslatef(0.73,-0.195,0.0);
      glColor3ub(0,204,26);
           glutSolidSphere(0.04, 50, 50);
            glPopMatrix();

            glPushMatrix();
         glTranslatef(.75,-0.25,0.0);
         glColor3ub(0,204,26);
            glutSolidSphere(0.04, 50, 50);
            glPopMatrix();
  ///tree finish

    ///grass1
     glPushMatrix();
    glBegin(GL_POLYGON);
	glColor3ub(0,255,0);
        glVertex2f(-0.96f,-0.5f);
        glVertex2f(-0.97f,-0.4f);
        glVertex2f(-0.95f,-0.44f);
        glVertex2f(-0.94f,-0.35f);
        glVertex2f(-0.92f,-0.44f);
        glVertex2f(-0.9f,-0.41f);
        glVertex2f(-0.92f,-0.5f);




	glEnd();
    glPopMatrix();


           ///grass2///
        glPushMatrix();
        glBegin(GL_POLYGON);
        glColor3ub(0,255,0);
        glVertex2f(-0.89f,-0.5f);
        glVertex2f(-0.91f,-0.4f);
        glVertex2f(-0.888f,-0.44f);
        glVertex2f(-0.87f,-0.35f);
        glVertex2f(-0.85f,-0.44f);
        glVertex2f(-0.83f,-0.41f);
        glVertex2f(-0.85f,-0.5f);



	glEnd();
    glPopMatrix();


    ///grass3///
glPushMatrix();
    glBegin(GL_POLYGON);
	glColor3ub(0,255,0);
        glVertex2f(0.89f,-0.5f);
        glVertex2f(0.91f,-0.4f);
        glVertex2f(0.888f,-0.44f);
        glVertex2f(0.87f,-0.35f);
        glVertex2f(0.85f,-0.44f);
        glVertex2f(0.83f,-0.41f);
        glVertex2f(0.85f,-0.5f);



	glEnd();
    glPopMatrix();




    ///grass4///
glPushMatrix();
    glBegin(GL_POLYGON);
	glColor3ub(0,255,0);
        glVertex2f(0.96f,-0.5f);
        glVertex2f(0.97f,-0.4f);
        glVertex2f(0.95f,-0.44f);
        glVertex2f(0.94f,-0.35f);
        glVertex2f(0.92f,-0.44f);
        glVertex2f(0.9f,-0.41f);
        glVertex2f(0.92f,-0.5f);



	glEnd();
    glPopMatrix();


	glutSwapBuffers();
}

void update(int value) {

    _moveca+= .008; ///Blue and Yellow car
    if(_moveca-1.1 > 1.0)
    {
        _moveca = -1.5;

    }


    _movefir += .001;///yellow and red fish
    if(_movefir-1.3  > 1.0)
    {
        _movefir = -1.0;
    }


    _movefiy -= .002;  ///yellow fish
    if(_movefiy+1.3 < -1.0)
    {
        _movefiy = 1.0;

    }

    _moveb += .005;///boat
    if(_moveb-1.663  > 1.0)
    {
        _moveb = -1.0;
    }

     _movecl1 += .001;///cloud1
    if(_movecl1-0.39 > 1.0)
    {
        _movecl1 = -1.4;
    }

     _movecl2 += .002;///cloud2
    if(_movecl2-0.79 > 1.0)
    {
        _movecl2 = -2.0;
    }


	glutPostRedisplay(); ///Notify GLUT that the display has changed

	glutTimerFunc(20, update, 0); ///Notify GLUT to call update again in 20 milliseconds
}
///
void update1(int value) {


 if(speed>1 || speed<0)
    {

        speed = 0.0f;
    }
	_angle1 -= speed;

	if (_angle1 < -0.31) {
		_angle1 += 2.31;

}
	if(speedt>1 || speedt<0)
    {

        speedt = 0.0f;
    }
	_movet -= speedt;

	if (_movet < -1.86f) {
		_movet += 3.50f;
	}

	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update1, 0); //Notify GLUT to call update again in 20 milliseconds
}

void keyboard(unsigned char key, int x, int y) {

    switch(key){
          case 'a':/// Red car
          speed+=0.001f;

          break;
        case 'b':
          speed-=0.001f;

          break;
        case 'c':///train
          speedt+=0.001f;

          break;
        case 'd':
          speedt-=0.001f;

          break;
      case 'e':///Day and night check
            if(dcheck==0){
                dcheck=1;
                sr=0;///sky
                sg=0;
                sb=0;
                str=255;///star
                stg=255;
                stb=255;
                mr=255;///moon
                mg=255;
                mb=255;
                br=244;///building window
                bg= 170;
                bb=22;
                la=255;///car light red
                lb=255;
                lc=255;
                cr=179;///cloud red
                cg=179;
                cb=179;
                ra=51;///road red
                 rb=51;
                 rc=51;

            }

else
    {
                dcheck=0;
 sr=133;///sky red
sg=204;
sb=250;
cr=255;///cloud
cg=255;
cb=255;
str=133;///star red
stg=204;
stb=250;
mr=255;///moon and sun
mg=255;
 mb=0;
 br= 130;///building and train window red
 bg= 150;
 bb= 137;
 la=102;///car light red
 lb=102;
 lc=102;
 ra=102;///road red
 rb=102;
 rc=102;

            }
    break;
    }


}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1500,1000);
	glutCreateWindow("Smart City");
	glutKeyboardFunc(keyboard);
	glutDisplayFunc(drawScene);
    glutTimerFunc(20, update, 0);
	glutTimerFunc(20, update1, 0);
	glutMainLoop();
	return 0;
}
