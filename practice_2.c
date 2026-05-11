// factorial of a number using recursion
// #include <stdio.h>
// int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     printf("%d", factorial(n));
//     return 0;
// }

// print the nth term of fibonacci series using recursion
// #include <stdio.h>
// int fibonacci(int n) {
//     if (n <= 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     printf("The %dth term of the fibonacci series is: %d\n", n, fibonacci(n));
//     return 0;
// }

// swap two numbers using call by value
// #include <stdio.h>
// int swap(int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b =temp;

//     return 0;
// }

// int main() {
//     int a, b;
//     printf("Enter numbers to swap: ");
//     scanf("%d %d",&a,&b);
//     swap(a,b);
//     printf("Number after swapping: ");
//     printf("%d %d\n",a,b);

//     return 0;
// }

// call by reference
// #include <stdio.h>

// int swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b =temp;

//     return 0;
// }

// int main() {
//     int a, b;
//     printf("Enter numbers to swap: ");
//     scanf("%d %d",&a,&b);
//     swap(&a,&b);
//     printf("Number after swapping: ");
//     printf("%d %d\n",a,b);

//     return 0;
// }

//
// #include <stdio.h>

// int visits(int n){
//     static int count = 1;

//     if (count <= n) {
//         printf("%d ", count++);
//         visits(n); 
//     }
//     return 0;
// }

// int main() {
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     visits(n);

//     return 0;
// }

// sum of digits without recursion
//#include <stdio.h>
// int sum_of_digits(int n) {
//     int sum = 0;
//     while (n > 0) {
//         sum += n % 10; // add the last digit to sum
//         n /= 10; // remove the last digit
//     }
//     return sum;
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Sum of digits: %d\n", sum_of_digits(n));
//     return 0;
// }

// sum of digits using recursion
// #include <stdio.h>

// int sum_of_digits(int n) {
//     if (n == 0) {
//         return 0;
//     } else {
//         return (n % 10) + sum_of_digits(n / 10);
//     }
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Sum of digits: %d\n", sum_of_digits(n));
//     return 0;
// }

// sum of digits until a single digit is obtained 
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     if(n%9){
//         printf("%d\n",n%9);
//     }
//     else{
//         printf("9");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n, index, change;
//     if (scanf("%d", &n) != 1) return 0;

//     int stock[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &stock[i]);
//     }
//     scanf("%d %d", &index, &change);
//     *(stock + index) += change;
//     for (int i = 0; i < n; i++) {
//         printf("%d", *(stock + i));
//         if (i < n - 1) {
//             printf(" ");
//         }
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// void normalizeTemperatures(int *tempArray, int n, int factor) {
//     for (int i = 0; i < n; i++) {
//         *(tempArray + i) = *(tempArray + i) + factor;
//     }
// }

// int main() {
//     int n, factor;
//     if (scanf("%d", &n) != 1) return 0;

//     int temperatures[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &temperatures[i]);
//     }
//     scanf("%d", &factor);
//     normalizeTemperatures(temperatures, n, factor);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", temperatures[i]);
//     }

//     return 0;
// }
// reverse an array using pointers with same array most easy way
// #include <stdio.h>
// void reverseArray(int *arr, int n) {
//     for (int i = 0; i < n / 2; i++) {
//         int temp = *(arr + i);
//         *(arr + i) = *(arr + n - 1 - i);
//         *(arr + n - 1 - i) = temp;
//     }
// }
// int main() {
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     reverseArray(arr, n);

//     printf("Reversed array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// linear search using pointers when you found the element print found else not found
// #include <stdio.h>
// int linearSearch(int *arr, int n, int target) {
//     for (int i = 0; i < n; i++) {
//         if (*(arr + i) == target) {
//             return 1; // Found
//         }
//     }
//     return 0; // Not found
// }
// int main() {
//     int n, target;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &target);
//     if (linearSearch(arr, n, target)) {
//         printf("Found\n");
//     } else {
//         printf("Not Found\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&i);
//         }
//     int res=0,place=1,carry=0;
//     while(n>0){
//         int digit=n%10;
//         int sum=digit+1+carry;
//         if(sum==10){
//             digit=0;
//             carry=1;
//         }
//         else{
//             digit=sum;
//             carry=0;
//         }

//         res=res+digit*place;
//         place*=10;
//         n/=10;
//     }
//     if(carry==1){
//         res=res+place;
//     }
//     printf("%d",res);

//     return 0;
// }

//write a program to define a structure of student with name , age and marks of a student.input details of two students , take the full name of the student , take bonus marks as input(5),add bonus marks to the student having lower marks,display updated details of both students , display the results acc to highest length of name.

#include <stdio.h>
int main(){
    auto int x=0;
    static int y=0;
    printf("%d", x);
    printf("%d",y);
   
    return 0;
}