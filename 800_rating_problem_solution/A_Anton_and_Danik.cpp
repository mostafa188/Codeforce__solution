#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,acnt=0,dcnt=0;

    cin>>n;

    string str;

    cin>>str;

    for(int i=0;i<n;i++){
        if(str[i]=='A'){
            acnt++;
        }
        else{
            dcnt++;
        }
    }

    if(acnt>dcnt){
        cout<<"Anton"<<nl;
    }else if(acnt<dcnt){
        cout<<"Danik"<<nl;
    }else{
        cout<<"Friendship"<<nl;
    }
    return 0;
}