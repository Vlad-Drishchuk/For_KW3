#include "stdio.h"
#include "math.h"

double func1(double x);
double func2(double x);
double func3(double x);

int main (void){
    double x, result;
    printf("x=");
    scanf("%lf", &x);
    if (x>1){
        result =func1(x);
    }
    if (0<x && x<=1){
        result = func2(x);
    }
    if (x<=0){
        result = func3(x);
    }
    printf("y= %lf", result);
}
double func1(double x){
    return sqrt(x)-x;
}
double func2(double x){
    return 2*x+3*cos(x);
}
double func3(double x){
    return 4*log(fabs(x))-1;
}
