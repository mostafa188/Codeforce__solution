#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;
void solution_function(){
    int a,b;
    cin >> a >> b;

    if(a == b){
        cout<<'0'<<nl;
    }else{
        int c = 1+(((a<b)^(b-a))&1);
        cout<<c<<nl;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int tc;
    cin >> tc;
    while(tc --){
        solution_function();
    }
    return 0;
}