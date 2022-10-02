#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    cin>>str;
    if(str[0] >'Z'){
        str[0] = str[0]-32;
    }
    cout<<str<<nl;
    return 0;
}