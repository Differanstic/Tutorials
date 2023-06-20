#include<stdio.h>
#include <string.h>

void main(){
   char str[] = {"one-two-three-four-five"};
   char *t = strtok(str,"-");
   while(t != NULL){
    printf("%s\n",t);
    t = strtok(NULL,"-");
    
   }

}