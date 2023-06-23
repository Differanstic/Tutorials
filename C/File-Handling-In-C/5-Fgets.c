#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("fputs.txt","r");
    char x[100];
    fgets(x,100,fp);
    printf("%s",x);
    fclose(fp);
}