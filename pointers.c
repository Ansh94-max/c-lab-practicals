
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

// #include <stdio.h>

// int main(){
//     int x = 6;
//     int N = 4;
//     // pointer declaration 
//     int *ptr1 , *ptr2 ;
//     ptr1 = &N;
//     ptr2 = &x;

//     printf("ptr1 = %u\n",ptr1,ptr2);

//     x = ptr1 - ptr2;

//     printf("subtraction of ptr1"
//     " & ptr2 is %d\n",
//     x);
//     return 0;
// }

// comparison pointers
#include <stdio.h>

int main()
{
    // declaring array
    int arr[5];

    // declaring pointer to array name
    // Note: In strict C, &arr is type 'int (*)[5]', but points to the same location
    int *ptr1 = (int *)&arr; 

    // declaring pointer to first element
    int *ptr2 = &arr[0];

    if (ptr1 == ptr2) {
        printf("Pointer to Array Name and First Element \nare Equal.");
    }
    else {
        printf("Pointer to Array Name and First Element \nare not Equal.");
    }

    return 0;
}

// null pointer
#include <stdio.h>

int main()
{
    // 1. Initialize a pointer to NULL
    int* ptr = NULL;

    // 2. Check if the pointer is NULL
    if (ptr == NULL) {
        printf("The pointer is NULL\n");
    }
    else {
        printf("The pointer is not NULL\n");
    }

    return 0;
}
// pointer to element
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};

    printf("%d\n", arr[0]);      // Output: 10
    printf("%d\n", *(arr));      // Output: 10

    printf("%d\n", arr[1]);      // Output: 20
    printf("%d\n", *(arr + 1));  // Output: 20

    return 0;
}

// pointer to whole array
#include <stdio.h>

int main() {
    int arr[3] = {5, 10, 15};
    int *ptr = arr;

    printf("%d\n", ptr[0]);  // 15
    printf("%d\n", *(ptr + 2)); // 15

    return 0;
}

// pointer to whole array
#include <stdio.h>
int main() {
int arr[3] = {5, 10, 15};
int (*ptr)[3] = &arr;

printf("%d\n", (*ptr)[0]);  // 5
printf("%d\n", (*ptr)[1]);  // 10
printf("%d\n", (*ptr)[2]);
  // 15       
return 0;
}