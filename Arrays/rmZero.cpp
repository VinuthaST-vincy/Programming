#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int a[n]={1,0,2,3,0,0,4,5};int j=0;
    //move 0's to the end of the array.
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[j]=a[i];
            j++;
        }
        else{
            continue;
        }
    }
   
    for(int i=j+1;i<n;i++){
        a[i]=0;
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}
