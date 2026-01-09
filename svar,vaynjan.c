#include<stdio.h>
#include<string.h>
int main(){

char ch[10];
int ccount=0;
   int count=0;

 gets(ch);
 for(int i=0;ch[i]!=0;i++){
  if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
    {
        count++;
    }
  else{
    ccount++;
  }
 }

printf("svar: %d\n",count);
printf("vaynjan : %d\n",ccount);








}
