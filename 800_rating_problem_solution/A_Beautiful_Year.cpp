#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >>n;
    
    if(n>=2013){
        cout<<n+1<<nl;
    }else{
        cout<<2013<<nl;
    }
    return 0;
}