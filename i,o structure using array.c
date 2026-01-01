#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    int number[5];
    float mark[5];

};

void main(){
struct student a1={"drashti"};

for(int i=0;i<5;i++){
        printf("Enter your student number: ");
    scanf("%d",&a1.number[i]);
}
for(int i=0;i<5;i++){
        printf("Enter your student mark: ");
    scanf("%f",&a1.mark[i]);
}


printf("%s\n",a1.name);

for(int i=0;i<5;i++){
        printf("your student number:%d \n",a1.number[i]);

}
for(int i=0;i<5;i++){
        printf("your student mark: %f\n",a1.mark[i]);
}



}
