# PPS-codes-#include <stdio.h>
int main ()
{
int num1 , num2 , result , choice;
printf("enter first number : ");
scanf("%d",&num1);
printf("enter second number : ");
scanf("%d",&num2);

printf("\n--MENU--\n");
printf("1.Adition \n");
printf("2.Subtraction \n");
printf("3.Multiplication \n");
printf("4.Division \n");
printf("Enter your choice : ");
scanf("%d",&choice);

switch(choice){

case 1 : 
result=num1+num2;
printf("Addition = %d\n",result);
break;

case 2 : 
result = num1 - num2;
printf("Subtraction = %d\n",result);
break;

case 3 :
result = num1 * num2;
printf("Multiplication = %d\n",result);
break;

case 4:
if(num2 != 0){
        result=num1/num2;
        printf("Division = %d \n",result);
        } else{ 
        printf("error: division by 0 is not possible. \n");
        }
break;
        
default:
printf("invalid choice \n");

}
return 0;

}
