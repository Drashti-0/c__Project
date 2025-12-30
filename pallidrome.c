
#include<stdio.h>
int main(){
int  num,orignal,reminder,reverse=0;

printf("Enter your number: ");
scanf("%d",&num);

orignal=num;
while(num!=0){
    reminder=num%10;
    reverse=reverse*10+reminder;
    num=num/10;
}

if(orignal==reverse){
    printf("The number is pallydrome");
}
else{
    printf("The number is not pallydrome");
}















}
