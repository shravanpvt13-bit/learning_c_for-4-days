#include<stdio.h>
int main(){
    int n=5;
    for(int i=n;i>=0;i--){
        for(int k=1;k<=n-1;k++){
            printf(" ");
        }
            for(int j=1;j<=i;j++){
            printf("*");
        }
        
    printf("\n");
    }
}