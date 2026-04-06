// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("You entered: %d\n", num);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a, b, sum;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     sum = a + b;
//     printf("Sum: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// #define PI 3.14159
// int main() {
//     float radius, area, circumference;
//     printf("Enter radius: ");
//     scanf("%f", &radius);
//     area = PI * radius * radius;
//     circumference = 2 * PI * radius;
//     printf("Area: %.2f\nCircumference: %.2f\n", area, circumference);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     printf("Addition: %d\n", a + b);
//     printf("Subtraction: %d\n", a - b);
//     printf("Multiplication: %d\n", a * b);
//     if (b != 0) printf("Division: %.2f\n", (float)a / b);
//     else printf("Division by zero not possible.\n");
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main() {
//     float u, a, t, b, c, p, V, S, T, H;
//     // Dummy values for evaluation
//     u = 10; a = 9.8; t = 10; b = 4; c = 4; p = 2;
//     V = u + a * t;
//     S = u * t + 0.5 * a * t * t;
//     T = 2 * a + sqrt(b) + 9 * c;
//     H = sqrt(b * b + p * p);
//     printf("V = %.2f\nS = %.2f\nT = %.2f\nH = %.2f\n", V, S, T, H);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int x = 5, y = 10, temp;
    
//     // Using temp variable
//     temp = x; x = y; y = temp;
//     printf("After swap with temp: x=%d, y=%d\n", x, y);
    
//     // Without temp variable
//     x = x + y; y = x - y; x = x - y;
//     printf("After swap without temp: x=%d, y=%d\n", x, y);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a, b, c, max;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
    
//     // Using ternary operator
//     max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
//     printf("Greatest using ternary: %d\n", max);
    
//     // Using if-else
//     if (a >= b && a >= c) max = a;
//     else if (b >= a && b >= c) max = b;
//     else max = c;
//     printf("Greatest using if-else: %d\n", max);
    
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char ch;
//     int num;
//     printf("Enter an alphabet: ");
//     scanf(" %c", &ch);
//     switch(ch) {
//         case 'a': case 'e': case 'i': case 'o': case 'u':
//         case 'A': case 'E': case 'I': case 'O': case 'U':
//             printf("Vowel\n"); break;
//         default: printf("Consonant\n");
//     }
    
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     switch(num > 0 ? 1 : (num < 0 ? -1 : 0)) {
//         case 1: printf("Positive\n"); break;
//         case -1: printf("Negative\n"); break;
//         case 0: printf("Zero\n"); break;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n, sum = 0, i = 1;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     while (i <= n) {
//         sum += i;
//         i++;
//     }
//     printf("Sum: %d\n", sum);
//     return 0;
// }

//Write a program to check a number is Armstrong or not using For loop.
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int num, oriNum, rem, n = 0;
//     float res = 0.0;

//     printf("Enter an number: ");
//     scanf("%d", &num);

//     oriNum = num;
//     while (oriNum != 0) {
//         oriNum /= 10;
//         ++n;
//     }
//     oriNum = num;

//     while (oriNum != 0) {
//         rem = oriNum % 10;
//         res += pow(rem, n);
//         oriNum /= 10;
//     }
//     if ((int)res == num)
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n, count = 0, reverse = 0, rem;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n != 0) {
//         rem = n % 10;
//         reverse = reverse * 10 + rem;
//         count++;
//         n /= 10;
//     }
//     printf("Digits count: %d\nReverse: %d\n", count, reverse);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n, t1 = 0, t2 = 1, nextTerm;
//     printf("Enter number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series: ");
//     for (int i = 1; i <= n; ++i) {
//         printf("%d ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i, j, k;
//     printf("Pattern a:\n");
//     for (i = 1; i <= 6; i++) {
//         for (j = 1; j <= i; j++) printf("* ");
//         printf("\n");
//     }
//     printf("Pattern b:\n");
//     for (i = 1; i <= 6; i++) {
//         for (k = 1; k <= 6 - i; k++) printf("   ");
//         for (j = 1; j <= i; j++) printf(" * ");
//         printf("\n");
//     }
//      return 0;
// }

// #include <stdio.h>
// int main() {
//     for (int i = 1; i <= 6; i++) {
//         for (int j = 1; j <= 6; j++) {
//             printf("%-4d", i * j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// void checkPrime(int n) {
//     int isPrime = 1;
//     if (n <= 1) isPrime = 0;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) { isPrime = 0; break; }
//     }
//     if (isPrime) printf("Prime\n"); else printf("Not Prime\n");
// }

// void checkArmstrong(int n) {
//     int temp = n, sum = 0, digits = 0, rem;
//     while(temp != 0) { digits++; temp /= 10; }
//     temp = n;
//     while(temp != 0) { rem = temp % 10; sum += pow(rem, digits); temp /= 10; }
//     if (sum == n) printf("Armstrong\n"); else printf("Not Armstrong\n");
// }

// void checkPerfect(int n) {
//     int sum = 0;
//     for (int i = 1; i < n; i++) {
//         if (n % i == 0) sum += i;
//     }
//     if (sum == n) printf("Perfect\n"); else printf("Not Perfect\n");
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     checkPrime(n);
//     checkArmstrong(n);
//     checkPerfect(n);
//     return 0;
// }

// #include <stdio.h>
// #define PI 3.14159

// float calcArea(float r) { return PI * r * r; }
// float calcCircumference(float r) { return 2 * PI * r; }

// int main() {
//     float r;
//     printf("Enter radius: ");
//     scanf("%f", &r);
//     printf("Area: %.2f\nCircumference: %.2f\n", calcArea(r), calcCircumference(r));
//     return 0;
// }

// #include <stdio.h>

// void swapValue(int a, int b) {
//     int temp = a; a = b; b = temp;
//     printf("Inside swapValue: x=%d, y=%d\n", a, b);
// }

// void swapReference(int *a, int *b) {
//     int temp = *a; *a = *b; *b = temp;
// }

// int main() {
//     int x = 5, y = 10;
    
//     swapValue(x, y);
//     printf("After swapValue in main: x=%d, y=%d\n", x, y);
    
//     swapReference(&x, &y);
//     printf("After swapReference in main: x=%d, y=%d\n", x, y);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int arr[100], n = 0, choice, pos, val, i, found;

//     while (1) {
//         printf("\n1.Insert 2.Update 3.Delete 4.Display 5.Search 6.Exit\nEnter choice: ");
//         scanf("%d", &choice);
//         switch (choice) {
//             case 1:
//                 printf("Enter position and value (pos <= %d): ", n);
//                 scanf("%d %d", &pos, &val);
//                 for(i = n; i > pos; i--) arr[i] = arr[i-1];
//                 arr[pos] = val; n++;
//                 break;
//             case 2:
//                 printf("Enter position to update and new value: ");
//                 scanf("%d %d", &pos, &val);
//                 if(pos < n) arr[pos] = val; else printf("Invalid pos\n");
//                 break;
//             case 3:
//                 printf("Enter position to delete: ");
//                 scanf("%d", &pos);
//                 if (pos < n) {
//                     for(i = pos; i < n - 1; i++) arr[i] = arr[i+1];
//                     n--;
//                 } else printf("Invalid pos\n");
//                 break;
//             case 4:
//                 for(i = 0; i < n; i++) printf("%d ", arr[i]);
//                 printf("\n");
//                 break;
//             case 5:
//                 printf("Enter value to search: ");
//                 scanf("%d", &val);
//                 found = -1;
//                 for(i = 0; i < n; i++) if (arr[i] == val) found = i;
//                 if (found != -1) printf("Found at pos %d\n", found);
//                 else printf("Not found\n");
//                 break;
//             case 6: return 0;
//         }
//     }
// }

// #include <stdio.h>

// int sumArray(int arr[], int size) {
//     int sum = 0;
//     for(int i = 0; i < size; i++) sum += arr[i];
//     return sum;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     printf("Sum: %d\n", sumArray(arr, size));
//     return 0;
// }

// #include <stdio.h>

// void modifyValue(int *ptr) {
//     *ptr = *ptr + 10;
// }

// int main() {
//     int a = 20;
//     printf("Value before passing pointer: %d\n", a);
//     modifyValue(&a);
//     printf("Value after passing pointer: %d\n", a);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a[10][10], b[10][10], c[10][10];
//     int r1, c1, r2, c2;
//     printf("Enter rows, cols for A: "); scanf("%d %d", &r1, &c1);
//     printf("Enter rows, cols for B: "); scanf("%d %d", &r2, &c2);
//     if (c1 != r2) { printf("Cannot multiply\n"); return 0; }
    
//     printf("Enter A:\n");
//     for(int i=0; i<r1; i++) for(int j=0; j<c1; j++) scanf("%d", &a[i][j]);
//     printf("Enter B:\n");
//     for(int i=0; i<r2; i++) for(int j=0; j<c2; j++) scanf("%d", &b[i][j]);
    
//     for(int i=0; i<r1; i++) {
//         for(int j=0; j<c2; j++) {
//             c[i][j] = 0;
//             for(int k=0; k<c1; k++) c[i][j] += a[i][k] * b[k][j];
//         }
//     }
//     printf("Result Matrix:\n");
//     for(int i=0; i<r1; i++) {
//         for(int j=0; j<c2; j++) printf("%d ", c[i][j]);
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a[10][10], trans[10][10], r, c;
//     printf("Enter rows and cols: "); scanf("%d %d", &r, &c);
//     printf("Enter matrix elements:\n");
//     for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d", &a[i][j]);
    
//     for(int i=0; i<r; i++) for(int j=0; j<c; j++) trans[j][i] = a[i][j];
    
//     printf("Transpose of the Matrix:\n");
//     for(int i=0; i<c; i++) {
//         for(int j=0; j<r; j++) printf("%d ", trans[i][j]);
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: "); scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}














