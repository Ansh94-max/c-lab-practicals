// find the square of a number
// #include <stdio.h>
// int square(int n) {
//     return n * n;
// }
// int main(){
//     int n ;
//     scanf("%d", &n);
//     printf("%d\n", square(n));
//     return 0;
// }
// factorial of a number
// #include <stdio.h>
// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n ;
//     scanf("%d", &n);
//     printf("%d\n", fact(n));
//     return 0;
// }

//swap two numbers using functions
// 

// program to check if a number is even or odd using functions
// #include <stdio.h>
// int isEven(int n){
//     return n % 2 == 0;
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     if (isEven(n)) {
//         printf("even\n");
//     } else {
//         printf("odd\n");
//     }
//     return 0;
// }

// convert decimal number tom binary number using functions
#include <stdio.h>
int binary(int n){
    int bin[32], i=0;
    while(n>0){
        bin[i] = n % 2;
        n /= 2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d", bin[j]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    binary(n);
    return 0;
}

