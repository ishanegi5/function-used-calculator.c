#include<stdio.h>
#include<math.h>
float sum(float x,float y){
    return x+y;
}
float subtract(float x,float y){
    return x-y;
}
float multiply(float x,float y){
    return x*y;
}
float divide(float x,float y){
    if(y!=0)
        return x/y;
    else{
        printf("error: undefined result\n");
        return 0;
    }
}
long long int power(int x,int y){
    return (long long int)pow(x,y);
}
int modulus(int x,int y){
   if (y!=0)
   {
   return x%y;
   }
   else
   {
       printf("Modulus with zero is undefined.");
   }
}
int main()
{  float num1,num2;
   char ch;
 printf("Enter num1= ");
 scanf("%f",&num1);
 printf("Enter num2= ");
 scanf("%f",&num2);
 printf("Enter any of these +, - , %%, * / ^ : ");
 scanf(" %c",&ch);
 switch(ch)
 { case '+':
 printf("sum of %f and %f = %f\n",num1,num2,sum(num1,num2));
 break;
 case '-':
 printf("subtraction of %f and %f = %f\n",num1,num2,subtract(num1,num2));
break;
 case '*':
 printf("multiplication of %f and %f = %f\n",num1,num2,multiply(num1,num2));
break;
 case '/':
 printf("division of %f and %f = %f\n",num1,num2,divide(num1,num2));
break;
 case '^':
 printf("power of %d raised to %d = %lld\n",(int)num1,(int)num2,power((int)num1,(int)num2));
break;
 case '%':
 printf("modulus of %d and %d = %d\n",(int)num1,(int)num2,modulus((int)num1,(int)num2));
break;
 default:
 printf("you entered something wrong. try again!");
 break;    
 }
 return 0;
}