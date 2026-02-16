#include <stdio.h>

int main(){
    int arr[20],n;
    do{
        printf("\n0. ");
        printf("\n1.create data");
        printf("\n1.create data");
        printf("\n1.create data");
    }while();
    printf("number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nenter element no %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray elements are:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

