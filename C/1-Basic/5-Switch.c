#include<stdio.h>
void main(){

    /*
        Here is an example of rating
        rating from 1 - 5 stars
        when user rates will print something to show gratitude
        1 star - we are sorry your experience
        2 star - we'll improve us
        3 star - Getting better
        4 star - Thank you
        5 star - we are overwhelmed!
    */

    int rate = 1;

    switch (rate)
    {
    case 1:
        printf("we are sorry your experience :( ");
        break;
    case 2:
        printf("we'll improve us");
        break;
    case 3:
        printf("Getting better");
        break;
    case 4:
        printf("Thank you!");
        break;
    case 5:
        printf("we are overwhelmed!");
        break;

    default:
        printf("rating invalid!");
        break;
    }

}