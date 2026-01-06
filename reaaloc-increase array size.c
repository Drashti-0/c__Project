#include<stdio.h>
#include<stdlib.h>
int main(){
int n,newsize,a[10];

printf("Enter your array size");
scanf("%d",&n);

int *arr=malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("Entr your new array size");
scanf("%d",&newsize);

arr = realloc(arr,newsize*sizeof(int));

for(int i=0;i<newsize;i++){
    scanf("%d",&arr[i]);
}
printf("Final array\n");

for(int i=0;i<n;i++){
    printf("%d",a[i]);
}







}
