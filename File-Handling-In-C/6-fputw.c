#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("fputw.txt","w");
    putw(2,fp);
    fclose(fp);
}