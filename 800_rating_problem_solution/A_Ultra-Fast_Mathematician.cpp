#include<bits/stdc++.h>
#define nl endl
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s1,s2;
    cin >> s1 >> s2 ;

    for(int i=0;i<s1.size();i++){
        if(s1[i] == '0' && s2[i] == '0'){
            cout<<'0';
        }else if(s1[i] == '0' && s2[i] == '1'){
            cout<<'1';
        }else if(s1[i] == '1' && s2[i] == '0'){
            cout<<'1';
        }else{
            cout<<'0';
        }
    }
    return 0;
}