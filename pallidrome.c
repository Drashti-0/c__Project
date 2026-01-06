//pallidrome aetle reverase thy ske (abcd) not pallidrome aetle (Abbd) teno reverse teno tej thay
#include<stdio.h>
#include<string.h>
int main(){//abbbc

char c[10];
 gets(c);
strlen(c);
int found =0;

for(int i = 0;i=strlen(c)-1;i++){
      char  ch=c[strlen(c)-1-i];
    if(ch==c[i]){
        found=1;
    }
    else{
        found=-1;
    }
}

if(found==1){
    printf("pallidrome");
}
else{
    printf("Not pallidrome");
}













}
