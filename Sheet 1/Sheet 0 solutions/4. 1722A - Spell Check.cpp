#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases,len;
    cin>>cases;
    while(cases--){
        string s,timur="Timur";
        cin>>len>>s;
    sort(timur.begin(),timur.end());
    sort(s.begin(),s.end());
    if(s==timur&&len==5){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


}
}
