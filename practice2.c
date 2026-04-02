// fibonacci series 
#include <stdio.h>
int main(){
    int n, a=0, b=1, c;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}

// greatest common divisor 
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d\n", a);
    return 0;
}

// factorial
#include <stdio.h>
int main(){
    int n, fact=1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    printf("%d\n", fact);
    return 0;
}

