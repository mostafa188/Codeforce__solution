#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;
bool solution_function(){
    string s,t = "Timur";
    int n;
    cin >>n;
    cin.ignore();
    cin>>s;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(n != 5){
        return false;
    }

    if(s == t){
        return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int tc;
    cin >> tc;
    while(tc --){
        if(solution_function()){
            cout<<"YES"<<nl;
        }else{
            cout<<"NO"<<nl;
        }
    }
    return 0;
}