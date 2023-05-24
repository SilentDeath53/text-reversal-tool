#include <stdio.h>
#include <string.h>

void reverse(char *input) {
    int length = strlen(input);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

int main() {
    char input[100];

    printf("Enter a text or number: ");
    scanf("%s", input);

    reverse(input);

    printf("Reversed input: %s\n", input);

    return 0;
}
