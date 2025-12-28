#include<stdio.h>
int main(){
int number,deposit,withdraw,pin=9003;
int bank_balance = 2000;
for(int i=1;i<=3;i++){
printf("\nEnter your pin number: ");
scanf("%d",&pin);

if(pin==9003){

while(1){

printf("1.check balance\n");
printf("2.Deposit money\n");
printf("3.withdraw money\n");
printf("4.exit\n");

printf("Enter your choise:");
scanf("%d",&number);

if(number==1){

    printf("Your bank balence is %d\n",bank_balance);

}
 else if(number==2){
        printf("Enter Your deposit money: \n");
        scanf("%d",&deposit);
        printf("Now,Your Deposit money is %d\n",deposit);
        bank_balance = bank_balance + deposit;
        printf("After deposit money your bank balance is %d\n",bank_balance);
}

 else if(number==3){
printf("Enter your withdraw money:\n");
    scanf("%d",&withdraw);

 if(withdraw<=bank_balance){
    printf("You with successfully withdraw money %d\n",withdraw);
   bank_balance = bank_balance - withdraw;
 printf("After you are withdraw money and your bank balance is %d\n ",bank_balance);
 }
 else{
    printf("sorry you can not withdraw money\n");
 }

}

else {
    printf("Thank you using ATM\n");
    break;
}

number++;
}
}


else{
    printf("Your pin is wrong so you can not using ATM");
}

}




}

