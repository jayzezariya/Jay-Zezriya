#include<stdio.h>

void main(){
    int i,j;
    for(i=1;i>=0;i--){
        for(j=5;j>=i;j--){
            printf("%2d",i);
        }
        printf("\n");
        
    }
}
