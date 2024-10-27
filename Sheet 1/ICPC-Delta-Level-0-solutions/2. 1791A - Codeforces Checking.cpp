#include <bits/stdc++.h>
using namespace std;

int main() {
    short n;cin >>n;
    while(n--){
        char ch;cin >>ch;
        bool flag=false;
        string code="Codeforces";
        for(int i=0;i<code.length();i++){

            if(ch==code[i]){
                flag=true;
            }
        }
        if(flag==true){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
    }

}
