/* Archivos MAth.c */

#include "math.h"

int doblEntero(int a) {
    if(a > MAX_INT/2) {
        return -1;
    } 
    return a*2;
}

double dobleDouble(double a) {
    if(a > MAX_DOUBLE/2) {
        return -1;
    } 
    return a*2;
}