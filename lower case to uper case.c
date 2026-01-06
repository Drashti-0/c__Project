#include<stdio.h>
#include<string.h>
int main(){
   /*char ch[10];
   int i;
 gets(ch);
   for(i=0;ch[i]!='\0';i++){
       ch[i]=ch[i]-32;

   }
printf("%s",ch);
*/
char ch[10];

gets(ch);
strupr(ch);
printf("%s",strupr(ch));


}
