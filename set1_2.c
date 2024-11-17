#include <stdio.h>

int main() {
    char letter;
    int code;

    printf("Enter an uppercase letter (A-Z): ");
    scanf(" %c", &letter);  // Space before %c to handle any newline from previous input

    if (letter >= 'A' && letter <= 'Z') {
        code = letter - 'A' + 1;
        printf("The code for %c is %d\n", letter, code);
    } else {
        printf("Invalid input. Please enter an uppercase letter.\n");
    }
}