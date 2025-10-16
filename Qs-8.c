#include <stdio.h>
int main() {
    char str[100]; 
    str[0] = '\0'; 
    printf("Enter a mix of characters: \n");
    scanf("%[^A-Za-z]", str);
    if (str[0] == '\0') {
        printf("No non-alphabetic characters were stored.\n");
    } else {
        printf("The non-alphabetic characters are: %s\n", str);
    } 
    return 0;
}