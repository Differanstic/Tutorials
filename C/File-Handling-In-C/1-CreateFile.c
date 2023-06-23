#include<stdio.h>
void main(){
    FILE *f;
    f = fopen("file.txt","w");
    printf("File is Created!");
    fclose(f);
}