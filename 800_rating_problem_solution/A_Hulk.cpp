#include<bits/stdc++.h>
#define nl endl
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    cout<<"I hate ";
    for(int i=2;i<=n;i++){
        if(i%2){
            cout<<"that I hate ";
        }else{
            cout<<"that I love ";
        }
    }
    cout<<"it"<<nl;
    
    return 0;
}