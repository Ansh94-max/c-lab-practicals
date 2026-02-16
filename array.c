#include <stdio.h>

int main()
{
    int arr[20], n, choice;
    do
    {
        printf("\n0.exit ");
        printf("\n1.create data");
        printf("\n2.display data");

        printf("\nenter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
            ;
        case 0:
            break;
        case 1:
            printf("number of elements:");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("\nenter element no %d:", i + 1);
                scanf("%d", &arr[i]);
            }
            break;
        case 2:
            printf("\nArray elements are:");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
        }

    } while (choice != 0);

    return 0;
}
