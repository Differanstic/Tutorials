#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("2-Fprintf.txt","r");
    if(fp != NULL){
    char name[10] ;
    int userId = 0;
    fscanf(fp,"%d %s",&userId,&name);
    printf("Name - %s\n", name);
    printf("userId - %d",userId);

    fclose(fp);
    }else{
        printf("\nFile Not Available!");
    }
}