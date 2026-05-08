// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void gcd1(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else
        {
            b=b%a;
        }
    }
    cout<<"GCD value: \n";
    if(a==0){
        cout<<b;
    }
    else{
    cout<<a;
    }
}
int main() {
    // Write C++ code here
    //gcd which could divide both, we consider that
    int m,n,result;
    cout<<"Enter m and n value\n";
    cin>>m;
    cin>>n;
   gcd1(m,n);
   
    return 0;
    
}
