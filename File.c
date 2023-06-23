#include<stdio.h>
void main(){
    FILE *f;
    f = fopen("f1.txt","w");
 
    fclose(f);
}