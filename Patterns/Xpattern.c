#include<stdio.h>
int main(){
    int n=3;
    for(int i=n;i>=1;i--){
        if(i==1){
            break;
        }
        else{
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        }
        printf("\n");
    }
    
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j== 2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
