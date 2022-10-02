#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    int ac=0,lc=0;
    cin >> str;

    for(int i=0;i<str.size();i++){
        if(str[i] <='Z'){
            ac++;
        }else{
            lc++;
        }
    }
    if(ac > lc){
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }else{
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }
    cout<<str<<nl;
    return 0;
}