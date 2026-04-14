#include<stdio.h>
int main(){
  int n=5;
  int val;
  for(int i=0;i<=n-1;i++){
   val=1;
    for(int j=0;j<=i;j++){
      printf("%d ",val);
      val=val*(i-j)/(j+1);
    }
    printf("/n");
}
