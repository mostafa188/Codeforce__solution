#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int note[]={100, 20, 10, 5,1};
    ll n,cnt=0;
    cin>>n;

    for(int i=0;i<5 & n!=0;i++){
        cnt+=n/note[i];
        n = n%note[i];
    }
    cout<<cnt<<nl;
    return 0;
}