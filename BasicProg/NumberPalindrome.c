// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n, rev=0, temp;
    
    printf("Enter number");
    scanf("%d",&n);
    
    temp=n;
    while(temp>0){
        rev=rev*10+temp%10;
        temp =temp/10;
    }
    if(n!=rev){
        printf("Not palindrome ");
    }
    else{
        printf("Palindrome");
    }

    return 0;
}
