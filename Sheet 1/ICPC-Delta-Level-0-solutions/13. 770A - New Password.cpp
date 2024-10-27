#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,k;
    cin>>n>>k;
    char pass;
    for(int i=0;i<n;i++){
    pass='a'+(i%k);
    cout<<pass;
    }
}











