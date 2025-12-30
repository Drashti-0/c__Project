#include<stdio.h>
int main(){
int i,num;

printf("Enter your number: ");
scanf("%d",&num);

int reverse,reminder;
reverse = 0;
while(num!=0){
    reminder=num%10;
    reverse=reverse*10+reminder;
    num=num/10;
}

printf("%d",reverse);


