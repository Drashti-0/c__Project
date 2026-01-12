//percentage uper thi nkki krvo grade

#include<stdio.h>
int main(){
int array[5];

for(int i=0;i<5;i++){
    scanf("%d",&array[i]);
}
for(int i=0;i<5;i++){
    printf("subject %d mark %d \n",i+1,array[i]);
}
int sum=array[0];
for(int i=0;i<5;i++){
    sum+=array[i];
}
int taka = (sum*100)/500;

printf("%d \n",taka);

if(taka>90 && taka<100){
    printf("Grade A\n");
}

else if(taka>80 && taka<90){
    printf("Grade B\n");
}
else if(taka>70 && taka<80){
    printf("Grade C\n");
}
else if(taka>60 && taka<70){
    printf("FAIL \n");
}



}
