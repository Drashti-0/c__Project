#include <stdio.h>

int main() {
int a = 10, b = 20, c = 30;

```
// array of 3 pointers
int *p[3];

p[0] = &a;
p[1] = &b;
p[2] = &c;

printf("Value of a = %d\n", *p[0]);
printf("Value of b = %d\n", *p[1]);
printf("Value of c = %d\n", *p[2]);

return 0;
```

}
