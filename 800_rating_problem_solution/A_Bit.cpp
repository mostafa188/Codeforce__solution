#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;
int x=0;
void solution_function(){
     
     string str;
     cin >> str;

     str[1] == '+'? x+=1 : x-=1;

}
int main(){
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int tc;
     cin >> tc;
     while(tc --){
          solution_function();
     }
     cout<<x<<nl;
     return 0;
}