#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];

    printf("Enter string: ");
    gets(a);


    strcpy(b, a);   // a → b मा copy

    printf("Copied string = %s", b);

    return 0;
}

