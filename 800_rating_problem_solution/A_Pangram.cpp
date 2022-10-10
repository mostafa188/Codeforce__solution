#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;

    cin>>n;

    if(n<26){
        cout<<"NO"<<nl;
        return 0;
    }else{
        string str;
        cin>>str;
        transform(str.begin(),str.end(),str.begin(),:: tolower);
        set<char>s;
        for(int i=0;i<n;i++){
            s.insert(str[i]);
        }
        if(s.size() == 26){
            cout<<"YES"<<nl;
        }else{
            cout<<"NO"<<nl;
        }
    }
    return 0;
}