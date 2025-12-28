#include<stdio.h>
#include<string.h>
 int main(){

char  ch[20];
int i,j;
fgets(ch, sizeof(ch), stdin);
int a=strlen(ch);

for(int i=0;i<a-1;i++){
    for(int j=0;j<a-1-i;j++){
        if(ch[j]>ch[j+1]){
           int temp=ch[j];
            ch[j]=ch[j+1];
            ch[j+1]=temp;
        }
    }}

    printf("%s ",ch);










}
