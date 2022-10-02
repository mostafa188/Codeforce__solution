#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int size,id_value = INT_MIN,idx=0;           cin >> size;
    vector<int>v(size,0);

    for(int i=0;i<size;i++){
        cin >>v[i];
        if(id_value<v[i]){
            id_value = v[i];
            idx = i;
        }
    }
    cout<<idx+1<<" ";

    sort(v.begin(),v.end());
    cout<<v[size-2]<<nl;

    return 0;
}