#include<stdio.h>
int main(){
    int x;
    x = 65;
    printf("\n%c",x);
    printf("\n%c %d %f","A",35,4.5);
    printf("\n%5d% 8.2f",753,4.1678);
    printf("\n%-5d% 8.2f",753,4.1678);
    printf("\n%08d% 9.2f",753,4.1678);
    printf("enetr the value:");
    scanf("%d",&x);
    }

#include<stdio.h>
#include<stdbool.h>
int main(){
int a;
char ch;
float f;
char s1[20];
double d;
bool flag = true;

scanf("\n%d",&a);
scanf("\n%c",&ch);
scanf("\n%f",&f);
scanf("\n%s",&s1);
scanf("\n%lf",&d);

printf("\n int: %d",a);
printf("\n char: %c",ch);
printf("\n float: %f",f);
printf("\n string: %s",s1);
printf("\n double: %lf",d);
printf("\n boolean: %d",flag);

}

//arithmetic operators
#include <stdio.h>
int main(){
    int x=2;
    int y=2;
    float f=(float)x/y;
    printf("\n%d",x+y);
    printf("\n%d",x-y);
    printf("\n%d",x*y);
    printf("\n%d",x/y);
    printf("\n%d",x%y);
    printf("\n%d",x&=y);
    printf("\n%f",f);
    printf("\n%d",sizeof(f));

    return 0;
}

#include<stdio.h>
int main(){
    int a,b,x;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    printf((x=(a>b))?"a is bigger":"a is lower");

    return 0;
}

#include<stdio.h>
int main(){
    int x=64;
    printf("\n%d",x<<3);
    printf("\n%d",x>>3);
    return 0;
}

