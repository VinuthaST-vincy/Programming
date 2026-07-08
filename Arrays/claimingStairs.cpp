/* n = 5
ways(0) = 1
ways(1) = 1
ways(2) = ways(1) + ways(0) = 1 + 1 = 2
ways(3) = ways(2) + ways(1) = 2 + 1 = 3
ways(4) = ways(3) + ways(2) = 3 + 2 = 5
ways(5) = ways(4) + ways(3) = 5 + 3 = 8*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=1;
    int a=1;
    int b=1;
 int next;
    for(int i=2;i<=n;i++){
 next=a+b;
  a=b;
  b=next;
  
    }
    cout<<a;
    return 0;
}
