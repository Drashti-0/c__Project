#include<stdio.h>
#include<string.h>
int main(){
/*char a[10];
//without strlen
gets(a);
for(int i = strlen(a)-1;i>=0;i--){
printf("%c",a[i]);

}
*/
char a[10];

gets(a);
strrev(a);

printf("%s",a);




}
