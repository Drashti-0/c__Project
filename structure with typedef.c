#include<stdio.h>
#include<string.h>



typedef struct student{

    char name[50];
    float marks;
} s1;

int main() {
   student drashti;

    printf("%s",s1.name);
    s1.marks = 55;
    printf(" Marks: %f", s1.marks);

}
