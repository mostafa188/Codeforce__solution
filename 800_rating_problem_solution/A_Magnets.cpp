#include<bits/stdc++.h>
#define nl endl
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,cnt=1;
    cin >> n;

    int ara[n+1];
    for(int i=0;i<n;i++){
        cin >> ara[i];
    }

    for(int i=0;i<n-1;i++){
        if(ara[i] != ara[i+1]){
            cnt ++;
        }
    }
    cout << cnt<<nl;
    return 0;
}