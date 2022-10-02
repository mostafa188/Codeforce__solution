#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    cin >> str;
    int a=0;
    
    for(int i=0;i<str.size();i++){
        if(str[i]=='4'|| str[i]=='7'){
            a++;
        }
    }
    if(a == 4||a==7){
        cout<<"YES"<<nl;
    }else{
        cout<<"NO"<<nl;
    }
    return 0;
}