#include<bits/stdc++.h>
#define nl endl
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n , input;
    bool cnt = false;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> input;
        if(input == 1){
            cnt = true;
        }
    }

    if(cnt){
        cout<<"HARD"<<nl;
    }else{
        cout<<"EASY"<<nl;
    }
    return 0;
}