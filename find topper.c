//2-d array matrix programm senariyo base question

#include<stdio.h>
int main(){
    int student,sub;
printf("Enter your student : \n");
scanf("%d",&student);

printf("Enter your sub :\n ");
scanf("%d",&sub);

int a[student][sub];
printf("Enter your marks\n");


for(int i=0;i<student;i++){
    printf("student %d\n",i+1);
    for(int j=0;j<sub;j++){
        scanf("%d",&a[i][j]);
    }
}

int maxtotal=-1;
int topper = -1;

for(int i=0;i<student;i++){
    int total=0;
    for(int j=0;j<sub;j++){
        total+=a[i][j];
    }

    if(total>maxtotal){
        maxtotal=total;
        topper = i;
    }
}
printf("topper is student %d with total marks= %d\n ",topper+1,maxtotal);














}
