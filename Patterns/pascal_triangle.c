#include<stdio.h>
int main(){
    int n=4;
    int s=0;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num++);
            
        }printf("\n");
    }
}
