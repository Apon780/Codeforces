#include<stdio.h>
int main(){
    int n,p,q,r ;
    scanf("%d",&n);
    int x=0;
    int y = 0;
    int z=0;
    for(int i=1 ;i<=n;i++){
       scanf("%d %d %d",&p ,&q, &r);
       x=x+p;
       y=y+q;
       z=z+r;
       }
    if(x==0 && y==0 && z==0){
    printf("yes");
    }
    else
    printf("no");
    return 0 ;
}