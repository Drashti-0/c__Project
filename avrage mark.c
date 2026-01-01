#include<stdio.h>
#include<string.h>

struct avarage{
 char name[10];
 int marks[3];

}avg;

void main(){

struct avarage avg={"drashti"};
printf("%s",avg.name);
int sum=0;

for(int i=0;i<3;i++){
    printf("Entr your marks:\n ");
    scanf("%d",&avg.marks[i]);
}
    for(int i=0;i<3;i++){
     sum+=avg.marks[i];
}

int total_avg=(sum/3);

    printf("your avrage  marks: %d\n ",total_avg);




}
