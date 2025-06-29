#include <stdio.h>//STRING MANUPILATION
#include <string.h>

int main() {
    char a[100], a1[100], result[250];
    int c;

    printf("Enter first string: ");
    scanf("%s", a);
    
    printf("Enter second string: ");
    scanf("%s", a1);

    printf("Length of first string = %d\n", strlen(a));
    printf("Length of second string = %d\n", strlen(a1));

    strcpy(result, a);
    strcat(result, a1);

    printf("Final string after concatenation: %s\n", result);

    if (strcmp(a, a1) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}
