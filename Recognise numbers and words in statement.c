#include <stdio.h>

#include <stdlib.h>

int main() {

    printf("Enter a statement: ");

    yylex();

    return 0;

}

int yylex() {

    int token;

    while ((token = getchar()) != EOF) {

        if (isdigit(token)) {

            printf("Number: %c", token);

            while ((token = getchar()) != EOF && isdigit(token)) {

                printf("%c", token);

            }

            printf("\n");

        } else if (isalpha(token)) {

            printf("Word: %c", token);

            while ((token = getchar()) != EOF && isalnum(token)) {

                printf("%c", token);

            }

            printf("\n");

        }

    }

    return 0;

}
