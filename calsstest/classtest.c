#include <stdio.h>

int main()
{
    int r, c;
printf("Enter the no rows and columns less than 100:\n");
    scanf("%d%d", &r, &c);
int array[100][100];///
    int transpose[100][100];
printf("Enter the elements of the %d x %d array:\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &array[i][j]);  
             
        }
    }
for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transpose[j][i] = array[i][j];
        }
    }
printf("Transposed array (%d x %d):\n", c, r);
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}