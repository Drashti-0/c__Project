#include<stdio.h>
int main(){

int i,num,even=0;

printf("Enter your number: ");
scanf("%d",&num);

for(i=2;i<=num;i++){
    if(num%2==0){
        even=1;
    }
}
if(even)
{
printf("even");
}

else{
    printf("odd");
}









}
