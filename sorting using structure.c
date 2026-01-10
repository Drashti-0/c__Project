#include<stdio.h>
#include<string.h>

struct det{
    char name[10];
    int mark;

}a1;
int main(){
struct det a1[4]={

    {"drashti",54},{"abc",87},{"tra",74},{"ddhruti",333}

    };

for(int i=0;i<3;i++){
for(int j=0;j<3-i;j++){
if(strcmp(a1[j].name,a1[j+1].name) >0){
            struct det temp = a1[j];
            a1[j]=a1[j+1];
            a1[j+1]=temp;
}
 }
}

for(int i=0;i<4;i++){
        printf("Your name: %s , your mark: %d\n",a1[i].name,a1[i].mark);

}


}


