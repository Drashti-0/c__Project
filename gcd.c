
#include<stdio.h>
int main(){

int num1,num2,i,gcd;

printf("Enter your number: ");
scanf("%d",&num1);

printf("Enter your number: ");
scanf("%d",&num2);


if(num1<0){
    num1=-num1;
}

else if(num2<0){

    num2=-num2;
}


for(i=1;i<=num1&&i<=num2;i++){
    if(num1%i==0&&num2%i==0){
        gcd=i ;
}
    }



printf("%d",gcd);











}
