//ek imploy nu id hoy search krta batava joiae ke te found che k nhi

#include<stdio.h>
int main(){
int a[5],n;

int found=0;
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
printf("Enter your found number\n");
scanf("%d",&n);

for(int i=0;i<5;i++){
    if(n==a[i]){
      found=1;
    }
}
if(found==1)
{
    printf("This id is found");
}
else{
    printf("This id is not found");
}









}
