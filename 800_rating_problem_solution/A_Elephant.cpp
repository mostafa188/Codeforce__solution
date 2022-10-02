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

    int road[] ={5,4, 3, 2 , 1};
    for(int i=0;i<5 && n>0;i++){
        ans+= n/road[i];
        n %= road[i];
    }

    cout<<ans <<nl;
    return 0;
}