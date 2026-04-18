
#include <stdio.h>
int num=1;
int fun(int n){
    if(num<=n){
        printf("%d\n",num);
        num++;
        fun(n);
    }else{
        return 1;
    }
    return 0;
    
    
}

       
int main() {
    // Write C code here
    int n;
    printf("Enter terms to be displayed from 1\n");
    scanf("%d",&n);
    
    printf("Linear number:\n");
    
    fun(n);

    return 0;
}
