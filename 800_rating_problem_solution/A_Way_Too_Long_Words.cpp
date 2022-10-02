#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;
void solution_function(){
     string str;
     cin >> str;
     if(str.size() < 11) {
          cout<<str<<nl;
     }else{
          cout<<str[0]<<str.size()-2<<str[str.size()-1]<<nl;
     }
     return ;
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