#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("fputw.txt","r");
    int x = getw(fp);
    printf("%d",x);
    fclose(fp);
}