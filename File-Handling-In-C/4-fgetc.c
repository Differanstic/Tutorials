#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("fputc.txt","r");
    if(fp != NULL){
    char charFromFile;
    do{
        charFromFile = fgetc(fp);
        printf("%c",charFromFile);
    }while(!feof(fp)); // -> charFromFile != EOF
    
    fclose(fp);
    }else{
        printf("\n File Not Available!");
    }
}