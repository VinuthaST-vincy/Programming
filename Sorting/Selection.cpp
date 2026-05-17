// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    int temp,n=5;
    int a[n]={23,45,23,9,46};
    
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    cout<<"Sorted ele\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
