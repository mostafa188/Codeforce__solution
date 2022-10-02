#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,sum=0,p;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
        sum+=p;
    }
    cout<<((sum*1.0)/n)<<nl;
    return 0;
}