#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of problems :");
    scanf("%d",&n);
    int i = 1,p,v,c ,count = 0 ;
    while(i<=n){
    scanf("%d %d %d ,&p ,&v ,&c");
    if(p+v+c>=2){
        count++;
    }
        i++;
    }
    printf("%d",count);


    return 0 ;
}