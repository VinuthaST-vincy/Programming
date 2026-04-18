
#include <stdio.h>

int main() {
    // Write C code here
    
    int year;
    printf("Enter year");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("Leap year");
            }
            else{
                printf("Not Leap Year");
            }
        }else{
            printf("leap year");
        }
    }
    else{
        printf("Not leap year");
    }

    return 0;
}
