// #include <stdio.h>

// int main(){
//     int marks;
//     printf("enetr your marks:");
//     scanf("%d",&marks);
//     if(marks>=90)
//     printf("grade A");
//     else if(marks<90 && marks>=80)
//     printf("grade B");
//     else if(marks<80 && marks>=70)
//     printf("grade C");
//     else if(marks<70 && marks>=60)
//     printf("grade D");
//     else if(marks<60 && marks>=50)
//     printf("grade E");
//     else
//     printf("failed");
//     return 0;
// }

// check leap year
// #include <stdio.h>

// int main(){
//     int year;
//     printf("enter the year:");
//     scanf("%d", &year);
//     if((year%4==0 && year%100!=0) || year % 400 == 0){
//         printf("Leap year\n");
//     }
//     else{
//         printf("Non leap year\n");
//     }
//     return 0;
// }

// calculator
// #include <stdio.h>

// int main() {
//     int ch;
//     float a, b;
//     printf("Enter operator: ");
//     scanf("%d", &ch);

//     printf("Enter two numbers: ");
//     scanf("%f %f", &a, &b);

//     switch(ch) {
//         case 1:
//             printf("Sum = %d", a + b);
//             break;

//         case 2:
//             printf("Difference = %d", a - b);
//             break;

//         case 3:
//             printf("Product = %d", a * b);
//             break;

//         case 4:
//             printf("Division = %d", a / b);
//             break;

//         default:
//             printf("Wrong choice");
//     }

//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int i;
//     for(i=1;i<11;i++){
//         printf("%d ",i);
//     };
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int sum = 0;
//     int i;
//     for(i=1;i<11;i++){
//         sum += i;
//         };
//     printf("sum = %d",sum);
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int n;
//     int out;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int i=1;i<11;i++){
//         out=n*i;
//         printf("%d ",out);
//     };
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int n;
//     int out;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int i=1;i<11;i++){
//         out=n*i;
//         printf("%d\n",out);
//     };
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     long long fact = 1;
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact *= i;

//     };
//     printf("%lld",fact);
//     return 0;
// }

// check whether a number is prime or not
// #include <stdio.h>

// int main() {
//     int n, i;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n == 1) {
//         printf("NOT a prime number");
//     }
//     else {
//         for (i = 2; i < n; i++) {
//             if (n % i == 0) {
//                 printf("%d is NOT a prime number", n);
//                 return 0;
//             }
//         }
//         printf("%d is a Prime number", n);
//     }

//     return 0;
// }

// sum of digits(by while loop)
// #include <stdio.h>

// int main() {
//     int n, sum = 0;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     while(n>0) {
//         sum += (n % 10);
//         n /= 10;
//     }
//     printf("Sum of digits = %d", sum);

//     return 0;
// }
// sum of digits (by for loop)
// #include <stdio.h>

// int main() {
//     int n, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (;n>0;n /= 10) {
//         sum += (n % 10);
//     }

//     printf("Sum of digits = %d", sum);

//     return 0;
// }

// reverse the digits
// #include <stdio.h>

// int main() {
//     int n, rev = 0;

//     printf("enter a number: ");
//     scanf("%d", &n);

//     while(n>0) {
//         rev=rev*10 + (n % 10);
//         n /= 10;
//     }
//     printf("%d", rev);

//     return 0;
// }

// fibonacci series
// #include <stdio.h>

// int main() {
//     int n, a = 0, b = 1, c;

//     printf("enter number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci series: ");

//     for (int i = 1; i <= n; i++) {
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     return 0;
// }

// print sum of even numbers
// #include <stdio.h>
// int main(){
//     int s,e,sum=0;
//     printf("enter a numbers:");
//     scanf("%d %d",&s,&e);
//     for(int i=s;i<=e;i++){
//         if(i%2==0){
//             sum+=i;
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }

// calculate greatest common divisor
// #include <stdio.h>

// int main() {
//     int a,b,gcd;
//     printf("enter two numbers:");
//     scanf("%d %d", &a, &b);
//     for(int i=1;i<=a && i<=b; i++){
//         if (a%i==0 && b%i==0) {
//             gcd = i;
//         }
//     }
//     printf("GCD = %d", gcd);

//     return 0;
// }

// patterns
// square
// #include <stdio.h>

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//         printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// right angle triangle
// #include <stdio.h>

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//         printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// upper right angle triangle
// #include <stdio.h>

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=0;j<=5-i;j++){
//         printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("*");
//         }printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     for(int i=0;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf(" ");
//         }
//         for(int k=0;k< 5-i;k++){
//             printf("*");
//         }printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=2*i-1;k++){
//             printf("*");
//         }printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//         printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=1;j<=5-i;j++){
//         printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=1;j<=5-i;j++){
//         printf("%c",97+j-1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }printf("\n");
    }
    for(int i=5;i>1;i--){
        for(int j=0;j<=5-i;j++){
            printf(" ");
        }
        for(int k=2;k<2*i-1;k++){
            printf("*");
        }printf("\n");
    }
    return 0;
}