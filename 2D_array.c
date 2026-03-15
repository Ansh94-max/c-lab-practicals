// to make a matrix
#include <stdio.h>

int main() {
    int mat1[10][10], mat2[10][10], sum[10][10],mul[10][10],transpose[10][10];
    int i,j,k,r1,c1,r2,c2;

    printf("Enter number of rows 1: ");
    scanf("%d",&r1);

    printf("Enter number of columns 1: ");
    scanf("%d",&c1);

    // printf("Enter number of rows 2: ");
    // scanf("%d",&r2);

    // printf("Enter number of columns 2: ");
    // scanf("%d",&c2);

    // if(r1!=r2 || c1!=c2)
    // {
    //     printf("Matrix addition not possible");
    //     return 0;
    // }

    printf("Enter the elements of matrix 1:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    // printf("Enter the elements of matrix 2:\n");
    // for(i=0;i<r2;i++){
    //     for(j=0;j<c2;j++){
    //         scanf("%d",&mat2[i][j]);
    //     }
    // }
    // printf("The matrix 1 is:\n");
    // for(i = 0; i < r1; i++) {
    //     for(j = 0; j < c1; j++) {
    //         printf("%d ", mat1[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("The matrix 2 is:\n"); 
    // for(i = 0; i < r2; i++) { 
    //     for(j = 0; j < c2; j++) { 
    //         printf("%d ", mat2[i][j]); 
    //     } 
    //     printf("\n"); 
    // }

    // for(i=0;i<r1;i++){
    //     for(j=0;j<c1;j++){
    //         sum[i][j] = mat1[i][j] + mat2[i][j];
    //     }
    // }

    // printf("Sum of matrices:\n");
    // for(i=0;i<r1;i++){
    //     for(j=0;j<c1;j++){
    //         printf("%d ",sum[i][j]);
    //     }
    //     printf("\n");
    // }

    // for(i=0;i<r1;i++){
    //     for(j=0;j<c2;j++){
    //         mul[i][j]=0;
    //         for(k=0;k<c1;k++){
    //             mul[i][j] += mat1[i][k] * mat2[k][j];
    //         }
    //     }
    // }

    // printf("Multiplication of matrices:\n");
    // for(i=0;i<r1;i++){
    //     for(j=0;j<c2;j++){
    //         printf("%d ",mul[i][j]);
    //     }
    //     printf("\n");
    // }

    // transpose 
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            transpose[j][i] = mat1[i][j];
        }
    }

    printf("transpose of matrix:\n");
    for(i=0;i<c1;i++){
        for(j=0;j<r1;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

