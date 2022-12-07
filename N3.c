#include "stdio.h"
#include "math.h"

double funcF(double x);
double funcG(double x);
double funcT(double x);

int main (void){
    double x, result;
    printf("x=");
    scanf("%lf", &x);
    result = funcF(x);
    printf("f(x)= %lf", result);
}
double funcF(double x){
    return funcG(x)+7* funcT(x);
}
double funcG(double x){
    return sin(2*x)/4;
}
double funcT(double x){
    return (log(x+3))/(x-3);
}
