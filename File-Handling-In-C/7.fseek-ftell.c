#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("cluster-star.txt","r");
    char c;
    int position;

    // Fseek() -> set Pointer to x postion of file
    fseek(fp,9,0); 
    do{
        c = fgetc(fp);
        position = ftell(fp);// returns position of pointer
        printf("%d -> %c\n",position,c); // printing position and character at that position
    }while(c != EOF);



    fclose(fp);
}