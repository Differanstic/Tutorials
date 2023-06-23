#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("fputs.txt","w");
    char name[50] = {"Kathan Pandya"};
    fputs(name,fp);
    fclose(fp);
}