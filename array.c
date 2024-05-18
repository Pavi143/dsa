#include <stdio.h>

int main() {
    int a[20], i, n, s, p[20], b, c, pos, j, flag;
    printf("Enter 1 to search an element from the array by using an element.\n");
    printf("Enter 2 to search an element from an array by using the index value.\n");
    printf("Enter 3 to insert an element in the array.\n");
    printf("Enter 4 to delete an element from an array.\n");
    printf("Enter 5 to traversal the array.\n");
    printf("Enter 6 to exit\n");
    printf("~~~~~~~~~~~~\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int ch = 1;
    while (ch) {
        printf("Enter your choice: ");
        scanf("%d", &c);

        switch (c) {
            case 1:
                printf("Searching an element from the array by using element.\n");
                printf("Enter the element to be searched: ");
                scanf("%d", &s);
                flag = 0;
                for (i = 0; i < n; i++) {
                    if (a[i] == s) {
                        printf("Element found at position %d.\n", i);
                        flag = 1;
                        break;
                    }
                }
                if (!flag) {
                    printf("Element not found.\n");
                }
                break;

            case 2:
                printf("Searching an element from the array by using the index value.\n");
                printf("Enter the index to be searched: ");
                scanf("%d", &s);
                if (s >= 0 && s < n) {
                    printf("Element at position %d is %d.\n", s, a[s]);
                } else {
                    printf("Invalid index.\n");
                }
                break;

            case 3:
                printf("Inserting an element into the array.\n");
                if (n >= 20) {
                    printf("Array is full, cannot insert more elements.\n");
                    break;
                }
                printf("Enter the position to insert the element (0 to %d): ", n);
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Invalid position.\n");
                    break;
                }
                printf("Enter the element to be inserted: ");
                scanf("%d", &b);
                for (i = n; i > pos; i--) {
                    a[i] = a[i - 1];
                }
                a[pos] = b;
                n++;
                printf("Array after insertion:\n");
                for (i = 0; i < n; i++) {
                    printf("%d\n", a[i]);
                }
                break;

            case 4:
                printf("Deleting an element from the array.\n");
                printf("Enter the element to be deleted: ");
                scanf("%d", &b);
                flag = 0;
                for (i = 0; i < n; i++) {
                    if (a[i] == b) {
                        for (j = i; j < n - 1; j++) {
                            a[j] = a[j + 1];
                        }
                        n--;
                        flag = 1;
                        break;
                    }
                }
                if (flag) {
                    printf("Array after deletion:\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\n", a[i]);
                    }
                } else {
                    printf("Element not found.\n");
                }
                break;

            case 5:
                printf("Traversal of the array:\n");
                for (i = 0; i < n; i++) {
                    printf("%d\n", a[i]);
                }
                break;

            case 6:
                printf("Exiting...\n");
                ch = 0;
                break;

            default:
                printf("Not a valid choice!!\n");
        }
    }
    return 0;
}

