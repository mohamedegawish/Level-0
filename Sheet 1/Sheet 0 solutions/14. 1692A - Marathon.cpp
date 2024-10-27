#include <bits/stdc++.h>
using namespace std;
int main (){
    int cases,a,b,c,d,countt=0;
    cin>>cases;
    while(cases--){
        cin>>a>>b>>c>>d;
        countt=0;
        if(a<b){
            countt++;
        }
        if(a<c){
            countt++;
        }
        if(a<d){
            countt++;
        }
        cout<<countt<<endl;
    }
}











