#include <stdio.h>

#include <stdlib.h>

#include <regex.h>

int main() {

    regex_t regex;

    int ret;

    char url[256];

    if (regcomp(&regex, "^(https?://)?([\\da-z.-]+)\\.([a-z.]{2,6})([/\\w .-]*)*/?$", REG_EXTENDED) != 0) {

        fprintf(stderr, "Could not compile regex\n");

        exit(1);

    }

    printf("Enter a URL: ");

    scanf("%s", url);

    ret = regexec(&regex, url, 0, NULL, 0);

    if (ret == 0) {

        printf("Valid URL\n");

    } else {

        printf("Invalid URL\n");

    }

    regfree(&regex);

    return 0;

}
