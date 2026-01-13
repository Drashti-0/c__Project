#include<stdio.h>
int main(){

int i,facto,n;
printf("Enter your number: ");
scanf("%d",&n);

facto=1;
for(i=1;i<=n;i++){
    facto*=i;
}


printf("%d",facto);











}
