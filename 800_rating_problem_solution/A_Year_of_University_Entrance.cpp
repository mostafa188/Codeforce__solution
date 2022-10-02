#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;              cin>>n;
    int arr[n+1];       for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);
    
    if(n == 1){
        cout<<arr[0]<<nl;
        return 0;
    }else{
        cout<<arr[n/2]<<nl;
    }
    return 0;
}