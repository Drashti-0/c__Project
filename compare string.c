#include<stdio.h>
#include<string.h>

//compare two string
int main(){
int i;
int found;
char st1[10];
char st2[10];

gets(st1);
gets(st2);

for(i=0;st1[i]!='\0';i++){
    if(st1[i]==st2[i]){
        found=1;
    }
    else{
       found =0;
}
}
if(found){
printf("str1 and str2 is sem \n");}

else{
printf("Not sem ");
}









}
