#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact =fact*i;
        
    }
    return fact;
}
int main(){
    int n,rem,temp,sum=0;
    printf("Enter Number");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rem=temp%10;
        sum=sum+factorial(rem);
        temp=temp/10;
    }
    if(n!=sum){
        printf("Not a strong number");
    }
    else{
        printf("A Strong number");
    }

    return 0;


}
