#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int c,f,t;
    cin >> c >>f;

    while(c>0 && f>0){
        t=c/f;
        cout<<t<<" ";
        c -=t;
        f--;
    }
    return 0;
}