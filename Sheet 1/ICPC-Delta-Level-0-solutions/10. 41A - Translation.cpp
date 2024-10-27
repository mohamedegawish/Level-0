#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,d,check="";cin >>s>>d;
    int len=s.length();
    int j=0;
    for(int i=len-1;i>=0;i--){
        check+=s[i];
    }

   if(check==d){
    cout<<"YES";
   }
   else cout<<"NO";
}
