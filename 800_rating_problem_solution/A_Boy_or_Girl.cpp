#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    set<char>s;
    string str;

    cin>>str;

    for(int i=0;i<str.size();i++){
        s.insert(str[i]);
    }
    if(s.size()%2){
        cout<<"IGNORE HIM!"<<nl;
    }else{
        cout<<"CHAT WITH HER!"<<nl;
    }
    return 0;
}