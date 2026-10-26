#include<stdio.h>
int main(){
    int n,p,q ;
    scanf("%d",&n);
    int f = 0;

    for(int i=1 ;i<=n;i++){
       scanf("%d %d",&p ,&q);
       if(p<q-1){
        f=f+1;
       }

     
    }
    printf("%d",f);
    return 0 ;
}