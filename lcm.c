
#include<stdio.h>
int main(){

int num1,num2,i,lcm;

printf("Enter your digite: ");
scanf("%d",&num1);


printf("Enter your digite: ");
scanf("%d",&num2);

if(num1>num2){
       lcm=num1 ;
}

else{
    lcm=num2;
}

while(1){
    if(lcm%num1==0&&lcm%num2==0)
    {
        printf("%d",lcm);
        break;
    }
    lcm++;
}












}
