#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("fputc.txt","w");
    fputc('c',fp);
    fclose(fp);
}