
#include <stdio.h>
#include <stdlib.h>

int main() {
    int positive_count = 0;
    int negative_count = 0;
    int token;

    printf("Enter a string: ");
    yylex();

    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);

    return 0;
}

int yylex() {
    int token;
    while ((token = getchar()) != EOF) {
        if (token == '+' || token == '-') {
            int next_token = getchar();
            if (next_token >= '0' && next_token <= '9') {
                if (token == '+') {
                    positive_count++;
                } else {
                    negative_count++;
                }
            }
        }
    }
    return 0;
}
