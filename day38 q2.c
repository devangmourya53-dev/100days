/*Check if a matrix is symmetric.
*/
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);
    
    int matrix[n][n];
    int isSymmetric = 1; 
    
    
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;  
                break;
            }
        }
        if (!isSymmetric)
            break;
    }
    
    
    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    

    if (isSymmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");
    
    return 0;
}
