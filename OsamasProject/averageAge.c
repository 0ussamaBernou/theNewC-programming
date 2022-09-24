#include <stdio.h>
#include <stdlib.h>

int main(){
    float age1, age2, age3, average ;
    age1 = age2 = 20;
    printf("enter your age \n");
    scanf("%f", &age3);
    average = (age1 + age2 + age3) / 3;
    printf("\n the average of ages is : %0.1f", average);
}