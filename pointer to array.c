//pela aarray lye ane line ma pointer point kre ane khali value print thati jay
#include <stdio.h>

int main() {
int a[5] = {10, 20, 30, 40, 50};


// pointer to array of 5 integers
int (*p)[5];

p = &a;   // p now points to entire array

printf("First element = %d\n", (*p)[0]);
printf("Second element = %d\n", (*p)[1]);
printf("Fifth element = %d\n", (*p)[4]);

return 0;


}
