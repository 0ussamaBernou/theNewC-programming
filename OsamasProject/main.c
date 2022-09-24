#include <stdio.h>
#include <stdlib.h>

int main(){
    int myAge;
    printf("enter your age:\n");
    scanf("%d", &myAge); 
    int girlsAge = (myAge / 2) + 7;
    printf("you can date %d or older \n", girlsAge);
    return 0;
}