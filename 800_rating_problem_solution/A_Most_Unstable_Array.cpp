#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;
int solution_function(){
    int n,m;
    cin >> n >> m;
    if(n == 1){
        return 0;
    }
    return min(2,n-1)*m;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int tc;
    cin >> tc;
    while(tc --){
        cout<<solution_function()<<nl;
    }
    return 0;
}