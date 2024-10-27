#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin >>s;
    int len=s.length();
    int up_count=0,lw_count=0;
    for(int i=0;i<len;i++ ){
        if(s[i]==toupper(s[i])){
            up_count++;
        }
        else lw_count++;
    }
    for(int i=0;i<len;i++){
    if(lw_count>=up_count){
       s[i]=tolower(s[i]);
    }
    else s[i]=toupper(s[i]);
}
    cout<<s;
}
