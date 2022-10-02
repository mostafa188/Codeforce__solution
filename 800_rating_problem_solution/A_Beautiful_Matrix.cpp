#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;
void resolve2(){
    for(int i=0,a;cin>>a;i++){
        if(a){
            cout<<abs(2-i/5)+abs(2-i%5);
        }
    }
    return ;
}


void resolve(){
     int t,k{};
     while (cin >> t && !t){
     
     }
     cout << abs(k/5-2) + abs (k%5-2);
}


int64_t solve(){
     for(int i=1;i<=5;i++){
          for(int j=1;j<=5;j++){
               int ans;
               cin >> ans;
               if(ans == 1){
                    if((i== 1|| i==5)&&(j==1 ||j==5)){
                         return 4;
                    }else if(j == 3){
                         return abs(3-i);
                    }else{
                         return (abs(3-i)+abs(3-j));
                    }
               }
          }
     }
     return 0;
}
int main(){
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     resolve();
     //cout<<(0 && 1)<<nl;
     return 0;
}