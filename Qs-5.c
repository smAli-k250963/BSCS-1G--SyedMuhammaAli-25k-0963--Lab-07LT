#include <stdio.h>

int main() {
    int numbers[10];
    int i,max,min;
    printf("Enter 10 integers, one at a time:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    max=numbers[0];
    min=numbers[0];
    for (i=1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("Largest element(Max): %d\n", max);
    printf("Smallest element(Min): %d\n", min);
    printf("Difference: %d\n", max - min);
    return 0;
}