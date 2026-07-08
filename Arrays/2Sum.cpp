#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={2,7,3,5,4};
    int target=9;int found=0;
    unordered_map<int, int> h;
    int index1, index2;int y;
    for(int i=0;i<n;i++){
        y=target-arr[i];
        
        bool before=h.count(y)>0;
        
        if(before){
            index1=h[y];
            index2=i;
            found =1;
            break;
        }
        h[arr[i]]=i;
    }
    if(found){
        cout<<"index1:"<<index1<<" "<<"index2: "<<index2;
    }
    return 0;
}
