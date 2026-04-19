
#include <stdio.h>
int fact(int n){
    if(n==0){
        return 1;
        
    }else{
        return fact(n-1)*n;
    }
}

int main() {
    // Write C code here
    int n;
    printf("Enter factorial nunber you want to know??\n");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
    
    return 0;
}
