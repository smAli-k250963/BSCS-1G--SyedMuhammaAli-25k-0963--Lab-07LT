#include <stdio.h>

int main() {
    int arr[5], newarr[5], i, last;
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    last = arr[4];
    for (i = 1; i < 5; i++) {
        newarr[i]=arr[i-1];
    }
    newarr[0] = last;
    printf("Output: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", newarr[i]);
    }
    printf("\n");
    return 0;
}
