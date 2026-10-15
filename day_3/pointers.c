#include <stdio.h>

int main(){
    int n, m;
    printf("Enter the number of rows and columns of the array:\n");
    scanf("%d%d", &n, &m);
    int arr[n][m] = {0};
    printf("Enter the elements of the %d x %d array:\n", n, m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    } 
           
     
}