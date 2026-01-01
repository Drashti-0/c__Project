#include<stdio.h>
int main(){

int b[5],a[5][7]= {
{1,0,1,0,1,0,1},
{1,0,1,1,1,1,1},
{1,1,1,0,1,0,1},
{0,0,0,0,1,0,1},
{1,0,1,1,1,0,1},
};
for(int i=0;i<5;i++){
    for(int j=0;j<7;j++){
        printf("%d ",a[i][j]);
    } printf("\n");
}

int c=0,cc=0;
for(int i=0;i<5;i++){
    for(int j=0;j<7;j++){
        if(a[i][j]==1){
            c++;

        }
        else{
            cc++;
        }
    } b[i]=c;
}
printf("present = %d\n",c);
printf("absent = %d\n",cc);


int max = b[0];
    for(int i=1;i<5;i++){
        if(b[i] > max){
            max = b[i];
            int index = i;
        }
    }
printf("maximum attendence%d is      %d",index+1,max);












}
