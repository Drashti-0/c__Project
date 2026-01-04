#include<stdio.h>
#include<string.h>
//draashhti
int main(){
    int i,j,k=0;
   char ch[20],s[20];
   fgets(ch, sizeof(ch),stdin);


   for(i=0;ch[i]!='\0';i++){

         for(j=0;j<i;j++){
         if (ch[i] == ch[j])
                break;
        }
        if (j == i) {
            s[k] = ch[i];
            k++;
        }
         }
          s[k] = '\0';
    printf("%s", s);




}
