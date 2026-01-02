
#include<stdio.h>
void ttable(int a){
int i;
 printf("Enter your table number: ");
  scanf("%d",&a);


for(i=1;i<=10;i++){
    printf("%d X %d = %d \n",a,i,a*i);
  }
}
int main(){
int a;
ttable(a);

}
