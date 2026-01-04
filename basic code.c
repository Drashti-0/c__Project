//dot method line ma badha structure ne declare krvana


#include<stdio.h>
#include<string.h>
struct movie{
    char actor[10],actress[10];
    char movie_name[10];
    int year;
    float rates;
};

void main(){
struct movie a1;
 strcpy(a1.actor, "virat");
strcpy(a1.actress, "anushka");
strcpy(a1.movie_name, "ram");
a1.year=2022;
a1.rates=8.8;

printf("%s\n",a1.actor);
printf("%s\n",a1.actress);
printf("%s\n",a1.movie_name);
printf("%d\n",a1.year);
printf("%f\n",a1.rates);






}























