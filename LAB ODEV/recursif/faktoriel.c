//Finding factorial of a given number
#include <stdio.h>  
int factorial(int);  
int main()  
{  
  int num=5,fact;  
  printf("TechVidvan Tutorial: Factorial of a number using recursion!\n\n");  
  fact = factorial(num);  
  printf("Factorial of %d is: %d\n",num,fact);  
}  
int factorial(int num)  
{  
if (num==0)  
{  
return 0;  
}  
else if (num==1)  
{  
return 1;  
}  
else   
{  
return num*factorial(num-1);  
}  
}
