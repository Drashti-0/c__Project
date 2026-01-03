//count vowels

#include<stdio.h>
#include<string.h>

int main(){
    char b[20];

printf("Enter your name: ");
scanf("%s",&b[20]);

int vowels=0,counsonants=0;
for(int i=0;i!='\0'i++){
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'){
            vowels++;
        }
            else{
                counsonants++;
                }
    }
}



printf("Vowels %d",vowels);

printf("counsonants %d\n",counsonants);
















}
