#include<bits/stdc++.h>
//second largest element
using namespace std;
int main(){
    int n=5;
    int a[n]={2,1,6,3,7};
    int smax=a[0];
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>smax&&a[i]<max){
            smax=a[i];
        }
    }
    cout<<"Second max element:"<<smax;
    
return 0;
}
