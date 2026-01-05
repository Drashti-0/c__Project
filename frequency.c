#include<stdio.h>
int main(){
//drrasshti

char ch[10];
char s[10];

int i;
gets(ch);
int freq=0;

for(i=0;ch[i]!='\0';i++){
        s[i]=ch[i+1];
   if(s[i]==ch[i]){
        freq++;
   }


    printf("%c : %d\n",s[i],freq);

}













}
