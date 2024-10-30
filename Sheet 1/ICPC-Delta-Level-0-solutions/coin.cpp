#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;

    int a_count=0,b_count=0,c_count=0;
    for(int i=0;i<3;i++){
        cin>>s;
        if(s[1]=='>'){
            if(s[0]=='a'||s[0]=='A'){
                a_count++;
            }
            else if(s[0]=='b'||s[0]=='B'){
                b_count++;
            }
            else if(s[0]=='c'||s[0]=='C'){
                c_count++;
            }

        }
        if(s[1]=='<'){
            if(s[2]=='a'||s[2]=='A'){
                a_count++;
            }
            else if(s[2]=='b'||s[2]=='B'){
                b_count++;
            }
            else if(s[2]=='c'||s[2]=='C'){
                c_count++;
            }

        }



    }
    if(a_count>b_count&&b_count>c_count){
        cout<<"CBA";
    }
    else if(a_count>c_count&&c_count>b_count){
        cout<<"BCA";
    }
    else if(c_count>a_count&&a_count>b_count){
        cout<<"BAC";
    }
    else if(c_count>b_count&&b_count>a_count){
        cout<<"ABC";
    }
    else if(b_count>a_count&&a_count>c_count){
        cout<<"CAB";
    }
    else if(b_count>c_count&&c_count>a_count){
        cout<<"ACB";
    }
    else {cout<<"Impossible";}

}
