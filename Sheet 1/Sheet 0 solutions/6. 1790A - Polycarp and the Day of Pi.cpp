#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin>>cases;
    string pi="314159265358979323846264338327";
    while(cases--){
    int countt=0;
    string s;cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]==pi[i]){
            countt++;
            continue;
        }
        else break;
    }
    cout<<countt<<endl;

}
}
