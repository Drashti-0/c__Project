#include <stdio.h>

int main() {
    char a[100];

    printf("Enter string: ");
    gets(a);

    int len = 0;

    // strlen() વિના length શોધીએ છીએ
    for(int i = 0; a[i] != '\0'; i++) {
        len++;
    }

    printf("Length = %d", len);

    return 0;
}

