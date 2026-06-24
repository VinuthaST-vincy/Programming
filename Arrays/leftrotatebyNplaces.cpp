#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=7;
    int a[n]={1,2,3,4,5,6,7};
    int d;
    cout<<"Enter how many number of left rotation bh place";
    cin>>d;//3
    d=d%n;
    int m=d;int temp[m];
    for(int i=0;i<m;i++){
        temp[i]=a[i];
    }
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }
    int k=0;
    for(int i=d+1;i<n;i++){
        a[i]=temp[k];
        k++;
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i];//4,5,6,7,1,2,3
    }
}
