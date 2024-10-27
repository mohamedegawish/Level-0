#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin>>cases;
    while(cases--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c||a+c==b||b+c==a){
            cout<<"YES"<<endl;
        }
        else cout <<"NO"<<endl;
    }

}
