// Online C compiler to run C program onlin
// Online C compiler to run C program online
#include <stdio.h>
int isPrime(int n){
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    // Write C code here
    int n, num=2,count=0;
    printf("Enter n limit");
    scanf("%d",&n);
    while(num<=n){
        if(isPrime(num)){
            printf("%d",num);
            count++;
        }
        num++;
    }
    printf("\n");
    printf("total primes: %d",count);

    return 0;
}
