#ifndef SETUP_H
#define SETUP_H

#include <math.h>

/* PI = 3.14159265358979323846 */
#define PI M_PI

/* CONVERSION OF ANGLES */
double deg(float val, char format);
double grd(float val, char format);
double rad(float val, char format);
float handle_mod1(float target);

#endif /* SETUP_H */
