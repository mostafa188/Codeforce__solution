#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int limac,bob,ans = 0;

    cin >> limac >> bob ;

    while(limac<=bob){
        limac =limac*3;
        bob = bob*2;
        ans++;
    }

    cout<<ans<<nl;
    return 0;
}