#include<stdio.h>
int main(){

int i,num;
int Prime=1;

printf("Enter your number: ");
scanf("%d",&num);

for(i=2;i<num;i++){

    if(num%i==0){
        Prime=0;
    }
}


if(Prime){
    printf("This is prime");
}

else{
    printf("Not prime");
}





}
