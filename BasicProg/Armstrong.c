#include<stdio.h>
int main(){
  int n, rem,temp, sum=0;
  printf("Enter Number: ");
  scanf("%d",&n);
  temp=n;
  while(temp>0){
    rem=temp%10;
    sum=rem*rem*rem+sum;
    temp=temp/10;
  }
  if(n!=sum){
    printf("Not Armstrong");
  }
  else{
    printf("Armstrong");
  }
  return 0;
}
