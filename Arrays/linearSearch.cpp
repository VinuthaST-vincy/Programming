#include<bits/stdc++.h>
using namespace std;

    int main(){
        int n=5;int got; int found=0;
        int a[n]={2,1,52,14,23};
        int key=-1;
        for(int i=0;i<n;i++){
            if(a[i]==key){
               got=i;
               found=1;
               break;
            }
            else{continue;}
        }
    if(found){
        cout<<"Key elemeny found at position "<<got<<" ";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}
