#include <stdio.h>

int main()
{
    int arr[20], n = 0, choice, add_ele, position, new_value, temp, key;
    int in_arr, count;

    do
    {
        printf("\n0. Exit");
        printf("\n1. Create data");
        printf("\n2. Display data");
        printf("\n3. Count the number of elements");
        printf("\n4. Append elements");
        printf("\n5. Display element by position");
        printf("\n6. Update the value at specific position");
        printf("\n7. Delete the value at specific position");
        printf("\n8. Insert the value at specific position");
        printf("\n9. Display the reverse elements of array");
        printf("\n10. Sort an array");
        printf("\n11. Find element in array");
        printf("\n12. Find position of element");
        printf("\n13. Count occurrences of element");
        printf("\n14. Find largest element");
        printf("\n15. Find smallest element");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            printf("\nExiting...");
            break;

        case 1:
            printf("\nNumber of elements: ");
            scanf("%d", &n);
            if (n > 20)
            {
                printf("\nMaximum size is 20. Setting n = 20.");
                n = 20;
            }
            for (int i = 0; i < n; i++)
            {
                printf("Enter element no %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            break;

        case 2:
            if (n == 0)
                printf("\nNo data available.");
            else
            {
                printf("\nArray elements are: ");
                for (int i = 0; i < n; i++)
                    printf("%d ", arr[i]);
            }
            break;

        case 3:
            printf("\nCount = %d", n);
            break;

        case 4:
            if (n == 20)
            {
                printf("\nArray is full.");
                break;
            }
            printf("\nHow many elements to append: ");
            scanf("%d", &add_ele);
            if (n + add_ele > 20)
                add_ele = 20 - n;

            for (int i = 0; i < add_ele; i++)
            {
                printf("Enter element no %d: ", n + 1);
                scanf("%d", &arr[n]);
                n++;
            }
            printf("\nElements appended successfully!");
            break;

        case 5:
            if (n == 0)
                printf("\nNo data available.");
            else
            {
                printf("\nEnter position (1 to %d): ", n);
                scanf("%d", &position);
                if (position < 1 || position > n)
                    printf("\nInvalid position!");
                else
                    printf("\nElement at position %d is: %d", position, arr[position - 1]);
            }
            break;

        case 6:
            if (n == 0)
                printf("\nNo data available.");
            else
            {
                printf("\nEnter position to update (1 to %d): ", n);
                scanf("%d", &position);
                if (position < 1 || position > n)
                    printf("\nInvalid position!");
                else
                {
                    printf("Enter new value: ");
                    scanf("%d", &new_value);
                    arr[position - 1] = new_value;
                    printf("\nValue updated successfully!");
                }
            }
            break;

        case 7:
            if (n == 0)
                printf("\nNo data available.");
            else
            {
                printf("\nEnter position to delete (1 to %d): ", n);
                scanf("%d", &position);
                if (position < 1 || position > n)
                    printf("\nInvalid position!");
                else
                {
                    for (int i = position - 1; i < n - 1; i++)
                        arr[i] = arr[i + 1];
                    n--;
                    printf("\nElement deleted successfully!");
                }
            }
            break;

        case 8:
            if (n == 20)
                printf("\nArray is full.");
            else
            {
                printf("\nEnter position to insert (1 to %d): ", n + 1);
                scanf("%d", &position);
                if (position < 1 || position > n + 1)
                    printf("\nInvalid position!");
                else
                {
                    printf("Enter value to insert: ");
                    scanf("%d", &new_value);
                    for (int i = n; i >= position; i--)
                        arr[i] = arr[i - 1];
                    arr[position - 1] = new_value;
                    n++;
                    printf("\nElement inserted successfully!");
                }
            }
            break;

        case 9:
            if (n == 0)
                printf("\nNo data available.");
            else
            {
                printf("\nReverse elements are: ");
                for (int i = n - 1; i >= 0; i--)
                    printf("%d ", arr[i]);
            }
            break;

        case 10:
            if (n == 0)
                printf("\nNo data available.");
            else
            {
                for (int i = 0; i < n - 1; i++)
                    for (int j = 0; j < n - i - 1; j++)
                        if (arr[j] > arr[j + 1])
                        {
                            temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                printf("\nArray sorted successfully!");
            }
            break;

        case 11:
            if (n == 0)
                printf("\nNo data available.");
            else
            {
                in_arr = 0;
                printf("Enter element to find: ");
                scanf("%d", &key);
                for (int i = 0; i < n; i++)
                    if (arr[i] == key)
                    {
                        in_arr = 1;
                        break;
                    }
                if (in_arr)
                    printf("yes");
                else
                    printf("no");
            }
            break;

        case 12:
            if (n == 0)
                printf("\nNo data available.");
            else
            {
                in_arr = 0;
                printf("Enter element to find position: ");
                scanf("%d", &key);
                for (int i = 0; i < n; i++)
                    if (arr[i] == key)
                    {
                        printf("Element found at position %d\n", i + 1);
                        in_arr = 1;
                    }
                if (!in_arr)
                    printf("Element not found");
            }
            break;

        case 13:
            if (n == 0)
                printf("\nNo data available.");
            else
            {
                count = 0;
                printf("Enter element to count: ");
                scanf("%d", &key);
                for (int i = 0; i < n; i++)
                    if (arr[i] == key)
                        count++;
                if (count > 0)
                    printf("Element occurred %d times", count);
                else
                    printf("Element not found");
            }
            break;

        case 14:
            if (n == 0)
                printf("\nNo data available.");
            else
            {
                int largest = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] > largest)
                        largest = arr[i];
                printf("\nLargest element is: %d", largest);
            }
            break;

        case 15:
            if (n == 0)
                printf("\nNo data available.");
            else
            {
                int smallest = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] < smallest)
                        smallest = arr[i];
                printf("\nSmallest element is: %d", smallest);
            }
            break;

        default:
            printf("\nInvalid choice");
        }

    } while (choice != 0);

    return 0;
}

            