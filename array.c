#include <stdio.h>

int main(){
    int arr[20], n = 0, choice, add_ele, position, new_value;
    do {
        printf("\n0. Exit");
        printf("\n1. Create data");
        printf("\n2. Display data");
        printf("\n3. Count the number of elements");
        printf("\n4. Append elements");
        printf("\n5. Display element by position");
        printf("\n6. Update the value at specific position");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice){
        
        case 0:
            printf("\nExiting...");
            break;
            
            case 1:
            printf("\nNumber of elements: ");
            scanf("%d", &n);

            if (n > 20){
                printf("\nMaximum size is 20. Setting n = 20.");
                n = 20;
            }

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
                printf("\nArray is full. Cannot append more elements.");
                break;
            }

            printf("\nHow many elements to append: ");
            scanf("%d", &add_ele);

            if (n + add_ele > 20){
                printf("\nOnly %d positions left. You can append only that many elements.\n", 20 - n);
                add_ele = 20 - n;
            }

            for (int i = 0; i < add_ele; i++){
                printf("Enter element no %d: ", n + 1);
                scanf("%d", &arr[n]);
                n++;
            }

            printf("\nElements appended successfully!");
            break;

        case 5:
            if (n == 0){
                printf("\nNo data available.");
                break;
            }

            printf("\nEnter position (1 to %d): ", n);
            scanf("%d", &position);

            if (position < 1 || position > n){
                printf("\nInvalid position!");
            } else {
                printf("\nElement at position %d is: %d", position, arr[position - 1]);
            }
            break;

        case 6:
            if (n == 0){
                printf("\nNo data available.");
                break;
            }

            printf("\nEnter position to update (1 to %d): ", n);
            scanf("%d", &position);

            if (position < 1 || position > n){
                printf("\nInvalid position!");
            } else {
                printf("Enter new value: ");
                scanf("%d", &new_value);

                arr[position - 1] = new_value;
                printf("\nValue updated successfully!");
            }
            break;

        default:
            printf("\nInvalid choice");
        }

    } while (choice != 0);

    return 0;
}
