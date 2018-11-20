#include <stdio.h>
#include <math.h>

#define DTOR    (M_PI/180)

#define HALF_PI (M_PI_2)
#define DBL_PI  (M_PI * 2.)


////////////////////// custom robot test ///////////////////////////////////////////////////
///
///
///
///
#ifdef __cplusplus
extern "C" {
#endif

extern int cx_cmdtor(float* ja, float* uc, long* vel, short* tor, long* enc1, long* enc2, int* cmd, int *collision);
//static int (*c_cmdtor)(float* ja, float* uc, long *vel, short* tor, long* enc1, long* enc2, int *cmd, int *collision);

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

//#include "dob.h"

//static const uint num_body = 1;
//static DOB *dob = new DOB(num_body);
//static double *dob_pos = new double[num_body], *dob_vel = new double[num_body], *dob_tor = new double[num_body], *dob_theta = new double[num_body], *dob_cur_tor = new double[num_body];
//static double K = 1;

int cx_cmdtor(float* ja, float* uc, long* vel, short* tor, long* enc1, long* enc2, int* cmd, int *collision)
//int (*c_cmdtor)(float* ja, float* uc, long *vel, short* tor, long* enc1, long* enc2, int *cmd, int *collision)
{
    /* return transform */
//    cxmat*  tf = (cxmat*)uc;
//    cxmat   tfTmp;

    printf("%f,%f,%f,%f,%f\n", ja[0], vel[0], tor[0], enc1[0], enc2[0]);

//    for(int i = 0; i < num_body; i++){
//        dob_pos[i] = jtang[i]*DTOR - HALF_PI;
////        dob_theta[i] = jtheta[i];
//        dob_vel[i] = vel[i];
//        dob_tor[i] = K*(dob_pos[i] - dob_theta[i]);
//        dob_cur_tor[i] = tor[i];
//    }
//    dob->run(dob_pos, dob_vel, dob_tor, collision);

//    FILE *fp;
//    fp = fopen("logging test.txt", "a+");
//    fprintf(fp, "%f, %f, %f\n", jtang[0], vel[0], tor[0]);
//    fclose(fp);

    return 0;
}


