#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",'A'+j-1);
        }
        for(int j=i-1;j>=1;j--){
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }

}
