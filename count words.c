// i love c launguage   count words...
#include<stdio.h>
#include<string.h>
int main(){
char st[10];
 gets(st);
char ch=' ';
 int count=0;
 for(int i=0;st[i]!='\0';i++){
      if(st[i]==ch){
        count++;
      }
 }
    printf("Sentence mai words: %d",count);
    printf("Sentence mai space: %d",count);













}

