#include<stdio.h>
#include<string.h>

int main(){
    char f[102],s[102];
    scanf("%s%s",f,s);
    for(int i=0;i<strlen(f);i++){
        if(f[i] <='Z'){
            f[i] = f[i]+32;
        }if(s[i] <='Z'){
            s[i] = s[i]+32;
        }
    }
    int ans=strcmp(f,s);

    if(ans ==0){
        printf("%d\n",ans);
    }else if(ans >0){
        printf("%d\n",1);
    }else{
        printf("%d\n",-1);
    }
    return 0;
}