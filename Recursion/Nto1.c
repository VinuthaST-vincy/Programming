
#include <stdio.h>

int fun(int n){
    if(n!=0){
        printf("%d\n",n);
        n--;
        fun(n);
    
    }else{
        return 1;
    }
    return 0;
    
    
}

       
int main() {
    // Write C code here
    int n;
    printf("Enter terms to be displayed from \n");
    scanf("%d",&n);
    
    printf("Linear number:\n");
    
    fun(n);

    return 0;
}
