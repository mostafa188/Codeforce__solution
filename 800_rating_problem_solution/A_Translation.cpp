#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str1,str2;

    cin>> str1>>str2;

    for(int i=0;i<str1.size()/2;i++){
        swap(str1[i],str1[str1.size()-1-i]);
    }

    for(int i=0;i<str1.size();i++){
        if(str1[i] == 't'){
            str1[i] == 's';
        }
        if(str1[i] != str2[i]){
            cout<<"NO"<<nl;
            return 0;
        }
    }
    cout<<"YES"<<nl;
    return 0;
}