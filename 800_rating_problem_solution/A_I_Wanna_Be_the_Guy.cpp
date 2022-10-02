#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;

    int size;
    set<int>s;

    cin>>size;
    for(int i=0;i<size;i++){
        int item;
        cin>>item;
        s.insert(item);
    }
    cin >> size;
    for(int i=0;i<size;i++){
        int item;
        cin>>item;
        s.insert(item);
    }
    if(s.size() == n){
        cout<<"I become the guy."<<nl;
    }else{
        cout<<"Oh, my keyboard!"<<nl;
    }
    return 0;
}