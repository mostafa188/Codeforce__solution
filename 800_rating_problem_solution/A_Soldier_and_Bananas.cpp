#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int k,n,w,ans = 0;

    cin >> k>>n>>w;
    
    ans =(k*((w*(w+1))/2))-n;
    
    cout << max(0,ans) <<nl;
    return 0;
}