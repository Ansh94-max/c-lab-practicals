// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }

// #include <stdio.h>

// sum of two numbers
// int main(){
//     int a,b,sum;

//     printf("enter two numbers: ");
//     scanf("%d %d",&a,&b);
//     printf("sum = %d",a+b);

//     return 0;
// }

// program to find an adult,teenager
// #include<stdio.h>

// int main(){
//     int a;
//     scanf("%d",&a);
//     if (a>18)
//     printf("you are an adult");
//     else if (a>13 && a<18)
//     printf("tennager");
//     else
//     printf("bacha");

//     return 0 ;
// }

// program to find a area of square
// #include<stdio.h>

// int main()
// {
//     int side;
//     printf("enter the value:");
//     scanf("%d",&side);
//     printf("area of square: %d",side*side);
//     return 0;

// }

// program to find area of a circle
// #include<stdio.h>
// int main()
// {
//     int radius;
//     float pi = 3.14;
//     printf("enter the radius:");
//     scanf("%d",&radius);
//     printf("area of circle is:%f",pi*radius*radius);
//     return 0;
// }

// to check the student is pass or fail
// #include <stdio.h>

// int main(){
//     int marks;
//     printf("enter your marks:");
//     scanf("%d",&marks);
//     if(marks>30)
//     printf("Pass\n");
//     else
//     printf("Fail\n");
//     // by ternary operator
//     (marks>30)?printf("pass"):printf("fail");
//     return 0;
// }

// program to give grades to a student
// #include <stdio.h>

// int main(){
//     int marks;
//     printf("enter your marks:");
//     scanf("%d",&marks);
//     if(marks>=90 && marks<=100){
//         printf("A+");
//     }
//     else if(marks>=70 && marks<90){
//         printf("A");
//     }
//     else if(marks>=30 && marks<70){
//         printf("B");
//     }
//     else
//     printf("C");
//     return 0;
// }

// to check a character entered by user is upper case or not
// #include <stdio.h>

// int main(){
//     char ch;
//     printf("enter ch:");
//     scanf("%c",&ch);
//     if(ch>='A' && ch<='Z'){
//         printf("character is in uppercase");
//     }else if(ch>='a' && ch<='z'){
//     printf("character is in lowercase");
//     }else
//     printf("enterd the special character or a number");

//     return 0;
// }

// print number 0 to 10
// #include <stdio.h>

// int main(){
//     for(int i=0;i<=10;i++){
//     printf("%d ",i);
//     }
//     int i=1;
//     while(i<=5){
//         printf("\n%d",i);
//         i++;
//     }
//     int j=1;
//     do{
//         printf("\n%d",j);
//         j++;
//     }while(j<=5);
//     return 0;
// }

// sum of first n natural numbers
// #include <stdio.h>

// int main(){
//     int n;
//     int sum=0;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int j=n;j>=1;j--){
//         sum += j;
//         printf("%d ",j);
//     }
//     printf("\n%d",sum);
//     return 0;
// }

// print a table
// #include <stdio.h>

// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int i=1;i<11;i++){
//         printf("%d\n",n*i);
//     }
//     return 0;
// }

// keep taking numbers as input until user enters a odd number
// #include <stdio.h>

// int main(){
//     int n;
//     do{
//         printf("enter the number:");
//         scanf("%d",&n);
//         printf("%d\n",n);
//         if(n%2!=0){
//             break;
//         }
//     }while(1);
//     printf("The number you entered is odd");
//     return 0;
// }

// keep taking input until the number you entered multiplication of 7
// #include <stdio.h>

// int main(){
//     int n;
//     do{
//         printf("enter the number:");
//         scanf("%d",&n);
//         printf("%d\n",n);
//         if(n%7==0){
//             break;
//         }
//     }while(1);
//     printf("The number you entered is multiplication of 7");
//     return 0;
// }

// print all number from 1 to 10 except 6
#include <stdio.h>

int main(){
    for(int i=1;i<11;i++){
        if(i%6==0){
            continue;
            printf("%d ",i);
        }
    }
    return 0;
}