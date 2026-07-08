// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=9;
    int a[n]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int currentsum=a[0];
    int maxsum=a[0];
    
    for(int i=1;i<n;i++){
        currentsum=max(a[i],currentsum+a[i]);
        maxsum=max(maxsum, currentsum);
    }
    cout<<maxsum;
    return 0;
}
