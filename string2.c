#include <stdio.h>
void removeNonAlphabets(char str[]) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j] = str[i]; 
            j++;
        }
    }
    str[j] = '\0'; 
}
int main() {
    char str[100];
    printf("Input the string: ");
    scanf("%s", str);
    removeNonAlphabets(str);
    printf("After removing non-alphabet characters: %s\n", str);
    return 0;
}