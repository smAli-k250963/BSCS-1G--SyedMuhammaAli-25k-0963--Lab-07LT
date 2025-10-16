#include <stdio.h>
int main() {
    char msg[100]; 
    int i = 0;
    printf("Enter a mixed-case message: \n");
    scanf("%[^\n]", msg); 
    while (msg[i] != '\0') {
        if (msg[i] >= 'a' && msg[i] <= 'z') {
            msg[i] = msg[i] - 32;
        }
        else if (msg[i] >= 'A' && msg[i] <= 'Z') {
            msg[i] = msg[i] + 32;
        }
        i++;
    }
    printf("Converted message: %s\n", msg);
    return 0;
}
