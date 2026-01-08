
#include<stdio.h>
int main(){
FILE *fp;
int num;

fp=fopen("2.txt","w");
fprintf(fp,"%d",25);
fclose(fp);

fp=fopen("2.txt","r");
fscanf(fp,"%d",&num);
printf("%p",num);
fclose(fp);





}
