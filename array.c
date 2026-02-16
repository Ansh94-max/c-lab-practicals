#include <stdio.h>

int main(){
    int arr[20], n = 0, choice, add_ele;
    do {
        printf("\n0. Exit");
        printf("\n1. Create data");
        printf("\n2. Display data");
        printf("\n3. Count the number of elements");
        printf("\n4. Append elements");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice){
        case 0:
            printf("\nExiting...");
            break;
            case 1:
            printf("\nNumber of elements: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++){
                printf("Enter element no %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            break;
            case 2:
            if (n == 0){
                printf("\nNo data available. Please create data first.");
            } else {
                printf("\nArray elements are: ");
                for (int i = 0; i < n; i++){
                    printf("%d ", arr[i]);
                }
            }
            break;
            case 3:
            printf("\nCount = %d", n);
            break;
            case 4:
            if (n == 20){
                printf("\narray is full. cannot append more elements.");
                break;
            }
            printf("\nHow many elements to append: ");
            scanf("%d", &add_ele);
            
            for (int i = 0; i < add_ele; i++){
                printf("Enter element no %d: ", n + 1);
                scanf("%d", &arr[n]);
                n++;
            }

            printf("\nElements appended successfully!");
            break;

        default:
            printf("\nInvalid choice");
        }

    } while (choice != 0);

    return 0;
}
