//bus ni 10 seat chce te user nKHE temathi kevanu kyu kyu even odd che
#include<stdio.h>
int main(){

int a[10];

for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
}

int even=0;
int odd=0;
 for(int i=0;i<10;i++){
    if(a[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
 }
printf("even=%d\n",even);
printf("odd=%d\n",odd);












}
