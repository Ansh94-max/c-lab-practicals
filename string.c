// #include <stdio.h>

// int main(){
//     char name[]="Ansh";
//     printf("%s",name);
//     return 0;


//length using pointer
// #include<stdio.h>

// int main(){
//     char name[] = "Ansh";
//     char *ptr;
//     int sum = 0;
//     ptr = name;
//     while(*ptr != '\0'){
//         printf("%c", *ptr);
//         ptr++;
//         sum++;
//     }
//     printf("\n");
//     printf("The lenght of the string is %d", sum);
//     return 0;
// }

// search character in string
// #include <stdio.h>

// int main() {
//     char str[] = "Ansh";
//     char ch;
//     scanf("%c", &ch);
//     int found = 0;

//     for(int i = 0; str[i] != '\0'; i++) {
//         if(str[i] == ch) {
//             found = 1;
//             printf("Yes");
//             break;
//         }
//     }

//     if(found == 0)
//         printf("No");

//     return 0;
// }

// reverse a string
// #include<stdio.h>

// int main(){
//     char str[] = "Ansh";
//     int len = strlen(str);

//     for(int i = len - 1; i >= 0; i--) {
//         printf("%c", str[i]);
//     }
//      return 0;
// }

// concatenate a string
#include <stdio.h>
#include <string.h>
int main() {
    char str1[50] = "Hello ";
    char str2[] = "Ansh";
    strcat(str1,str2);
    printf("%s",str1);

    return 0;
}