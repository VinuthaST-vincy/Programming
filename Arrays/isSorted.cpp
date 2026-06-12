// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=4;int point=1;
    int a[n]={3, 5, 12, 100};
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            cout<<"Unsorted";
            point--;
            break;
        }
        else{
            continue;
        }
    }
    if(point)
{
    cout<<"Sorted";
}
    return 0;
}
