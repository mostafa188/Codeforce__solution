#include<bits/stdc++.h>
#define nl endl
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int size,quality,item,large=0,small=0,equal=0;

    cin>>size>>quality;

    for(int i=0;i<size;i++){
        cin>>item;

        if(item>quality){
            large++;
        }else if(item==quality){
            equal++;
        }else{
            small++;
        }
    }

    cout<<(large*2 + equal*1+small*1)<<nl;
    return 0;
}