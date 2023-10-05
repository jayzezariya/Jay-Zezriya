#include<stdio.h>

void main(){
    int i,j,n=6;
    for(i=5;i>0;i--){

        for(j=5;j>=n-i;j--){
            
            printf("%3d",i);
        }
        printf("\n");
    }

    
}
