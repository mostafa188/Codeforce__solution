#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    cin >> str;
    if(str.size() == 1){
        cout<<str<<nl;
        return 0;
    }
    for(int i=0;i<str.size();i+=2){
        for(int j=0;j<str.size()-2;j+=2){
            if(str[j] > str[j+2]){
                swap(str[j],str[j+2]);
            }
        }
    }
    cout<<str<<nl;
    return 0;
}