#include<stdio.h>
#include<string.h>

int main(){
int i;
char st1[10];
char st2[10];

printf("Enter : ");
gets(st1);

for(i=0;st1[i]!='\0';i++){
    st2[i] = st1[i];
}
st2[i] = '\0';

printf("your string: %s",st2);























}
