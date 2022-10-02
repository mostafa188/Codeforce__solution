#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,ans=0;
    cin >> n;
    string str;
    cin >> str ;
    for(int i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            ans++;
        }
    }
    cout<<ans<<nl;
    return 0;
}