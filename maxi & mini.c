//maximum & minimum
#include<stdio.h>
int main(){

int array[10]={1,25,21,65,20};
int maxi,mini;


maxi=array[0];
mini=array[0];

for(int i=0;i<5;i++){
    if(array[i]>maxi){
        maxi=array[i];
    }
    else if(array[i]<mini){
        mini =array[i];
    }
}

printf("Maximum number = %d\n",maxi);
printf("minimum number = %d\n",mini);







}
