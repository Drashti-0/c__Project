#include<stdio.h>
#include<string.h>
struct student{
   char name[10];
   int mark;

}a1;
struct st{
   char nname[10];
   int num;

}b1;

int main(){
 struct student a1={"Drashti",54};
 struct st b1={"Drashti",54};

 if(strcmp(a1.name,b1.nname)==0 && a1.mark==b1.num){
        printf("both are equal");

}
    else{
        printf("not equal");
    }






}
