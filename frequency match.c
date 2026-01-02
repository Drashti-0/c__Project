#include<stdio.h>
#include<string.h>

int main() {
    char a[200];
    printf("Enter your string: ");
    fgets(a, sizeof(a), stdin);

    int len = strlen(a);

    for(int i=0; i<len; i++) {
        if(a[i] == ' ' || a[i] == '\n')
            continue; // ignore spaces

        int count = 1;

        for(int j=i+1; j<len; j++) {
            if(a[i] == a[j]) {
                count++;
                a[j] = '\0';  // mark counted
            }
        }

        if(a[i] != '\0') {
            printf("%c = %d\n", a[i], count);
        }
    }

    return 0;
}

