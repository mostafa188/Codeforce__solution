#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int problem,ans = 0;

     cin >> problem ;
     while(problem --){
          int a,b,c;
          cin >> a>>b>>c;

          if(a+b+c >1) ans++;
     }
     cout<<ans<<nl;
     return 0;
}