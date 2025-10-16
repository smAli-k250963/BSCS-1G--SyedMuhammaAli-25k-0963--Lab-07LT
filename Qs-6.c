#include <stdio.h>
int main() {
    char word[50];
    int vow = 0, cons=0,i=0;
    char c;
    printf("Enter a single word:\n");
    scanf("%s", word);
    while (word[i] != '\0') {
        c = word[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
                vow++;
            } else {
                cons++;
            }
        } 
        i++;
    }
    printf("Total Vowels: %d\n", vow);
    printf("Total Consonants: %d\n", cons);
    return 0;
}