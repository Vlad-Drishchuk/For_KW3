#include "stdio.h"

const int N=10;
int funcx(int x[N]);
int main (void){
    int x[N], result;
    for (int i = 0; i<N; i++){
        printf("Type num in [%d]: ", i);
        scanf("%i", &x[i]);
    }
    result=funcx(x);
    printf("%i", result);
}
int funcx(int x[N]){
    int n=1;
    for(int i=0; i<N; i++){
        if(x[i]%2==0){
            n=n*x[i];
        }
    }
    return n;
}
