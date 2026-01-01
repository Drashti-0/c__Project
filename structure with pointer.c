#include<stdio.h>
#include<string.h>

struct study{

   char name[10];
   int id;

};

int main(){

struct study a1;

struct study *ptr=&a1;

scanf("%s",ptr->name);
scanf("%d",ptr->id);


printf("%s",ptr->name);
printf("%d",ptr->id);





}
