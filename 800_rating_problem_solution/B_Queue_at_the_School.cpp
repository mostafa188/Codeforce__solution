#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,t;
    cin >> n>>t;

    string str;
    cin>>str;

    for(int i=t;i<str.size();i++){
        cout<<str[i];
    }
    return 0;
}