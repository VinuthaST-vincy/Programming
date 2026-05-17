// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    int temp,n=5;
    int a[n]={23,45,23,9,46};
    
    for(int i=n-1;i>=0;i--){

        for(int j=0;j<i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
               
            }
        }
      
    }
    cout<<"Sorted ele\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
