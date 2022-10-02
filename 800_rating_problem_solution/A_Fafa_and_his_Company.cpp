#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;          cin>>n;
    int leader=0,tm,cnt=0;
    while(n/2 > leader){
        leader++;
        tm = n-leader;
        if(tm%leader == 0){
            //cout<<tm/leader<<nl;
            cnt++;
        }
    }

    cout<<cnt <<nl;
    
    return 0;
}