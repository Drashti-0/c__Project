//bey string merge thy
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    strcat(a, b);    // a + b

    printf("Concatenated string = %s", a);

    return 0;
}
