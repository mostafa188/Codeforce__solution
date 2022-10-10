#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;
void solution_function(){
    int n = 4;
    set<char>s;
    for(int i=0;i<n;i++){
        char ch;
        cin >> ch;
        s.insert(ch);
    }
    cout<<s.size()-1<<nl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int tc;
    cin >> tc;
    while(tc --){
        solution_function();
    }
    return 0;
}