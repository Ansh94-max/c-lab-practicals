// #include <stdio.h>

// int main(){
//     int arr[]={10,20,30,40,50};
//     printf("%d",sizeof(arr)/sizeof(arr[0]));
//     return 0;
// }

// sum of digits
// #include <stdio.h>

// int main(){
//     int n,sum=0,digit;
//     scanf("%d",&n);
//     while(n!=0){
//         digit=n%10;
//         sum = digit + sum;
//         n=n/10;
//     }
//     printf("%d",sum);
//     return 0;
// }

// matrix
// #include <stdio.h>
// int main(){
//     int r1,c1,r2,c2;
//     scanf("%d",&r1);
//     scanf(" %d",&c1);
//     scanf("%d",&r2);
//     scanf(" %d",&c2);
//     int mat[r1][c1];
//     int mat1[r1][c1];
//     int mat2[r2][c2];

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             scanf("%d",&mat1[i][j]);
//         }
//     }
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             scanf("%d",&mat2[i][j]);
//         }
//     }
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             printf("%d ",mat1[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             printf("%d ",mat2[i][j]);
//         }
//         printf("\n");
//     }
// if(mat1[0][0]==mat2[0][0]){
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             mat[i][j]=mat1[i][j]+mat2[i][j];
//         }
//         printf("\n");
//     };
// }
// else{ 
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             mat[i][j]=0;
//             for(int k=0;k<c1;k++){
//                 mat[i][j] += mat1[i][k]*mat2[k][j];
//             }
//         }
//         printf("\n");
//     };
// }
//     return 0;
// }

// armstrong number
// 

//smart parking fee
#include <stdio.h>

int main(){
    int n, fee=0;
    scanf("%d",&n);
    if(n==0)
        printf("0");


    else if(n<2){
        fee = 20;
        printf("%d", fee);
    }
    else if(n>=2 && n<=5){
        fee = (n-2)*15 + 40;
        printf("%d", fee);
    }
    else{
        fee = 85+(n-5)*10;
        printf("%d", fee);
    }

    
    return 0;
}