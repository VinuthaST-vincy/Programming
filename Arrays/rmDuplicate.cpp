// Brute force approach
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n=7;
    int a[n]={1,1,2,2,4,4,4};
    set<int> st;int i=0;
  //T(n) fro set insertion it will be logarithmic so NlogN.
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
  //O(n)
    for(int p:st){
        a[i]=p;cout<<a[i];
        i++;
    }
    return 0;
}

//Optimised using 2 pointers.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=7;
    int a[n]={1,2,2,2,4,4,4};
    int j=1; 
    int i=0;
      while(j<n){
          if(a[i]!=a[j]){
              i++;
              a[i]=a[j];
              j++;
          }
          else{
                j++;
              continue;
            
          }
          
      }
      for(int p=0;p<=i;p++){
          cout<<a[p];
      }
    
    return 0;
}

