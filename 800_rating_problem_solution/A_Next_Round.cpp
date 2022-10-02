#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int n,k,ans=0;
     cin >> n >> k;

     int ara[n+1];
     for(int i=0;i<n;i++) cin >> ara[i];
     for(int i=0;i<n;i++){
          if(ara[k-1]<=ara[i] && ara[i] > 0){
               ans++;
          }
     }

     cout<<ans<<nl;
     return 0;
}