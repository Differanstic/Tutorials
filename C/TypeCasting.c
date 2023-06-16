#include<stdio.h>

void main(){
    
    // Casting in C

    float x = 3.14;
    int a = 3.14;
    char n[] = "10";

    printf("%d\n",(int)x); // Float to Int
    printf("%f\n",(float)a); // Int to Float
    printf("%lf\n",(double)a); // Int to Double
}