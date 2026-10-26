#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    int k ; 
    scanf("%d",&k);
    int a[50];
    int count = 0 ;
   // if(1>n<50 || k<1 ){
        return 1;
    //}
    for(int i = 0 ; i<n ; i++){
    scanf("%d",a[i]);
    if(n>k){
        count++;
    }
    }
    printf("%d",count);
    

    return 0;
}