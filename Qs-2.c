#include <stdio.h>

int main() {
    int arr[10], i, num, count = 0;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    if (count > 0)
        printf("%d occurred %d times\n", num, count);
    else
        printf("number not found\n");
    return 0;
}
