#include<stdio.h>
#include<string.h>

struct student{
   char name[100];
   int mark;
float number;

 struct andar{
   char nick_name[10];
   int wrong_mark;
   float country_number;

 }wrong;

}real;


void main(){

     struct student real = {
        "drashti", 95, 2.0,
        {"datti", 96, 2.0}
    };


 printf("name: %s mark: %d number:%f\n",real.name,real.mark,real.number);

printf("name: %s mark: %d number:%f\n",real.wrong.nick_name,real.wrong.wrong_mark,real.wrong.country_number);

}
