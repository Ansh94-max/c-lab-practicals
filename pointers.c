
// #include <stdio.h>

// int main(){
//     int a = 10;
//     int *ptr = &a;
//     printf("%u\n", ptr);
//     printf("%d\n", *ptr);
//     printf("%p\n", ptr);

//     float b = 3.14;
//     float *q = &b;
//     printf("q =%u\n", q);
//     q++;
//     printf("q++ = %u\n", *q);
//     q--;
//     printf("q-- = %u\n", *q);

//     char c = 'a';
//     char *r = &c;
//     printf("r = %u\n", r);
//     r++;
//     printf("r++ = %u\n", *r);
//     r--;
//     printf("r-- = %u\n", *r);
//     return 0;
// }

#include <stdio.h>

int main(){
    int x = 6;
    int N = 4;
    // pointer declaration 
    int *ptr1 , *ptr2 ;
    ptr1 = &N;
    ptr2 = &x;

    printf("ptr1 = %u\n",ptr1,ptr2);

    x = ptr1 - ptr2;

    printf("subtraction of ptr1"
    " & ptr2 is %d\n",
    x);
    return 0;
}