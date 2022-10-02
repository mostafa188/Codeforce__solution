#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int size,ans = 0;
    cin >> size;

    int arr[size+1];
    for(int i=0;i<size;i++){
        cin >>arr[i];
    }
    for(int i=size-1;i>=0;i--){
        if(arr[i] < arr[i-1]){
            ans++;
        }
    }
    
    cout<<ans<<nl;
    return 0;
}