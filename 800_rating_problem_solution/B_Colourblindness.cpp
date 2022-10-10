#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;
void solution_function(){
    int n;
    cin >> n;

    cin.ignore();
    string str1,str2;
    cin>> str1>>str2;

    for(int i=0;i<n;i++){
        if(str2[i] == 'G'){
            str2[i] ='B';
        }if(str1[i] == 'G'){
            str1[i] ='B';
        }
        if(str1[i] != str2[i]){
            cout<< "NO"<<nl;
            return ;
        }
    }
    cout<<"YES"<<nl;
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