#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[101];
    gets(a);
    int count = 1 ;
    for(int i = 0; a[i]!='\0';i++){
     if(a[i]==a[i-1]){
        count++;
     }
        else{
           count=1;
        }
    
    if(count>=7){
        printf("YES");
        return 0 ;
    }
    }
    printf("NO");
    
    return 0 ;
}