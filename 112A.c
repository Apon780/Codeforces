#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[101] ,b[101];
    gets(a);
    gets(b);
    for(int i = 0; a[i]!='\0';i++){
        a[i]=tolower(a[i]);
         b[i]=tolower(b[i]);
    }
    int r=strcmp(a,b);
    if(r<0){
        printf("-1");
    }
    else if(r>0){
            printf("1");
    }
    else
        printf("0");
    return 0 ;
}