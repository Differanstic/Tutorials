#include<stdio.h>
void main(){
    /* Nested If Else
        Report Card time!
        if a student have certain percentage will give them a certain class

        above 90% -> class 1
        above 80% -> class 2
        above 70% -> distinction
        above 60% -> average
        below 60% -> poor
    */
        float percentage = 95.3f;

        if(percentage>60){
            if(percentage < 70)
                printf("average");
            else{
                if(percentage < 80){
                    printf("distinction");
                }else{
                    if(percentage< 90)
                        printf("class 2");
                    else
                        printf("class 1");
                }
            }     
        }else{
            printf("poor!");
        }



}