#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n,k;

    cin >> n >> k;

    while(k --){
        if(n % 10 ==0){
            n /=10;
        }else{
            n-=1;
        }
    }
    cout<<n<<nl;
    return 0;
}