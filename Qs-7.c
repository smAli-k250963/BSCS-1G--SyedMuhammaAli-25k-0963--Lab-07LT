#include <stdio.h>
int main() {
    int array[10]; 
    int duplicate[100];
    int x,i,j,q,p;
    for (x = 0; x < 100; x++) {
        duplicate[x] = 0;
    }
    printf("Enter 10 Positive Integers(1 to 100): \n");
    for (i=0; i < 10; i++) {
        printf("Enter Number %d: ", i+1);
        scanf("%d", &array[i]);
    }
    for (j = 0; j < 10; j++) {
        q = array[j] - 1;
        if (q >= 0 && q < 100) {
            if (duplicate[q] == 0) {
                duplicate[q] = 1;
            } else {
                array[j] = - 1;
            }
        }
    }
    for (p=0; p < 10; p++) {
        printf("%d", array[p]);
        if (p < 9) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
