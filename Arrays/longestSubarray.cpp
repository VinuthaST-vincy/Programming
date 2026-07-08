// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s="ab";
  int left=0, maxlen=0;
  unordered_map<char, int> h;
  for(int right=0;right<s.size();right++){
      char c=s[right];
      if(h.count(c)>0 && h[c]>=left){
          left=h[c]+1;
      }
      h[c]=right;
      int windowlen=right-left+1;
      maxlen=max(maxlen, windowlen);
  }
cout<<"max: "<<maxlen;
    return 0;
}
