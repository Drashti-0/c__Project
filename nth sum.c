#include<stdio.h>
int ssum(int a){
  int sum=0;

  for(int i=1;i<=a;i++){
    sum+=i;
  }

  return sum;

  }

  int main(){
  int a;
   printf("Enter your number: ");
  scanf("%d",&a);


  printf("%d",ssum(a));






  }
