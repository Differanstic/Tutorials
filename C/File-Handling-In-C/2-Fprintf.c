#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("2-Fprintf.txt","w");
    char name[10] = {"Kathan"};
    int userId = 101;
    fprintf(fp,"%d %s",userId,name);
    fclose(fp);
}