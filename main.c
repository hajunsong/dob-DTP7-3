#include <stdio.h>
#include <math.h>

#include "dob.h"

#define DTOR    (M_PI/180)

#define HALF_PI (M_PI_2)
#define DBL_PI  (M_PI * 2.)


////////////////////// custom robot test ///////////////////////////////////////////////////
///
///
///
#ifdef __cplusplus
extern "C" {
#endif

extern int cx_cmdtor(float* jtang, float* uc,long* vel, short* tor, int* cmdtor);

#ifdef __cplusplus
}
#endif

typedef struct {
    float x, y, z;
} cxvector;

typedef struct {
    cxvector n, o, a, p;
} cxmat;


static float EPSYLON_CROSS = 0.000001;
static float EPSYLON_ANGLE = 0.2*DTOR; //0.00001;


static void cxm_init(cxmat* mat)
{
    int i;
    float* fptr = (float*)mat;

    for(i = 0; i < 3; i++)
    {
        *fptr++ = 1.f;
        *fptr++ = 0.f;
        *fptr++ = 0.f;
        *fptr++ = 0.f;
     }
}



int cx_cmdtor(float* jtang, float* uc,long* vel, short* tor, int* cmdtor)
{
    /* return transform */
    cxmat*  tf = (cxmat*)uc;
    cxmat   tfTmp;
    float   tmp1, tmp2;

//    float q1 = jtang[0];
//    float q2 = jtang[1];
//    float q23 = q2 + jtang[2];
//    float q4 = jtang[3];
//    float q5 = jtang[4];
//    float q6 = jtang[5];


//    float s1 = sin(q1);
//    float c1 = cos(q1);
//    float s2 = sin(q2);
//    float c2 = cos(q2);
//    float s23 = sin(q23);
//    float c23 = cos(q23);
//    float s4 = sin(q4);
//    float c4 = cos(q4);
//    float s5 = sin(q5);
//    float c5 = cos(q5);
//    float s6 = sin(q6);
//    float c6 = cos(q6);


//    tmp2 = 1;

//    cmdtor[0] = 50;
//    cmdtor[1] = 50;
//    cmdtor[2] = 50;
//    cmdtor[3] = 50;
//    cmdtor[4] = 50;
//    cmdtor[5] = 50;



    return 0;
}


